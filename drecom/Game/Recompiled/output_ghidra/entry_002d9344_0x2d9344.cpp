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

// Function: entry_002d9344
// Address: 0x2d9344 - 0x2d9394
void entry_002d9344_0x2d9344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9344_0x2d9344");
#endif

    switch (ctx->pc) {
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9358u: goto label_2d9358;
        default: break;
    }

    ctx->pc = 0x2d9344u;

    // 0x2d9344: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9348: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2D9348u;
    SET_GPR_U32(ctx, 31, 0x2D9350u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2D9348u, 0x2D9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9350u;
label_2d9350:
    // 0x2d9350: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2D9350u;
    SET_GPR_U32(ctx, 31, 0x2D9358u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2D9350u, 0x2D9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9358u;
label_2d9358:
    // 0x2d9358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d935c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2d935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d9360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9364: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D9364u;
    {
        const bool branch_taken_0x2d9364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9364) {
            ctx->pc = 0x2D93DCu;
            return;
        }
    }
    ctx->pc = 0x2D936Cu;
    // 0x2d936c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d936cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9370: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D9370u;
    {
        const bool branch_taken_0x2d9370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d9370) {
            ctx->pc = 0x2D93C4u;
            return;
        }
    }
    ctx->pc = 0x2D9378u;
    // 0x2d9378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d937c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D937Cu;
    {
        const bool branch_taken_0x2d937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d937c) {
            ctx->pc = 0x2D93ACu;
            return;
        }
    }
    ctx->pc = 0x2D9384u;
    // 0x2d9384: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9384u;
    {
        const bool branch_taken_0x2d9384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9384) {
            ctx->pc = 0x2D9394u;
            return;
        }
    }
    ctx->pc = 0x2D938Cu;
    // 0x2d938c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D938Cu;
    {
        const bool branch_taken_0x2d938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d938c) {
            ctx->pc = 0x2D93ECu;
            return;
        }
    }
    ctx->pc = 0x2D9394u;
}
