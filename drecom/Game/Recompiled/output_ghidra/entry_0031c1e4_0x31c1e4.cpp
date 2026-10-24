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

// Function: entry_0031c1e4
// Address: 0x31c1e4 - 0x31c220
void entry_0031c1e4_0x31c1e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c1e4_0x31c1e4");
#endif

    ctx->pc = 0x31c1e4u;

    // 0x31c1e4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31c1e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1ec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c1f0: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x31c1f4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x31c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x31c1f8: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c1fc: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x31c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x31c200: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31c200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31c204: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x31c204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31c208: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c20c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x31c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c210: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x31c210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x31c214: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c218: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31c218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31c21c: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    ctx->pc = 0x31c220u;
}
