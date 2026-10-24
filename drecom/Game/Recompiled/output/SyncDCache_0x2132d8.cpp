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

// Function: SyncDCache
// Address: 0x2132d8 - 0x21334c
void SyncDCache_0x2132d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SyncDCache_0x2132d8");
#endif

    switch (ctx->pc) {
        case 0x213300u: goto label_213300;
        case 0x213330u: goto label_213330;
        default: break;
    }

    ctx->pc = 0x2132d8u;

    // 0x2132d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2132dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2132dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2132e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2132e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2132e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2132e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2132e8: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x2132e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x2132ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2132ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2132f0: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x2132f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x2132f4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2132F4u;
    {
        const bool branch_taken_0x2132f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2132F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132F4u;
        // 0x2132f8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2132f4) {
            ctx->pc = 0x21331Cu;
            goto label_21331c;
        }
    }
    ctx->pc = 0x2132FCu;
    // 0x2132fc: 0x0  nop
    ctx->pc = 0x2132fcu;
    // NOP
label_213300:
    // 0x213300: 0x42000039  di
    ctx->pc = 0x213300u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x213304: 0x40f  sync.p
    ctx->pc = 0x213304u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213308: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213308u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x21330c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x21330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213310: 0x0  nop
    ctx->pc = 0x213310u;
    // NOP
    // 0x213314: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x213314u;
    {
        const bool branch_taken_0x213314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213314) {
            ctx->pc = 0x213300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213300;
        }
    }
    ctx->pc = 0x21331Cu;
label_21331c:
    // 0x21331c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x213320: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x213320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x213324: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x213328: 0xc084c8c  jal         func_213230
    ctx->pc = 0x213328u;
    SET_GPR_U32(ctx, 31, 0x213330u);
    ctx->pc = 0x21332Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213328u;
    // 0x21332c: 0xc42024  and         $a0, $a2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213230u, 0x213328u, 0x213330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213330u;
label_213330:
    // 0x213330: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x213330u;
    {
        const bool branch_taken_0x213330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x213334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213330u;
        // 0x213334: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213330) {
            ctx->pc = 0x213340u;
            goto label_213340;
        }
    }
    ctx->pc = 0x213338u;
    // 0x213338: 0x42000038  ei
    ctx->pc = 0x213338u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x21333c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21333cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_213340:
    // 0x213340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x213340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213344: 0x3e00008  jr          $ra
    ctx->pc = 0x213344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213344u;
        // 0x213348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21334Cu;
}
