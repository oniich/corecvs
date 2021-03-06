#ifndef MAKE_PRECISE_ALGORITHM_H_
#define MAKE_PRECISE_ALGORITHM_H_
/**
 * \file makePreciseAlgorithm.h
 * \attention This file is automatically generated and should not be in general modified manually
 *
 * \date MMM DD, 20YY
 * \author autoGenerator
 * Generated from precise.xml
 */

/**
 * Helper namespace to hide MakePreciseAlgorithm enum from global context.
 */

namespace MakePreciseAlgorithm {

/** 
 * \brief Make Precise Algorithm 
 * Make Precise Algorithm 
 */
enum MakePreciseAlgorithm {
    /** 
     * \brief KLT 
     * KLT 
     */
    KLT = 0,
    /** 
     * \brief KLT Float 
     * KLT Float 
     */
    KLT_FLOAT = 1,
    /** 
     * \brief KLT Fast 
     * KLT Fast 
     */
    KLT_FAST = 2,
    /** 
     * \brief Last virtual option to run cycles to
     */
    MAKE_PRECISE_ALGORITHM_LAST
};


static inline const char *getName(const MakePreciseAlgorithm &value)
{
    switch (value) 
    {
     case KLT : return "KLT"; break ;
     case KLT_FLOAT : return "KLT_FLOAT"; break ;
     case KLT_FAST : return "KLT_FAST"; break ;
     default : return "Not in range"; break ;
     
    }
    return "Not in range";
}

} //namespace MakePreciseAlgorithm

#endif  //MAKE_PRECISE_ALGORITHM_H_
