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

// Function: entry_0011bb84
// Address: 0x11bb84 - 0x11bb98
void entry_0011bb84_0x11bb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bb84_0x11bb84");
#endif

    ctx->pc = 0x11bb84u;

    // 0x11bb84: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BB84u;
    {
        const bool branch_taken_0x11bb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BB84u;
        // 0x11bb88: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb84) {
            ctx->pc = 0x11BBD8u;
            return;
        }
    }
    ctx->pc = 0x11BB8Cu;
    // 0x11bb8c: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11bb90: 0x33d60084  andi        $s6, $fp, 0x84
    ctx->pc = 0x11bb90u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)132);
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
    ctx->pc = 0x11bb98u;
}
