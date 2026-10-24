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

// Function: entry_002d1000
// Address: 0x2d1000 - 0x2d1008
void entry_002d1000_0x2d1000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d1000_0x2d1000");
#endif

    ctx->pc = 0x2d1000u;

    // 0x2d1000: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2d1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d1004: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x2d1004u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2d1008u;
}
