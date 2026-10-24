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

// Function: entry_0031cef4
// Address: 0x31cef4 - 0x31cf38
void entry_0031cef4_0x31cef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cef4_0x31cef4");
#endif

    ctx->pc = 0x31cef4u;

    // 0x31cef4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cef8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cefc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf00: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x31cf04: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cf04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cf08: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf0c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf10: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31cf14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31cf18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf1c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x31cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf20: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x31cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x31cf24: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x31cf24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf28: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x31cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x31cf2c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x31cf30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31CF30u;
    {
        const bool branch_taken_0x31cf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31cf30) {
            ctx->pc = 0x31CF74u;
            return;
        }
    }
    ctx->pc = 0x31CF38u;
}
