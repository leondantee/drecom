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

// Function: entry_002a5ed8
// Address: 0x2a5ed8 - 0x2a5f60
void entry_002a5ed8_0x2a5ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a5ed8_0x2a5ed8");
#endif

    switch (ctx->pc) {
        case 0x2a5ee4u: goto label_2a5ee4;
        case 0x2a5efcu: goto label_2a5efc;
        case 0x2a5f14u: goto label_2a5f14;
        case 0x2a5f2cu: goto label_2a5f2c;
        case 0x2a5f58u: goto label_2a5f58;
        default: break;
    }

    ctx->pc = 0x2a5ed8u;

    // 0x2a5ed8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a5edc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A5EDCu;
    SET_GPR_U32(ctx, 31, 0x2A5EE4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A5EDCu, 0x2A5EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EE4u;
label_2a5ee4:
    // 0x2a5ee4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5ee8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a5ee8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a5eec: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a5ef0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5ef4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5EF4u;
    SET_GPR_U32(ctx, 31, 0x2A5EFCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5EF4u, 0x2A5EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5EFCu;
label_2a5efc:
    // 0x2a5efc: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a5f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5f04: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a5f08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5f0c: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A5F14u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F0Cu, 0x2A5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F14u;
label_2a5f14:
    // 0x2a5f14: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a5f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f18: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a5f1c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a5f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a5f20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a5f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5f24: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5F24u;
    SET_GPR_U32(ctx, 31, 0x2A5F2Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F24u, 0x2A5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F2Cu;
label_2a5f2c:
    // 0x2a5f2c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a5f2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a5f30: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x2a5f30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a5f34: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a5f34u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a5f38: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x2a5f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a5f3c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a5f3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a5f40: 0x27a900f0  addiu       $t1, $sp, 0xF0
    ctx->pc = 0x2a5f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a5f44: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a5f44u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a5f48: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2a5f48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5f4c: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a5f4cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a5f50: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A5F50u;
    SET_GPR_U32(ctx, 31, 0x2A5F58u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A5F50u, 0x2A5F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5F58u;
label_2a5f58:
    // 0x2a5f58: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x2A5F58u;
    {
        const bool branch_taken_0x2a5f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5f58) {
            ctx->pc = 0x2A6454u;
            return;
        }
    }
    ctx->pc = 0x2A5F60u;
}
