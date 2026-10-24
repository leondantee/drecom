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

// Function: entry_0031c1a0
// Address: 0x31c1a0 - 0x31c1e4
void entry_0031c1a0_0x31c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c1a0_0x31c1a0");
#endif

    ctx->pc = 0x31c1a0u;

    // 0x31c1a0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31c1a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1a8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c1ac: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x31c1b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31c1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31c1b4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1b8: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c1bc: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31c1c0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31c1c4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1c8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x31c1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c1cc: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x31c1d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1d4: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c1d8: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x31c1dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x31C1DCu;
    {
        const bool branch_taken_0x31c1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c1dc) {
            ctx->pc = 0x31C220u;
            return;
        }
    }
    ctx->pc = 0x31C1E4u;
}
