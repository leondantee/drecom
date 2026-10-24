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

// Function: entry_00365d64
// Address: 0x365d64 - 0x365df8
void entry_00365d64_0x365d64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365d64_0x365d64");
#endif

    switch (ctx->pc) {
        case 0x365d74u: goto label_365d74;
        case 0x365d80u: goto label_365d80;
        case 0x365d90u: goto label_365d90;
        case 0x365d9cu: goto label_365d9c;
        case 0x365dc0u: goto label_365dc0;
        case 0x365de4u: goto label_365de4;
        default: break;
    }

    ctx->pc = 0x365d64u;

    // 0x365d64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d68: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365d68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365d6c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365D6Cu;
    SET_GPR_U32(ctx, 31, 0x365D74u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365D6Cu, 0x365D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D74u;
label_365d74:
    // 0x365d74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d78: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365D78u;
    SET_GPR_U32(ctx, 31, 0x365D80u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365D78u, 0x365D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D80u;
label_365d80:
    // 0x365d80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d84: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365d84u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365d88: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365D88u;
    SET_GPR_U32(ctx, 31, 0x365D90u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365D88u, 0x365D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D90u;
label_365d90:
    // 0x365d90: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365d94: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365D94u;
    SET_GPR_U32(ctx, 31, 0x365D9Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365D94u, 0x365D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D9Cu;
label_365d9c:
    // 0x365d9c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365da0: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x365da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x365da4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x365da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x365da8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x365da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x365dac: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x365DACu;
    {
        const bool branch_taken_0x365dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365dac) {
            ctx->pc = 0x365E30u;
            return;
        }
    }
    ctx->pc = 0x365DB4u;
    // 0x365db4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365db8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x365DB8u;
    SET_GPR_U32(ctx, 31, 0x365DC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x365DB8u, 0x365DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DC0u;
label_365dc0:
    // 0x365dc0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365dcc: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x365dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x365dd0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365dd4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x365dd8: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x365dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x365ddc: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365DDCu;
    SET_GPR_U32(ctx, 31, 0x365DE4u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365DDCu, 0x365DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DE4u;
label_365de4:
    // 0x365de4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365DE4u;
    {
        const bool branch_taken_0x365de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365de4) {
            ctx->pc = 0x365DF8u;
            return;
        }
    }
    ctx->pc = 0x365DECu;
    // 0x365dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365df0: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365DF0u;
    SET_GPR_U32(ctx, 31, 0x365DF8u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365DF0u, 0x365DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DF8u;
}
