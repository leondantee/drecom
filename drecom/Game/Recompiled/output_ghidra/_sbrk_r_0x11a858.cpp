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

// Function: _sbrk_r
// Address: 0x11a858 - 0x11a8b4
void _sbrk_r_0x11a858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sbrk_r_0x11a858");
#endif

    switch (ctx->pc) {
        case 0x11a87cu: goto label_11a87c;
        default: break;
    }

    ctx->pc = 0x11a858u;

    // 0x11a858: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a85c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a864: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x11a864u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x11a868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a86c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a870: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a874: 0xc084c1e  jal         func_213078
    ctx->pc = 0x11A874u;
    SET_GPR_U32(ctx, 31, 0x11A87Cu);
    ctx->pc = 0x11A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A874u;
    // 0x11a878: 0xae200e20  sw          $zero, 0xE20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213078u, 0x11A874u, 0x11A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A87Cu;
label_11a87c:
    // 0x11a87c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a880: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11a884: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a888: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A888u;
    {
        const bool branch_taken_0x11a888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A888u;
        // 0x11a88c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a888) {
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A890u;
    // 0x11a890: 0x8e220e20  lw          $v0, 0xE20($s1)
    ctx->pc = 0x11a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3616)));
    // 0x11a894: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A894u;
    {
        const bool branch_taken_0x11a894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a894) {
            ctx->pc = 0x11A898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A894u;
            // 0x11a898: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A8A0u;
            goto label_11a8a0;
        }
    }
    ctx->pc = 0x11A89Cu;
    // 0x11a89c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11a8a0:
    // 0x11a8a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11a8a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a8a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a8a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A8ACu;
        // 0x11a8b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A8B4u;
}
