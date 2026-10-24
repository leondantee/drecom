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

// Function: entry_002cef98
// Address: 0x2cef98 - 0x2cefc0
void entry_002cef98_0x2cef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cef98_0x2cef98");
#endif

    ctx->pc = 0x2cef98u;

    // 0x2cef98: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x2cef98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2cef9c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2cef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2cefa0: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x2cefa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x2cefa4: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2cefa8: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x2cefa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x2cefac: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x2cefacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x2cefb0: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2cefb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2cefb4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2cefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2cefb8: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x2cefb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x2cefbc: 0x0  nop
    ctx->pc = 0x2cefbcu;
    // NOP
    ctx->pc = 0x2cefc0u;
}
