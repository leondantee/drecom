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

// Function: __mcmp
// Address: 0x119680 - 0x1196e8
void ps2___mcmp_0x119680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___mcmp_0x119680");
#endif

    switch (ctx->pc) {
        case 0x11969cu: goto label_11969c;
        case 0x1196c0u: goto label_1196c0;
        default: break;
    }

    ctx->pc = 0x119680u;

    // 0x119680: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x119680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x119684: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x119684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x119688: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x119688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11968c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11968Cu;
    {
        const bool branch_taken_0x11968c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11968Cu;
        // 0x119690: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11968c) {
            ctx->pc = 0x1196ACu;
            goto label_1196ac;
        }
    }
    ctx->pc = 0x119694u;
    // 0x119694: 0x3e00008  jr          $ra
    ctx->pc = 0x119694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11969Cu;
label_11969c:
    // 0x11969c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1196a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1196a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1196a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1196A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196A4u;
        // 0x1196a8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196ACu;
label_1196ac:
    // 0x1196ac: 0x24870014  addiu       $a3, $a0, 0x14
    ctx->pc = 0x1196acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1196b0: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x1196b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x1196b4: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1196b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1196b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1196b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1196bc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x1196bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
label_1196c0:
    // 0x1196c0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1196c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1196c4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1196c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1196c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1196c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1196cc: 0x5444fff3  bnel        $v0, $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1196CCu;
    {
        const bool branch_taken_0x1196cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1196cc) {
            ctx->pc = 0x1196D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1196CCu;
            // 0x1196d0: 0x44202b  sltu        $a0, $v0, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11969Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11969c;
        }
    }
    ctx->pc = 0x1196D4u;
    // 0x1196d4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1196d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1196D8u;
    {
        const bool branch_taken_0x1196d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196D8u;
        // 0x1196dc: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196d8) {
            ctx->pc = 0x1196C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1196c0;
        }
    }
    ctx->pc = 0x1196E0u;
    // 0x1196e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1196E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1196E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1196E0u;
        // 0x1196e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1196E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1196E8u;
}
