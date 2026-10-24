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

// Function: entry_002a4438
// Address: 0x2a4438 - 0x2a44d0
void entry_002a4438_0x2a4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4438_0x2a4438");
#endif

    switch (ctx->pc) {
        case 0x2a4448u: goto label_2a4448;
        case 0x2a4468u: goto label_2a4468;
        case 0x2a4480u: goto label_2a4480;
        case 0x2a4498u: goto label_2a4498;
        case 0x2a44c4u: goto label_2a44c4;
        default: break;
    }

    ctx->pc = 0x2a4438u;

    // 0x2a4438: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a4438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a443c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a443cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4440: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A4440u;
    SET_GPR_U32(ctx, 31, 0x2A4448u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A4440u, 0x2A4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4448u;
label_2a4448:
    // 0x2a4448: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a444c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4450: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4450u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4454: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4454u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4458: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a445c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a445cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4460: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4460u;
    SET_GPR_U32(ctx, 31, 0x2A4468u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4460u, 0x2A4468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4468u;
label_2a4468:
    // 0x2a4468: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a446c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4470: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a4474: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4478: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4478u;
    SET_GPR_U32(ctx, 31, 0x2A4480u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4478u, 0x2A4480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4480u;
label_2a4480:
    // 0x2a4480: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4484: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2a4484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2a4488: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a448c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a448cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4490: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A4490u;
    SET_GPR_U32(ctx, 31, 0x2A4498u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A4490u, 0x2A4498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4498u;
label_2a4498:
    // 0x2a4498: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a4498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a449c: 0x8fa60108  lw          $a2, 0x108($sp)
    ctx->pc = 0x2a449cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a44a0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a44a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a44a4: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a44a8: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2a44a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a44ac: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x2a44acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a44b0: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2a44b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a44b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2a44b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a44b8: 0x71203e28  paddub      $a3, $t1, $zero
    ctx->pc = 0x2a44b8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a44bc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A44BCu;
    SET_GPR_U32(ctx, 31, 0x2A44C4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A44BCu, 0x2A44C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A44C4u;
label_2a44c4:
    // 0x2a44c4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a44c4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a44c8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2A44C8u;
    {
        const bool branch_taken_0x2a44c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a44c8) {
            ctx->pc = 0x2A4770u;
            return;
        }
    }
    ctx->pc = 0x2A44D0u;
}
