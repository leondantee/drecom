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

// Function: entry_0015e318
// Address: 0x15e318 - 0x15e368
void entry_0015e318_0x15e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e318_0x15e318");
#endif

    switch (ctx->pc) {
        case 0x15e324u: goto label_15e324;
        case 0x15e32cu: goto label_15e32c;
        default: break;
    }

    ctx->pc = 0x15e318u;

    // 0x15e318: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e31c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x15E31Cu;
    SET_GPR_U32(ctx, 31, 0x15E324u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x15E31Cu, 0x15E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E324u;
label_15e324:
    // 0x15e324: 0xc067694  jal         func_19DA50
    ctx->pc = 0x15E324u;
    SET_GPR_U32(ctx, 31, 0x15E32Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x15E324u, 0x15E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E32Cu;
label_15e32c:
    // 0x15e32c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e330: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x15e330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15e334: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15e334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e338: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E338u;
    {
        const bool branch_taken_0x15e338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e338) {
            ctx->pc = 0x15E3B0u;
            return;
        }
    }
    ctx->pc = 0x15E340u;
    // 0x15e340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e344: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E344u;
    {
        const bool branch_taken_0x15e344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e344) {
            ctx->pc = 0x15E398u;
            return;
        }
    }
    ctx->pc = 0x15E34Cu;
    // 0x15e34c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e350: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15E350u;
    {
        const bool branch_taken_0x15e350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15e350) {
            ctx->pc = 0x15E380u;
            return;
        }
    }
    ctx->pc = 0x15E358u;
    // 0x15e358: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E358u;
    {
        const bool branch_taken_0x15e358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e358) {
            ctx->pc = 0x15E368u;
            return;
        }
    }
    ctx->pc = 0x15E360u;
    // 0x15e360: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15E360u;
    {
        const bool branch_taken_0x15e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e360) {
            ctx->pc = 0x15E3C0u;
            return;
        }
    }
    ctx->pc = 0x15E368u;
}
