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

// Function: entry_00118640
// Address: 0x118640 - 0x118650
void entry_00118640_0x118640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118640_0x118640");
#endif

    ctx->pc = 0x118640u;

    // 0x118640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118640u;
    {
        const bool branch_taken_0x118640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x118644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118640u;
        // 0x118644: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118640) {
            ctx->pc = 0x118650u;
            return;
        }
    }
    ctx->pc = 0x118648u;
    // 0x118648: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x11864c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x11864cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    ctx->pc = 0x118650u;
}
