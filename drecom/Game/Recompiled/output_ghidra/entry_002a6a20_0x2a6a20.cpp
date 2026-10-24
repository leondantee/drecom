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

// Function: entry_002a6a20
// Address: 0x2a6a20 - 0x2a6a98
void entry_002a6a20_0x2a6a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a6a20_0x2a6a20");
#endif

    switch (ctx->pc) {
        case 0x2a6a2cu: goto label_2a6a2c;
        case 0x2a6a44u: goto label_2a6a44;
        case 0x2a6a5cu: goto label_2a6a5c;
        case 0x2a6a78u: goto label_2a6a78;
        case 0x2a6a94u: goto label_2a6a94;
        default: break;
    }

    ctx->pc = 0x2a6a20u;

    // 0x2a6a20: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a6a24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6A24u;
    SET_GPR_U32(ctx, 31, 0x2A6A2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6A24u, 0x2A6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A2Cu;
label_2a6a2c:
    // 0x2a6a2c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6a30: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a6a34: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a6a38: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6a3c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6A3Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A44u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A3Cu, 0x2A6A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A44u;
label_2a6a44:
    // 0x2a6a44: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6a48: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a6a4c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a6a50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6a54: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6A54u;
    SET_GPR_U32(ctx, 31, 0x2A6A5Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A54u, 0x2A6A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A5Cu;
label_2a6a5c:
    // 0x2a6a5c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a5cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6a60: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6a64: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a6a68: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a6a6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6a70: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6A70u;
    SET_GPR_U32(ctx, 31, 0x2A6A78u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A70u, 0x2A6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A78u;
label_2a6a78:
    // 0x2a6a78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6a7c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6a80: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a6a84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a6a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a6a88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6a8c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6A8Cu;
    SET_GPR_U32(ctx, 31, 0x2A6A94u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6A8Cu, 0x2A6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6A94u;
label_2a6a94:
    // 0x2a6a94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a6a94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a6a98u;
}
