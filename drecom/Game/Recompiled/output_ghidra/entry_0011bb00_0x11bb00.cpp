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

// Function: entry_0011bb00
// Address: 0x11bb00 - 0x11bb38
void entry_0011bb00_0x11bb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb00_0x11bb00");
#endif

    switch (ctx->pc) {
        case 0x11bb30u: goto label_11bb30;
        default: break;
    }

    ctx->pc = 0x11bb00u;

    // 0x11bb00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb04: 0x1082001f  beq         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11BB04u;
    {
        const bool branch_taken_0x11bb04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB04u;
        // 0x11bb08: 0x2e02000a  sltiu       $v0, $s0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb04) {
            ctx->pc = 0x11BB84u;
            return;
        }
    }
    ctx->pc = 0x11BB0Cu;
    // 0x11bb0c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x11BB0Cu;
    {
        const bool branch_taken_0x11bb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB0Cu;
        // 0x11bb10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb0c) {
            ctx->pc = 0x11BB38u;
            return;
        }
    }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x10820037  beq         $a0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x11BB14u;
    {
        const bool branch_taken_0x11bb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB14u;
        // 0x11bb18: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb14) {
            ctx->pc = 0x11BBF4u;
            return;
        }
    }
    ctx->pc = 0x11BB1Cu;
    // 0x11bb1c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x11bb1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x11bb20: 0x2453db88  addiu       $s3, $v0, -0x2478
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x11bb24: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb24u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bb28: 0xc046b58  jal         func_11AD60
    ctx->pc = 0x11BB28u;
    SET_GPR_U32(ctx, 31, 0x11BB30u);
    ctx->pc = 0x11BB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BB28u;
    // 0x11bb2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD60u;
    {
        ctx->pc = 0x11BB30u;
        ps2_stubs::strlen(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11BB30u) { return; }
    ctx->pc = 0x11BB30u;
label_11bb30:
    // 0x11bb30: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x11BB30u;
    {
        const bool branch_taken_0x11bb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB30u;
        // 0x11bb34: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb30) {
            ctx->pc = 0x11BC60u;
            return;
        }
    }
    ctx->pc = 0x11BB38u;
}
