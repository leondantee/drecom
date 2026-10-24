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

// Function: entry_003618f8
// Address: 0x3618f8 - 0x361938
void entry_003618f8_0x3618f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003618f8_0x3618f8");
#endif

    switch (ctx->pc) {
        case 0x361930u: goto label_361930;
        default: break;
    }

    ctx->pc = 0x3618f8u;

    // 0x3618f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3618f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3618fc: 0x8c641244  lw          $a0, 0x1244($v1)
    ctx->pc = 0x3618fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4676)));
    // 0x361900: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x361904: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x361904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x361908: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x361908u;
    {
        const bool branch_taken_0x361908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x361908) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x361910u;
    // 0x361910: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x361910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x361914: 0x8c421244  lw          $v0, 0x1244($v0)
    ctx->pc = 0x361914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4676)));
    // 0x361918: 0x2207c  dsll32      $a0, $v0, 1
    ctx->pc = 0x361918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 1));
    // 0x36191c: 0x4207e  dsrl32      $a0, $a0, 1
    ctx->pc = 0x36191cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 1));
    // 0x361920: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x361920u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361924: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x361924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361928: 0xc05b9ec  jal         func_16E7B0
    ctx->pc = 0x361928u;
    SET_GPR_U32(ctx, 31, 0x361930u);
    ctx->pc = 0x16E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E7B0u, 0x361928u, 0x361930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361930u;
label_361930:
    // 0x361930: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x361930u;
    {
        const bool branch_taken_0x361930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361930) {
            ctx->pc = 0x361A0Cu;
            return;
        }
    }
    ctx->pc = 0x361938u;
}
