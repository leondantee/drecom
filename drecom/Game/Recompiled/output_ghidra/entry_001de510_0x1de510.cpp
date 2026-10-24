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

// Function: entry_001de510
// Address: 0x1de510 - 0x1de520
void entry_001de510_0x1de510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de510_0x1de510");
#endif

    ctx->pc = 0x1de510u;

    // 0x1de510: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1de510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de514: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1de514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de51c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1de51cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1de520u;
}
