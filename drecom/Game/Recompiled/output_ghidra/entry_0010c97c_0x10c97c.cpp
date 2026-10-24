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

// Function: entry_0010c97c
// Address: 0x10c97c - 0x10c988
void entry_0010c97c_0x10c97c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c97c_0x10c97c");
#endif

    ctx->pc = 0x10c97cu;

    // 0x10c97c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x10c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x10c980: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C980u;
    {
        const bool branch_taken_0x10c980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C980u;
        // 0x10c984: 0x94620050  lhu         $v0, 0x50($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c980) {
            ctx->pc = 0x10C98Cu;
            return;
        }
    }
    ctx->pc = 0x10C988u;
}
