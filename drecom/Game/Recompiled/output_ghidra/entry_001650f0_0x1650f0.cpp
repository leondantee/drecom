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

// Function: entry_001650f0
// Address: 0x1650f0 - 0x165104
void entry_001650f0_0x1650f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001650f0_0x1650f0");
#endif

    ctx->pc = 0x1650f0u;

    // 0x1650f0: 0xae71000c  sw          $s1, 0xC($s3)
    ctx->pc = 0x1650f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 17));
    // 0x1650f4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1650f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1650f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1650f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1650fc: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1650fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x165100: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x165100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x165104u;
}
