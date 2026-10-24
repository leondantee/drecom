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

// Function: entry_002a5ac0
// Address: 0x2a5ac0 - 0x2a5b34
void entry_002a5ac0_0x2a5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a5ac0_0x2a5ac0");
#endif

    switch (ctx->pc) {
        case 0x2a5accu: goto label_2a5acc;
        case 0x2a5ae4u: goto label_2a5ae4;
        case 0x2a5afcu: goto label_2a5afc;
        case 0x2a5b14u: goto label_2a5b14;
        case 0x2a5b30u: goto label_2a5b30;
        default: break;
    }

    ctx->pc = 0x2a5ac0u;

    // 0x2a5ac0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2a5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5ac4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5AC4u;
    SET_GPR_U32(ctx, 31, 0x2A5ACCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5AC4u, 0x2A5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5ACCu;
label_2a5acc:
    // 0x2a5acc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ad0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a5ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a5ad4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5ad8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5adc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5ADCu;
    SET_GPR_U32(ctx, 31, 0x2A5AE4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5ADCu, 0x2A5AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AE4u;
label_2a5ae4:
    // 0x2a5ae4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ae8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a5ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a5aec: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5af0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5af0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5af4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5AF4u;
    SET_GPR_U32(ctx, 31, 0x2A5AFCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5AF4u, 0x2A5AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5AFCu;
label_2a5afc:
    // 0x2a5afc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b00: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a5b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a5b04: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5b08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5b0c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5B0Cu;
    SET_GPR_U32(ctx, 31, 0x2A5B14u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5B0Cu, 0x2A5B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B14u;
label_2a5b14:
    // 0x2a5b14: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5b14u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5b18: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5b1c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a5b20: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x2a5b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a5b24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5b28: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5B28u;
    SET_GPR_U32(ctx, 31, 0x2A5B30u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5B28u, 0x2A5B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5B30u;
label_2a5b30:
    // 0x2a5b30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a5b30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2a5b34u;
}
