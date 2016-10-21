/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name */
#define CMDLINE_PARSER_PACKAGE "spacegen"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.1"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  double xmin_arg;	/**< @brief minimum value for x (default='-20000.0').  */
  char * xmin_orig;	/**< @brief minimum value for x original value given at command line.  */
  const char *xmin_help; /**< @brief minimum value for x help description.  */
  double xmax_arg;	/**< @brief maximum value for x (default='20000.0').  */
  char * xmax_orig;	/**< @brief maximum value for x original value given at command line.  */
  const char *xmax_help; /**< @brief maximum value for x help description.  */
  double ymin_arg;	/**< @brief minimum value for y (default='-20000.0').  */
  char * ymin_orig;	/**< @brief minimum value for y original value given at command line.  */
  const char *ymin_help; /**< @brief minimum value for y help description.  */
  double ymax_arg;	/**< @brief maximum value for y (default='20000.0').  */
  char * ymax_orig;	/**< @brief maximum value for y original value given at command line.  */
  const char *ymax_help; /**< @brief maximum value for y help description.  */
  double vxmin_arg;	/**< @brief minimum value for vx (default='-20000.0').  */
  char * vxmin_orig;	/**< @brief minimum value for vx original value given at command line.  */
  const char *vxmin_help; /**< @brief minimum value for vx help description.  */
  double vxmax_arg;	/**< @brief maximum value for vx (default='20000.0').  */
  char * vxmax_orig;	/**< @brief maximum value for vx original value given at command line.  */
  const char *vxmax_help; /**< @brief maximum value for vx help description.  */
  double vymin_arg;	/**< @brief minimum value for vx (default='-20000.0').  */
  char * vymin_orig;	/**< @brief minimum value for vx original value given at command line.  */
  const char *vymin_help; /**< @brief minimum value for vx help description.  */
  double vymax_arg;	/**< @brief maximum value for vy (default='20000.0').  */
  char * vymax_orig;	/**< @brief maximum value for vy original value given at command line.  */
  const char *vymax_help; /**< @brief maximum value for vy help description.  */
  double mass_min_arg;	/**< @brief minimum value for the mass (default='1000.0').  */
  char * mass_min_orig;	/**< @brief minimum value for the mass original value given at command line.  */
  const char *mass_min_help; /**< @brief minimum value for the mass help description.  */
  double mass_max_arg;	/**< @brief maximum value for the mass (default='2000.0').  */
  char * mass_max_orig;	/**< @brief maximum value for the mass original value given at command line.  */
  const char *mass_max_help; /**< @brief maximum value for the mass help description.  */
  int star_arg;	/**< @brief star count (default='35000').  */
  char * star_orig;	/**< @brief star count original value given at command line.  */
  const char *star_help; /**< @brief star count help description.  */

  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int xmin_given ;	/**< @brief Whether xmin was given.  */
  unsigned int xmax_given ;	/**< @brief Whether xmax was given.  */
  unsigned int ymin_given ;	/**< @brief Whether ymin was given.  */
  unsigned int ymax_given ;	/**< @brief Whether ymax was given.  */
  unsigned int vxmin_given ;	/**< @brief Whether vxmin was given.  */
  unsigned int vxmax_given ;	/**< @brief Whether vxmax was given.  */
  unsigned int vymin_given ;	/**< @brief Whether vymin was given.  */
  unsigned int vymax_given ;	/**< @brief Whether vymax was given.  */
  unsigned int mass_min_given ;	/**< @brief Whether mass-min was given.  */
  unsigned int mass_max_given ;	/**< @brief Whether mass-max was given.  */
  unsigned int star_given ;	/**< @brief Whether star was given.  */

} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char * const *argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char * const *argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
