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

// Function: entry_00101ef4
// Address: 0x101ef4 - 0x101f58
void entry_00101ef4_0x101ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ef4_0x101ef4");
#endif

    switch (ctx->pc) {
        case 0x101f2cu: goto label_101f2c;
        case 0x101f34u: goto label_101f34;
        default: break;
    }

    ctx->pc = 0x101ef4u;

    // 0x101ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x101ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x101ef8: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x101EF8u;
    {
        const bool branch_taken_0x101ef8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x101EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EF8u;
        // 0x101efc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ef8) {
            ctx->pc = 0x101EC8u;
            return;
        }
    }
    ctx->pc = 0x101F00u;
    // 0x101f00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101f04: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x101f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
    // 0x101f08: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x101f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x101f0c: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x101f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
    // 0x101f10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101f10u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2));
    // 0x101f14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x101f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f18: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x101f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x101f1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u));
    // 0x101f20: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x101f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x101f24: 0xc04078c  jal         func_101E30
    ctx->pc = 0x101F24u;
    SET_GPR_U32(ctx, 31, 0x101F2Cu);
    ctx->pc = 0x101F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F24u;
    // 0x101f28: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E30u, 0x101F24u, 0x101F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F2Cu;
label_101f2c:
    // 0x101f2c: 0xc0407e0  jal         func_101F80
    ctx->pc = 0x101F2Cu;
    SET_GPR_U32(ctx, 31, 0x101F34u);
    ctx->pc = 0x101F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101F2Cu;
    // 0x101f30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101F80u, 0x101F2Cu, 0x101F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F34u;
label_101f34:
    // 0x101f34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101f38: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x101F38u;
    {
        const bool branch_taken_0x101f38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x101F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101F38u;
        // 0x101f3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f38) {
            ctx->pc = 0x101F58u;
            return;
        }
    }
    ctx->pc = 0x101F40u;
    // 0x101f40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x101f44: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x101f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x101f48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000E000u));
    // 0x101f4c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x101f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x101f50: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x101f50u;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 2));
    // 0x101f54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x101f54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x101f58u;
}
