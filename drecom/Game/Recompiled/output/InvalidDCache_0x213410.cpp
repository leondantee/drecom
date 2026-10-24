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

// Function: InvalidDCache
// Address: 0x213410 - 0x213484
void InvalidDCache_0x213410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InvalidDCache_0x213410");
#endif

    switch (ctx->pc) {
        case 0x213438u: goto label_213438;
        case 0x213468u: goto label_213468;
        default: break;
    }

    ctx->pc = 0x213410u;

    // 0x213410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213414: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x213414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x213418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21341c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21341cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x213420: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x213420u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x213424: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x213424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x213428: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x213428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x21342c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21342Cu;
    {
        const bool branch_taken_0x21342c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21342Cu;
        // 0x213430: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21342c) {
            ctx->pc = 0x213454u;
            goto label_213454;
        }
    }
    ctx->pc = 0x213434u;
    // 0x213434: 0x0  nop
    ctx->pc = 0x213434u;
    // NOP
label_213438:
    // 0x213438: 0x42000039  di
    ctx->pc = 0x213438u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x21343c: 0x40f  sync.p
    ctx->pc = 0x21343cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213440: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213440u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x213444: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213448: 0x0  nop
    ctx->pc = 0x213448u;
    // NOP
    // 0x21344c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21344Cu;
    {
        const bool branch_taken_0x21344c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21344c) {
            ctx->pc = 0x213438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213438;
        }
    }
    ctx->pc = 0x213454u;
label_213454:
    // 0x213454: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x213454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x213458: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x213458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x21345c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x21345cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x213460: 0xc084cda  jal         func_213368
    ctx->pc = 0x213460u;
    SET_GPR_U32(ctx, 31, 0x213468u);
    ctx->pc = 0x213464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213460u;
    // 0x213464: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213368u, 0x213460u, 0x213468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213468u;
label_213468:
    // 0x213468: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213468u;
    {
        const bool branch_taken_0x213468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213468u;
        // 0x21346c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213468) {
            ctx->pc = 0x213478u;
            goto label_213478;
        }
    }
    ctx->pc = 0x213470u;
    // 0x213470: 0x42000038  ei
    ctx->pc = 0x213470u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x213474: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213478:
    // 0x213478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21347c: 0x3e00008  jr          $ra
    ctx->pc = 0x21347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21347Cu;
        // 0x213480: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213484u;
}
