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

// Function: _fstat_r
// Address: 0x1177a0 - 0x1177fc
void _fstat_r_0x1177a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_fstat_r_0x1177a0");
#endif

    switch (ctx->pc) {
        case 0x1177c8u: goto label_1177c8;
        default: break;
    }

    ctx->pc = 0x1177a0u;

    // 0x1177a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1177a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1177a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1177a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1177a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1177a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1177ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1177acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177b0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1177b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177b4: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x1177b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x1177b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1177b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1177bc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1177bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177c0: 0xc084c4a  jal         func_213128
    ctx->pc = 0x1177C0u;
    SET_GPR_U32(ctx, 31, 0x1177C8u);
    ctx->pc = 0x1177C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177C0u;
    // 0x1177c4: 0xae200e20  sw          $zero, 0xE20($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 3616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213128u;
    {
        ctx->pc = 0x1177C8u;
        ps2_stubs::fstat(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1177C8u) { return; }
    ctx->pc = 0x1177C8u;
label_1177c8:
    // 0x1177c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1177c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1177ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1177d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1177D0u;
    {
        const bool branch_taken_0x1177d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1177D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177D0u;
        // 0x1177d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177d0) {
            ctx->pc = 0x1177E8u;
            goto label_1177e8;
        }
    }
    ctx->pc = 0x1177D8u;
    // 0x1177d8: 0x8e220e20  lw          $v0, 0xE20($s1)
    ctx->pc = 0x1177d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3616)));
    // 0x1177dc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1177DCu;
    {
        const bool branch_taken_0x1177dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1177dc) {
            ctx->pc = 0x1177E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1177DCu;
            // 0x1177e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1177E8u;
            goto label_1177e8;
        }
    }
    ctx->pc = 0x1177E4u;
    // 0x1177e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1177e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1177e8:
    // 0x1177e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1177e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1177ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1177f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1177f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1177f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1177F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1177F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177F4u;
        // 0x1177f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1177F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1177FCu;
}
