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

// Function: entry_00221150
// Address: 0x221150 - 0x221168
void entry_00221150_0x221150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221150_0x221150");
#endif

    ctx->pc = 0x221150u;

    // 0x221150: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221154: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x221154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x221158: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x221158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x22115c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x22115cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x221160: 0x461031a  bgez        $v1, . + 4 + (0x31A << 2)
    ctx->pc = 0x221160u;
    {
        const bool branch_taken_0x221160 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x221160) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221168u;
}
