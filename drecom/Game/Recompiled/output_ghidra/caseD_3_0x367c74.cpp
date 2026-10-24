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

// Function: caseD_3
// Address: 0x367c74 - 0x367cd4
void caseD_3_0x367c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x367c74");
#endif

    switch (ctx->pc) {
        case 0x367c84u: goto label_367c84;
        case 0x367c90u: goto label_367c90;
        case 0x367ca0u: goto label_367ca0;
        case 0x367cacu: goto label_367cac;
        default: break;
    }

    ctx->pc = 0x367c74u;

    // 0x367c74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367c7c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367C7Cu;
    SET_GPR_U32(ctx, 31, 0x367C84u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367C7Cu, 0x367C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C84u;
label_367c84:
    // 0x367c84: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x367C88u;
    SET_GPR_U32(ctx, 31, 0x367C90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367C88u, 0x367C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C90u;
label_367c90:
    // 0x367c90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367c94: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367c94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367c98: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367C98u;
    SET_GPR_U32(ctx, 31, 0x367CA0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367C98u, 0x367CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CA0u;
label_367ca0:
    // 0x367ca0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367ca4: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x367CA4u;
    SET_GPR_U32(ctx, 31, 0x367CACu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x367CA4u, 0x367CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CACu;
label_367cac:
    // 0x367cac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x367cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367cb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x367cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x367cb4: 0x10600062  beqz        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x367CB4u;
    {
        const bool branch_taken_0x367cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x367cb4) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367CBCu;
    // 0x367cbc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367cc0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x367cc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x367cc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367cc8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x367cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x367ccc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x367CCCu;
    {
        const bool branch_taken_0x367ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x367ccc) {
            ctx->pc = 0x367E40u;
            return;
        }
    }
    ctx->pc = 0x367CD4u;
}
