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

// Function: entry_00116990
// Address: 0x116990 - 0x1169a0
void entry_00116990_0x116990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116990_0x116990");
#endif

    ctx->pc = 0x116990u;

    // 0x116990: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x116990u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x116994: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x116994u;
    {
        const bool branch_taken_0x116994 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x116998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116994u;
        // 0x116998: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116994) {
            ctx->pc = 0x1169A0u;
            return;
        }
    }
    ctx->pc = 0x11699Cu;
    // 0x11699c: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x11699cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->pc = 0x1169a0u;
}
