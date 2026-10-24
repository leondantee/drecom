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

// Function: entry_0011d6f0
// Address: 0x11d6f0 - 0x11d728
void entry_0011d6f0_0x11d6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d6f0_0x11d6f0");
#endif

    ctx->pc = 0x11d6f0u;

    // 0x11d6f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11d6f4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x11d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x11d6f8: 0x2442de28  addiu       $v0, $v0, -0x21D8
    ctx->pc = 0x11d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958632));
    // 0x11d6fc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x11d6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11d700: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11d700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11d704: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x11d704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11d708: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x11d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x11d70c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x11d70cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x11d710: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D710u;
    {
        const bool branch_taken_0x11d710 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D710u;
        // 0x11d714: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d710) {
            ctx->pc = 0x11D728u;
            return;
        }
    }
    ctx->pc = 0x11D718u;
    // 0x11d718: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x11d718u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x11d71c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x11d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x11d720: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x11D720u;
    {
        const bool branch_taken_0x11d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D720u;
        // 0x11d724: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d720) {
            ctx->pc = 0x11D804u;
            return;
        }
    }
    ctx->pc = 0x11D728u;
}
