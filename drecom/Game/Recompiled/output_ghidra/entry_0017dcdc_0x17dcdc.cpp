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

// Function: entry_0017dcdc
// Address: 0x17dcdc - 0x17dcf0
void entry_0017dcdc_0x17dcdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dcdc_0x17dcdc");
#endif

    ctx->pc = 0x17dcdcu;

    // 0x17dcdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17dcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17dce0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x17dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17dce4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17dce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DCE8u;
    {
        const bool branch_taken_0x17dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dce8) {
            ctx->pc = 0x17DD10u;
            return;
        }
    }
    ctx->pc = 0x17DCF0u;
}
