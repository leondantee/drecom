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

// Function: entry_00106338
// Address: 0x106338 - 0x106344
void entry_00106338_0x106338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106338_0x106338");
#endif

    ctx->pc = 0x106338u;

    // 0x106338: 0xae403d08  sw          $zero, 0x3D08($s2)
    ctx->pc = 0x106338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 15624), GPR_U32(ctx, 0));
    // 0x10633c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10633Cu;
    {
        const bool branch_taken_0x10633c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10633Cu;
        // 0x106340: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10633c) {
            ctx->pc = 0x106384u;
            return;
        }
    }
    ctx->pc = 0x106344u;
}
