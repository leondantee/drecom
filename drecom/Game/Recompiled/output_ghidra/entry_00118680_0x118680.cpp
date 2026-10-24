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

// Function: entry_00118680
// Address: 0x118680 - 0x1186a8
void entry_00118680_0x118680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118680_0x118680");
#endif

    ctx->pc = 0x118680u;

    // 0x118680: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x118680u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x118684: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118688: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x118688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11868c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x11868Cu;
    {
        const bool branch_taken_0x11868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11868c) {
            ctx->pc = 0x118690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11868Cu;
            // 0x118690: 0x26834928  addiu       $v1, $s4, 0x4928 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 18728));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1186ECu;
            return;
        }
    }
    ctx->pc = 0x118694u;
    // 0x118694: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x118694u;
    {
        const bool branch_taken_0x118694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118694u;
        // 0x118698: 0x831024  and         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118694) {
            ctx->pc = 0x1186E8u;
            return;
        }
    }
    ctx->pc = 0x11869Cu;
    // 0x11869c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x11869Cu;
    {
        const bool branch_taken_0x11869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11869Cu;
        // 0x1186a0: 0xb10c0  sll         $v0, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11869c) {
            ctx->pc = 0x1185C8u;
            return;
        }
    }
    ctx->pc = 0x1186A4u;
    // 0x1186a4: 0x0  nop
    ctx->pc = 0x1186a4u;
    // NOP
    ctx->pc = 0x1186a8u;
}
