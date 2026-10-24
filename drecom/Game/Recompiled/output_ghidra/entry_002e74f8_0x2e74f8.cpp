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

// Function: entry_002e74f8
// Address: 0x2e74f8 - 0x2e7540
void entry_002e74f8_0x2e74f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e74f8_0x2e74f8");
#endif

    switch (ctx->pc) {
        case 0x2e7500u: goto label_2e7500;
        default: break;
    }

    ctx->pc = 0x2e74f8u;

    // 0x2e74f8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E74F8u;
    SET_GPR_U32(ctx, 31, 0x2E7500u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E74F8u, 0x2E7500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7500u;
label_2e7500:
    // 0x2e7500: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2e7500u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2e7504: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x2e7504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2e7508: 0x30e80003  andi        $t0, $a3, 0x3
    ctx->pc = 0x2e7508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x2e750c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e7510: 0x1102001d  beq         $t0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E7510u;
    {
        const bool branch_taken_0x2e7510 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7510) {
            ctx->pc = 0x2E7588u;
            return;
        }
    }
    ctx->pc = 0x2E7518u;
    // 0x2e7518: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e751c: 0x11020014  beq         $t0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E751Cu;
    {
        const bool branch_taken_0x2e751c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e751c) {
            ctx->pc = 0x2E7570u;
            return;
        }
    }
    ctx->pc = 0x2E7524u;
    // 0x2e7524: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7528: 0x1102000b  beq         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E7528u;
    {
        const bool branch_taken_0x2e7528 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e7528) {
            ctx->pc = 0x2E7558u;
            return;
        }
    }
    ctx->pc = 0x2E7530u;
    // 0x2e7530: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E7530u;
    {
        const bool branch_taken_0x2e7530 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7530) {
            ctx->pc = 0x2E7540u;
            return;
        }
    }
    ctx->pc = 0x2E7538u;
    // 0x2e7538: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E7538u;
    {
        const bool branch_taken_0x2e7538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7538) {
            ctx->pc = 0x2E7598u;
            return;
        }
    }
    ctx->pc = 0x2E7540u;
}
