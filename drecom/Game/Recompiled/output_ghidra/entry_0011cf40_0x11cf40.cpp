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

// Function: entry_0011cf40
// Address: 0x11cf40 - 0x11cf7c
void entry_0011cf40_0x11cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cf40_0x11cf40");
#endif

    ctx->pc = 0x11cf40u;

    // 0x11cf40: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11cf44: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11cf48: 0x2442dd28  addiu       $v0, $v0, -0x22D8
    ctx->pc = 0x11cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958376));
    // 0x11cf4c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x11cf4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11cf50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11cf54: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11cf54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11cf58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11cf5c: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x11cf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x11cf60: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CF60u;
    {
        const bool branch_taken_0x11cf60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF60u;
        // 0x11cf64: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf60) {
            ctx->pc = 0x11CF7Cu;
            return;
        }
    }
    ctx->pc = 0x11CF68u;
    // 0x11cf68: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x11cf68u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x11cf6c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x11cf6cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cf70: 0x84c02  srl         $t1, $t0, 16
    ctx->pc = 0x11cf70u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11cf74: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x11CF74u;
    {
        const bool branch_taken_0x11cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF74u;
        // 0x11cf78: 0x310bffff  andi        $t3, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf74) {
            ctx->pc = 0x11D080u;
            return;
        }
    }
    ctx->pc = 0x11CF7Cu;
}
