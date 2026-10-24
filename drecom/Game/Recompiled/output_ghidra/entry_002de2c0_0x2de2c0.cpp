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

// Function: entry_002de2c0
// Address: 0x2de2c0 - 0x2de2d0
void entry_002de2c0_0x2de2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002de2c0_0x2de2c0");
#endif

    ctx->pc = 0x2de2c0u;

    // 0x2de2c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2de2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2de2c4: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2de2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2de2c8: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x2DE2C8u;
    {
        const bool branch_taken_0x2de2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de2c8) {
            ctx->pc = 0x2DE45Cu;
            return;
        }
    }
    ctx->pc = 0x2DE2D0u;
}
