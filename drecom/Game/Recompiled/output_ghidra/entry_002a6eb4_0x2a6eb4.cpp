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

// Function: entry_002a6eb4
// Address: 0x2a6eb4 - 0x2a6f48
void entry_002a6eb4_0x2a6eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a6eb4_0x2a6eb4");
#endif

    switch (ctx->pc) {
        case 0x2a6ec0u: goto label_2a6ec0;
        case 0x2a6ed8u: goto label_2a6ed8;
        case 0x2a6ef0u: goto label_2a6ef0;
        case 0x2a6f1cu: goto label_2a6f1c;
        case 0x2a6f40u: goto label_2a6f40;
        default: break;
    }

    ctx->pc = 0x2a6eb4u;

    // 0x2a6eb4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2a6eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a6eb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A6EB8u;
    SET_GPR_U32(ctx, 31, 0x2A6EC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A6EB8u, 0x2A6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EC0u;
label_2a6ec0:
    // 0x2a6ec0: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ec4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a6ec4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a6ec8: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a6ecc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6ed0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6ED0u;
    SET_GPR_U32(ctx, 31, 0x2A6ED8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6ED0u, 0x2A6ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6ED8u;
label_2a6ed8:
    // 0x2a6ed8: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x2a6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6edc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a6ee0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a6ee4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6ee8: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6EE8u;
    SET_GPR_U32(ctx, 31, 0x2A6EF0u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6EE8u, 0x2A6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6EF0u;
label_2a6ef0:
    // 0x2a6ef0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a6ef0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6ef4: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x2a6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6ef8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a6ef8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a6efc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2a6efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a6f00: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a6f00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a6f04: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x2a6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a6f08: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a6f08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a6f0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a6f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f10: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a6f10u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a6f14: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6F14u;
    SET_GPR_U32(ctx, 31, 0x2A6F1Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6F14u, 0x2A6F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F1Cu;
label_2a6f1c:
    // 0x2a6f1c: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a6f1cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6f20: 0x8faa0138  lw          $t2, 0x138($sp)
    ctx->pc = 0x2a6f20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2a6f24: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a6f24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a6f28: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2a6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a6f2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a6f2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a6f30: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2a6f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a6f34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a6f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a6f38: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A6F38u;
    SET_GPR_U32(ctx, 31, 0x2A6F40u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A6F38u, 0x2A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6F40u;
label_2a6f40:
    // 0x2a6f40: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x2A6F40u;
    {
        const bool branch_taken_0x2a6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6f40) {
            ctx->pc = 0x2A7468u;
            return;
        }
    }
    ctx->pc = 0x2A6F48u;
}
