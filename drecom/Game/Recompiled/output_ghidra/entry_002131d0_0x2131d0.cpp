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

// Function: entry_002131d0
// Address: 0x2131d0 - 0x2131ec
void entry_002131d0_0x2131d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002131d0_0x2131d0");
#endif

    ctx->pc = 0x2131d0u;

    // 0x2131d0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2131d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2131d4: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x2131d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x2131d8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2131d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2131dc: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x2131dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2131e0: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2131E0u;
    {
        const bool branch_taken_0x2131e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2131e0) {
            ctx->pc = 0x2131E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2131E0u;
            // 0x2131e4: 0x24420057  addiu       $v0, $v0, 0x57 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 87));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2131ECu;
            return;
        }
    }
    ctx->pc = 0x2131E8u;
    // 0x2131e8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2131e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->pc = 0x2131ecu;
}
