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

// Function: entry_0018bca8
// Address: 0x18bca8 - 0x18bcb8
void entry_0018bca8_0x18bca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018bca8_0x18bca8");
#endif

    ctx->pc = 0x18bca8u;

    // 0x18bca8: 0x8e220b28  lw          $v0, 0xB28($s1)
    ctx->pc = 0x18bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2856)));
    // 0x18bcac: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18bcb0: 0x8e220b28  lw          $v0, 0xB28($s1)
    ctx->pc = 0x18bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2856)));
    // 0x18bcb4: 0xac400b2c  sw          $zero, 0xB2C($v0)
    ctx->pc = 0x18bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2860), GPR_U32(ctx, 0));
    ctx->pc = 0x18bcb8u;
}
