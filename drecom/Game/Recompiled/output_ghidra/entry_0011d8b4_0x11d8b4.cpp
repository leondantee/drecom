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

// Function: entry_0011d8b4
// Address: 0x11d8b4 - 0x11d8cc
void entry_0011d8b4_0x11d8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d8b4_0x11d8b4");
#endif

    ctx->pc = 0x11d8b4u;

    // 0x11d8b4: 0x13200097  beqz        $t9, . + 4 + (0x97 << 2)
    ctx->pc = 0x11D8B4u;
    {
        const bool branch_taken_0x11d8b4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8B4u;
        // 0x11d8b8: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8b4) {
            ctx->pc = 0x11DB14u;
            return;
        }
    }
    ctx->pc = 0x11D8BCu;
    // 0x11d8bc: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x11d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x11d8c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d8c4: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11D8C4u;
    {
        const bool branch_taken_0x11d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D8C4u;
        // 0x11d8c8: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d8c4) {
            ctx->pc = 0x11DB10u;
            return;
        }
    }
    ctx->pc = 0x11D8CCu;
}
