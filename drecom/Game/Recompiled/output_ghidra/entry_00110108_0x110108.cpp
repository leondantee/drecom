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

// Function: entry_00110108
// Address: 0x110108 - 0x110140
void entry_00110108_0x110108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110108_0x110108");
#endif

    ctx->pc = 0x110108u;

    // 0x110108: 0x8ea24618  lw          $v0, 0x4618($s5)
    ctx->pc = 0x110108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17944)));
    // 0x11010c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11010cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110110: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x110110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x110114: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x110114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110118: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11011c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11011Cu;
    {
        const bool branch_taken_0x11011c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11011Cu;
        // 0x110120: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11011c) {
            ctx->pc = 0x1101A8u;
            return;
        }
    }
    ctx->pc = 0x110124u;
    // 0x110124: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x110124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x110128: 0x24525200  addiu       $s2, $v0, 0x5200
    ctx->pc = 0x110128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x11012c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x11012cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B5224u));
    // 0x110130: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x110130u;
    {
        const bool branch_taken_0x110130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110130u;
        // 0x110134: 0x3c10003b  lui         $s0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110130) {
            ctx->pc = 0x110140u;
            return;
        }
    }
    ctx->pc = 0x110138u;
    // 0x110138: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x110138u;
    {
        const bool branch_taken_0x110138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110138u;
        // 0x11013c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110138) {
            ctx->pc = 0x1101A8u;
            return;
        }
    }
    ctx->pc = 0x110140u;
}
