#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00290e14
// Address: 0x290e14 - 0x290e18
void entry_00290e14_0x290e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00290e14_0x290e14");
#endif

    ctx->pc = 0x290e14u;

    // 0x290e14: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x290e14u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x290e18u;
}
