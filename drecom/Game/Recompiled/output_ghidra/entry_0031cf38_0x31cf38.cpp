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

// Function: entry_0031cf38
// Address: 0x31cf38 - 0x31cf74
void entry_0031cf38_0x31cf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031cf38_0x31cf38");
#endif

    ctx->pc = 0x31cf38u;

    // 0x31cf38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x31cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31cf3c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf40: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31cf44: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x31cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x31cf48: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31cf4c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf50: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf54: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31cf58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x31cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31cf5c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf60: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x31cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31cf64: 0xaca40068  sw          $a0, 0x68($a1)
    ctx->pc = 0x31cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 4));
    // 0x31cf68: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31cf6c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x31cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x31cf70: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x31cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
    ctx->pc = 0x31cf74u;
}
