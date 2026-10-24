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

// Function: entry_0021799c
// Address: 0x21799c - 0x2179a4
void entry_0021799c_0x21799c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021799c_0x21799c");
#endif

    ctx->pc = 0x21799cu;

    // 0x21799c: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21799Cu;
    {
        const bool branch_taken_0x21799c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21799c) {
            ctx->pc = 0x2179A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21799Cu;
            // 0x2179a0: 0x8e22ccc0  lw          $v0, -0x3340($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2179B0u;
            return;
        }
    }
    ctx->pc = 0x2179A4u;
}
