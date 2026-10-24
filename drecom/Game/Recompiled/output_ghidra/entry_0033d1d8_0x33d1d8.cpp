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

// Function: entry_0033d1d8
// Address: 0x33d1d8 - 0x33d1dc
void entry_0033d1d8_0x33d1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033d1d8_0x33d1d8");
#endif

    ctx->pc = 0x33d1d8u;

    // 0x33d1d8: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x33d1d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33d1dcu;
}
