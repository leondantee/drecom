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

// Function: entry_00322788
// Address: 0x322788 - 0x3227a0
void entry_00322788_0x322788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00322788_0x322788");
#endif

    ctx->pc = 0x322788u;

    // 0x322788: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x322788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x32278c: 0x2442a610  addiu       $v0, $v0, -0x59F0
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x322790: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x322790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x322794: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x322794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x322798: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32279c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x32279cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x3227a0u;
}
