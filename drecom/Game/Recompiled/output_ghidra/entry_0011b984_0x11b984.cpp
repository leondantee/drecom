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

// Function: entry_0011b984
// Address: 0x11b984 - 0x11b998
void entry_0011b984_0x11b984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b984_0x11b984");
#endif

    ctx->pc = 0x11b984u;

    // 0x11b984: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x11b984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x11b988: 0x8fa301f0  lw          $v1, 0x1F0($sp)
    ctx->pc = 0x11b988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x11b98c: 0x8e82fff8  lw          $v0, -0x8($s4)
    ctx->pc = 0x11b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    // 0x11b990: 0x1000feb5  b           . + 4 + (-0x14B << 2)
    ctx->pc = 0x11B990u;
    {
        const bool branch_taken_0x11b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B990u;
        // 0x11b994: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b990) {
            ctx->pc = 0x11B468u;
            return;
        }
    }
    ctx->pc = 0x11B998u;
}
