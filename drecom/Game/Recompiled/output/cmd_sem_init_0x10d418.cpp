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

// Function: cmd_sem_init
// Address: 0x10d418 - 0x10d4ac
void cmd_sem_init_0x10d418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cmd_sem_init_0x10d418");
#endif

    switch (ctx->pc) {
        case 0x10d46cu: goto label_10d46c;
        case 0x10d478u: goto label_10d478;
        case 0x10d488u: goto label_10d488;
        default: break;
    }

    ctx->pc = 0x10d418u;

    // 0x10d418: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10d418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10d41c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10d41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d420: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10d424: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10d424u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10d428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10d42c: 0x8e2245b8  lw          $v0, 0x45B8($s1)
    ctx->pc = 0x10d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845B8u));
    // 0x10d430: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10D430u;
    {
        const bool branch_taken_0x10d430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x10D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D430u;
        // 0x10d434: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d430) {
            ctx->pc = 0x10D450u;
            goto label_10d450;
        }
    }
    ctx->pc = 0x10D438u;
    // 0x10d438: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d438u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d43c: 0x8e0245bc  lw          $v0, 0x45BC($s0)
    ctx->pc = 0x10d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3845BCu));
    // 0x10d440: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x10D440u;
    {
        const bool branch_taken_0x10d440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D440u;
        // 0x10d444: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d440) {
            ctx->pc = 0x10D49Cu;
            goto label_10d49c;
        }
    }
    ctx->pc = 0x10D448u;
    // 0x10d448: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10D448u;
    {
        const bool branch_taken_0x10d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D448u;
        // 0x10d44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d448) {
            ctx->pc = 0x10D458u;
            goto label_10d458;
        }
    }
    ctx->pc = 0x10D450u;
label_10d450:
    // 0x10d450: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10d450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10d454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10d454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10d458:
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
label_10d488:
    // 0x10d488: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10d488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10d48c: 0xac6245c0  sw          $v0, 0x45C0($v1)
    ctx->pc = 0x10d48cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3845C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C0u, _value); } while (0);
    // 0x10d490: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d494: 0xac4045c4  sw          $zero, 0x45C4($v0)
    ctx->pc = 0x10d494u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3845C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845C4u, _value); } while (0);
    // 0x10d498: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10d498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10d49c:
    // 0x10d49c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10d49cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4a0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10d4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4A4u;
        // 0x10d4a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D4ACu;
}
