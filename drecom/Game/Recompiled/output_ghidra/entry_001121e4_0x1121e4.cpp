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

// Function: entry_001121e4
// Address: 0x1121e4 - 0x1121f0
void entry_001121e4_0x1121e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001121e4_0x1121e4");
#endif

    ctx->pc = 0x1121e4u;

    // 0x1121e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1121e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1121e8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1121E8u;
    {
        const bool branch_taken_0x1121e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1121ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1121E8u;
        // 0x1121ec: 0xc440d2d0  lwc1        $f0, -0x2D30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1121e8) {
            ctx->pc = 0x112308u;
            return;
        }
    }
    ctx->pc = 0x1121F0u;
}
