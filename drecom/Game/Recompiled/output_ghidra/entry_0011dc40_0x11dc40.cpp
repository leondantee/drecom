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

// Function: entry_0011dc40
// Address: 0x11dc40 - 0x11dc7c
void entry_0011dc40_0x11dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc40_0x11dc40");
#endif

    ctx->pc = 0x11dc40u;

    // 0x11dc40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11dc44: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x11dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x11dc48: 0x2442df28  addiu       $v0, $v0, -0x20D8
    ctx->pc = 0x11dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
    // 0x11dc4c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11dc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11dc50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11dc54: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11dc54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11dc58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11dc5c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11dc60: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DC60u;
    {
        const bool branch_taken_0x11dc60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC60u;
        // 0x11dc64: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc60) {
            ctx->pc = 0x11DC7Cu;
            return;
        }
    }
    ctx->pc = 0x11DC68u;
    // 0x11dc68: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x11dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x11dc6c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x11dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x11dc70: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x11dc70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x11dc74: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11dc78: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    ctx->pc = 0x11dc7cu;
}
