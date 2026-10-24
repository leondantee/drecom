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

// Function: entry_00299f40
// Address: 0x299f40 - 0x299f50
void entry_00299f40_0x299f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00299f40_0x299f40");
#endif

    ctx->pc = 0x299f40u;

    // 0x299f40: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x299f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x299f44: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x299f44u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x299f48: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x299f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x299f4c: 0xac6401d0  sw          $a0, 0x1D0($v1)
    ctx->pc = 0x299f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 4));
    ctx->pc = 0x299f50u;
}
