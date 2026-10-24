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

// Function: entry_00298a74
// Address: 0x298a74 - 0x298ac0
void entry_00298a74_0x298a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298a74_0x298a74");
#endif

    switch (ctx->pc) {
        case 0x298ab8u: goto label_298ab8;
        default: break;
    }

    ctx->pc = 0x298a74u;

    // 0x298a74: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a7c: 0x2021804  sllv        $v1, $v0, $s0
    ctx->pc = 0x298a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x298a80: 0x8c821348  lw          $v0, 0x1348($a0)
    ctx->pc = 0x298a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4936)));
    // 0x298a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x298a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x298a88: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x298A88u;
    {
        const bool branch_taken_0x298a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298a88) {
            ctx->pc = 0x298AC0u;
            return;
        }
    }
    ctx->pc = 0x298A90u;
    // 0x298a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a94: 0x2022004  sllv        $a0, $v0, $s0
    ctx->pc = 0x298a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x298a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298a9c: 0x8c621348  lw          $v0, 0x1348($v1)
    ctx->pc = 0x298a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4936)));
    // 0x298aa0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x298aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x298aa4: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x298aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x298aa8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x298aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298aac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x298aacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x298ab0: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x298AB0u;
    SET_GPR_U32(ctx, 31, 0x298AB8u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x298AB0u, 0x298AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298AB8u;
label_298ab8:
    // 0x298ab8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298AB8u;
    {
        const bool branch_taken_0x298ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298ab8) {
            ctx->pc = 0x298ACCu;
            return;
        }
    }
    ctx->pc = 0x298AC0u;
}
