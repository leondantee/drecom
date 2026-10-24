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

// Function: putnum
// Address: 0x2131c0 - 0x213214
void putnum_0x2131c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("putnum_0x2131c0");
#endif

    switch (ctx->pc) {
        case 0x2131d0u: goto label_2131d0;
        case 0x213208u: goto label_213208;
        default: break;
    }

    ctx->pc = 0x2131c0u;

    // 0x2131c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2131c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2131c4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2131c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2131c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2131c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2131cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2131ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2131d0:
    // 0x2131d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2131d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2131d4: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x2131d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2131d8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2131d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2131dc: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x2131dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2131e0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2131E0u;
    {
        const bool branch_taken_0x2131e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2131e0) {
            ctx->pc = 0x2131E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2131E0u;
            // 0x2131e4: 0x24420057  addiu       $v0, $v0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2131ECu;
            goto label_2131ec;
        }
    }
    ctx->pc = 0x2131E8u;
    // 0x2131e8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2131ec:
    // 0x2131ec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2131ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2131f0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2131f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2131f4: 0x4c1fff6  bgez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x2131F4u;
    {
        const bool branch_taken_0x2131f4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x2131F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131F4u;
        // 0x2131f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131f4) {
            ctx->pc = 0x2131D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2131d0;
        }
    }
    ctx->pc = 0x2131FCu;
    // 0x2131fc: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2131fcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x213200: 0xc084b6c  jal         func_212DB0
    ctx->pc = 0x213200u;
    SET_GPR_U32(ctx, 31, 0x213208u);
    ctx->pc = 0x213204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213200u;
    // 0x213204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212DB0u, 0x213200u, 0x213208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213208u;
label_213208:
    // 0x213208: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x213208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21320c: 0x3e00008  jr          $ra
    ctx->pc = 0x21320Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21320Cu;
        // 0x213210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21320Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213214u;
}
