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

// Function: entry_00118224
// Address: 0x118224 - 0x118234
void entry_00118224_0x118224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118224_0x118224");
#endif

    ctx->pc = 0x118224u;

    // 0x118224: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118224u;
    {
        const bool branch_taken_0x118224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118224u;
        // 0x118228: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118224) {
            ctx->pc = 0x118234u;
            return;
        }
    }
    ctx->pc = 0x11822Cu;
    // 0x11822c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11822Cu;
    {
        const bool branch_taken_0x11822c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11822Cu;
        // 0x118230: 0x244b0038  addiu       $t3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11822c) {
            ctx->pc = 0x118280u;
            return;
        }
    }
    ctx->pc = 0x118234u;
}
