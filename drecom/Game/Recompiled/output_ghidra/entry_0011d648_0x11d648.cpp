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

// Function: entry_0011d648
// Address: 0x11d648 - 0x11d684
void entry_0011d648_0x11d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d648_0x11d648");
#endif

    ctx->pc = 0x11d648u;

    // 0x11d648: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d64c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11d650: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d654: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11d654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d658: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d65c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d65cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d664: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11d664u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11d668: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D668u;
    {
        const bool branch_taken_0x11d668 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D668u;
        // 0x11d66c: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d668) {
            ctx->pc = 0x11D684u;
            return;
        }
    }
    ctx->pc = 0x11D670u;
    // 0x11d670: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x11d670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d674: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11d674u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11d678: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x11d678u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d67c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11d67cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11d680: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x11d680u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    ctx->pc = 0x11d684u;
}
