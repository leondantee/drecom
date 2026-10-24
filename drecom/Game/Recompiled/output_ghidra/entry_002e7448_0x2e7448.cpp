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

// Function: entry_002e7448
// Address: 0x2e7448 - 0x2e74a0
void entry_002e7448_0x2e7448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7448_0x2e7448");
#endif

    switch (ctx->pc) {
        case 0x2e7454u: goto label_2e7454;
        case 0x2e7460u: goto label_2e7460;
        default: break;
    }

    ctx->pc = 0x2e7448u;

    // 0x2e7448: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e744c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E744Cu;
    SET_GPR_U32(ctx, 31, 0x2E7454u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E744Cu, 0x2E7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7454u;
label_2e7454:
    // 0x2e7454: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e7454u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e7458: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E7458u;
    SET_GPR_U32(ctx, 31, 0x2E7460u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E7458u, 0x2E7460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7460u;
label_2e7460:
    // 0x2e7460: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2e7460u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e7464: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e7464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e7468: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x2e7468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2e746c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2e746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7470: 0x10a4001d  beq         $a1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7470u;
    {
        const bool branch_taken_0x2e7470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e7470) {
            ctx->pc = 0x2E74E8u;
            return;
        }
    }
    ctx->pc = 0x2E7478u;
    // 0x2e7478: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e7478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e747c: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E747Cu;
    {
        const bool branch_taken_0x2e747c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e747c) {
            ctx->pc = 0x2E74D0u;
            return;
        }
    }
    ctx->pc = 0x2E7484u;
    // 0x2e7484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e7484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7488: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7488u;
    {
        const bool branch_taken_0x2e7488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e7488) {
            ctx->pc = 0x2E74B8u;
            return;
        }
    }
    ctx->pc = 0x2E7490u;
    // 0x2e7490: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7490u;
    {
        const bool branch_taken_0x2e7490 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7490) {
            ctx->pc = 0x2E74A0u;
            return;
        }
    }
    ctx->pc = 0x2E7498u;
    // 0x2e7498: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7498u;
    {
        const bool branch_taken_0x2e7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7498) {
            ctx->pc = 0x2E74F8u;
            return;
        }
    }
    ctx->pc = 0x2E74A0u;
}
