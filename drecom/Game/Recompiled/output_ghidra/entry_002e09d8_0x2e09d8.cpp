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

// Function: entry_002e09d8
// Address: 0x2e09d8 - 0x2e0a28
void entry_002e09d8_0x2e09d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e09d8_0x2e09d8");
#endif

    switch (ctx->pc) {
        case 0x2e09e4u: goto label_2e09e4;
        case 0x2e09ecu: goto label_2e09ec;
        default: break;
    }

    ctx->pc = 0x2e09d8u;

    // 0x2e09d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e09dc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E09DCu;
    SET_GPR_U32(ctx, 31, 0x2E09E4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E09DCu, 0x2E09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09E4u;
label_2e09e4:
    // 0x2e09e4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E09E4u;
    SET_GPR_U32(ctx, 31, 0x2E09ECu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E09E4u, 0x2E09ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E09ECu;
label_2e09ec:
    // 0x2e09ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e09ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e09f0: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2e09f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2e09f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e09f8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2E09F8u;
    {
        const bool branch_taken_0x2e09f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e09f8) {
            ctx->pc = 0x2E0A70u;
            return;
        }
    }
    ctx->pc = 0x2E0A00u;
    // 0x2e0a00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e0a04: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E0A04u;
    {
        const bool branch_taken_0x2e0a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0a04) {
            ctx->pc = 0x2E0A58u;
            return;
        }
    }
    ctx->pc = 0x2E0A0Cu;
    // 0x2e0a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e0a10: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E0A10u;
    {
        const bool branch_taken_0x2e0a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0a10) {
            ctx->pc = 0x2E0A40u;
            return;
        }
    }
    ctx->pc = 0x2E0A18u;
    // 0x2e0a18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0A18u;
    {
        const bool branch_taken_0x2e0a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a18) {
            ctx->pc = 0x2E0A28u;
            return;
        }
    }
    ctx->pc = 0x2E0A20u;
    // 0x2e0a20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0A20u;
    {
        const bool branch_taken_0x2e0a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0a20) {
            ctx->pc = 0x2E0A80u;
            return;
        }
    }
    ctx->pc = 0x2E0A28u;
}
