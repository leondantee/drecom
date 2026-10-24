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

// Function: entry_0010d458
// Address: 0x10d458 - 0x10d488
void entry_0010d458_0x10d458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d458_0x10d458");
#endif

    switch (ctx->pc) {
        case 0x10d46cu: goto label_10d46c;
        case 0x10d478u: goto label_10d478;
        default: break;
    }

    ctx->pc = 0x10d458u;

    // 0x10d458: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x10d458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x10d45c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x10d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x10d460: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d464: 0xc084a88  jal         func_212A20
    ctx->pc = 0x10D464u;
    SET_GPR_U32(ctx, 31, 0x10D46Cu);
    ctx->pc = 0x10D468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D464u;
    // 0x10d468: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x10D46Cu;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D46Cu) { return; }
    ctx->pc = 0x10D46Cu;
label_10d46c:
    // 0x10d46c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d470: 0xc084a88  jal         func_212A20
    ctx->pc = 0x10D470u;
    SET_GPR_U32(ctx, 31, 0x10D478u);
    ctx->pc = 0x10D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D470u;
    // 0x10d474: 0xae2245b8  sw          $v0, 0x45B8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 17848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x10D478u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D478u) { return; }
    ctx->pc = 0x10D478u;
label_10d478:
    // 0x10d478: 0xae0245bc  sw          $v0, 0x45BC($s0)
    ctx->pc = 0x10d478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17852), GPR_U32(ctx, 2));
    // 0x10d47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10d47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d480: 0xc084a88  jal         func_212A20
    ctx->pc = 0x10D480u;
    SET_GPR_U32(ctx, 31, 0x10D488u);
    ctx->pc = 0x10D484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D480u;
    // 0x10d484: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x10D488u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D488u) { return; }
    ctx->pc = 0x10D488u;
}
