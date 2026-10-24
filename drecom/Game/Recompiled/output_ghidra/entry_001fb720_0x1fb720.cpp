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

// Function: entry_001fb720
// Address: 0x1fb720 - 0x1fb738
void entry_001fb720_0x1fb720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb720_0x1fb720");
#endif

    ctx->pc = 0x1fb720u;

    // 0x1fb720: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1fb720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb724: 0x90a4034f  lbu         $a0, 0x34F($a1)
    ctx->pc = 0x1fb724u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 847)));
    // 0x1fb728: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb72c: 0xa0a3034f  sb          $v1, 0x34F($a1)
    ctx->pc = 0x1fb72cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb730: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x1FB730u;
    {
        const bool branch_taken_0x1fb730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb730) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB738u;
}
