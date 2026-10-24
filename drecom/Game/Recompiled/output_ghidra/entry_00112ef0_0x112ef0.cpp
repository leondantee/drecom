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

// Function: entry_00112ef0
// Address: 0x112ef0 - 0x112f20
void entry_00112ef0_0x112ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112ef0_0x112ef0");
#endif

    switch (ctx->pc) {
        case 0x112ef8u: goto label_112ef8;
        default: break;
    }

    ctx->pc = 0x112ef0u;

    // 0x112ef0: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x112EF0u;
    SET_GPR_U32(ctx, 31, 0x112EF8u);
    ctx->pc = 0x112EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EF0u;
    // 0x112ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x112EF0u, 0x112EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EF8u;
label_112ef8:
    // 0x112ef8: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x112EF8u;
    {
        const bool branch_taken_0x112ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EF8u;
        // 0x112efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ef8) {
            ctx->pc = 0x113074u;
            return;
        }
    }
    ctx->pc = 0x112F00u;
    // 0x112f00: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x112f04: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112f08: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x112f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x112f0c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x112F0Cu;
    {
        const bool branch_taken_0x112f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F0Cu;
        // 0x112f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f0c) {
            ctx->pc = 0x112F40u;
            return;
        }
    }
    ctx->pc = 0x112F14u;
    // 0x112f14: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x112f18: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x112f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x112f1c: 0x0  nop
    ctx->pc = 0x112f1cu;
    // NOP
    ctx->pc = 0x112f20u;
}
