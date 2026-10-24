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

// Function: entry_00117904
// Address: 0x117904 - 0x117910
void entry_00117904_0x117904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117904_0x117904");
#endif

    ctx->pc = 0x117904u;

    // 0x117904: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x117904u;
    {
        const bool branch_taken_0x117904 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x117908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117904u;
        // 0x117908: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117904) {
            ctx->pc = 0x117934u;
            return;
        }
    }
    ctx->pc = 0x11790Cu;
    // 0x11790c: 0x0  nop
    ctx->pc = 0x11790cu;
    // NOP
    ctx->pc = 0x117910u;
}
