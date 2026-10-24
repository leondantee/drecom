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

// Function: entry_001160a0
// Address: 0x1160a0 - 0x1160b8
void entry_001160a0_0x1160a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001160a0_0x1160a0");
#endif

    ctx->pc = 0x1160a0u;

    // 0x1160a0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1160a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1160a4: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1160a8: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1160a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1160ac: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1160acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1160b0: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1160b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1160b4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1160b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    ctx->pc = 0x1160b8u;
}
