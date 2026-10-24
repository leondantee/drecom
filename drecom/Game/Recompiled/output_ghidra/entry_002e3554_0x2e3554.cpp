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

// Function: entry_002e3554
// Address: 0x2e3554 - 0x2e35a4
void entry_002e3554_0x2e3554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3554_0x2e3554");
#endif

    switch (ctx->pc) {
        case 0x2e3560u: goto label_2e3560;
        case 0x2e3568u: goto label_2e3568;
        default: break;
    }

    ctx->pc = 0x2e3554u;

    // 0x2e3554: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2e3554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e3558: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E3558u;
    SET_GPR_U32(ctx, 31, 0x2E3560u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E3558u, 0x2E3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3560u;
label_2e3560:
    // 0x2e3560: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E3560u;
    SET_GPR_U32(ctx, 31, 0x2E3568u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E3560u, 0x2E3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3568u;
label_2e3568:
    // 0x2e3568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e3568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e356c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e356cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e3570: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e3570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3574: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3574u;
    {
        const bool branch_taken_0x2e3574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3574) {
            ctx->pc = 0x2E35ECu;
            return;
        }
    }
    ctx->pc = 0x2E357Cu;
    // 0x2e357c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3580: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3580u;
    {
        const bool branch_taken_0x2e3580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3580) {
            ctx->pc = 0x2E35D4u;
            return;
        }
    }
    ctx->pc = 0x2E3588u;
    // 0x2e3588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e358c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E358Cu;
    {
        const bool branch_taken_0x2e358c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e358c) {
            ctx->pc = 0x2E35BCu;
            return;
        }
    }
    ctx->pc = 0x2E3594u;
    // 0x2e3594: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3594u;
    {
        const bool branch_taken_0x2e3594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3594) {
            ctx->pc = 0x2E35A4u;
            return;
        }
    }
    ctx->pc = 0x2E359Cu;
    // 0x2e359c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E359Cu;
    {
        const bool branch_taken_0x2e359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e359c) {
            ctx->pc = 0x2E35FCu;
            return;
        }
    }
    ctx->pc = 0x2E35A4u;
}
