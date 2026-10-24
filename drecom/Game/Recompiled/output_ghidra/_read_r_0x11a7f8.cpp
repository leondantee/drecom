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

// Function: _read_r
// Address: 0x11a7f8 - 0x11a858
void _read_r_0x11a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_read_r_0x11a7f8");
#endif

    switch (ctx->pc) {
        case 0x11a824u: goto label_11a824;
        default: break;
    }

    ctx->pc = 0x11a7f8u;

    // 0x11a7f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11a7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11a7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a800: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11a808: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11a808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a80c: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x11a810: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a818: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x11a818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0E20u, _value); } while (0);
    // 0x11a81c: 0xc084bf0  jal         func_212FC0
    ctx->pc = 0x11A81Cu;
    SET_GPR_U32(ctx, 31, 0x11A824u);
    ctx->pc = 0x11A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A81Cu;
    // 0x11a820: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212FC0u;
    {
        ctx->pc = 0x11A824u;
        ps2_stubs::read(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11A824u) { return; }
    ctx->pc = 0x11A824u;
label_11a824:
    // 0x11a824: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a828: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a82c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A82Cu;
    {
        const bool branch_taken_0x11a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A82Cu;
        // 0x11a830: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a82c) {
            ctx->pc = 0x11A844u;
            goto label_11a844;
        }
    }
    ctx->pc = 0x11A834u;
    // 0x11a834: 0x8e220e20  lw          $v0, 0xE20($s1)
    ctx->pc = 0x11a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3616)));
    // 0x11a838: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A838u;
    {
        const bool branch_taken_0x11a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a838) {
            ctx->pc = 0x11A83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A838u;
            // 0x11a83c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A844u;
            goto label_11a844;
        }
    }
    ctx->pc = 0x11A840u;
    // 0x11a840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11a840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11a844:
    // 0x11a844: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11a844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a848: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11a848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a850: 0x3e00008  jr          $ra
    ctx->pc = 0x11A850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A850u;
        // 0x11a854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A858u;
}
