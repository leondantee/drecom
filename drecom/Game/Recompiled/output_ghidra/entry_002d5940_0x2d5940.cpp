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

// Function: entry_002d5940
// Address: 0x2d5940 - 0x2d5964
void entry_002d5940_0x2d5940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5940_0x2d5940");
#endif

    ctx->pc = 0x2d5940u;

    // 0x2d5940: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x2d5940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2d5944: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2d5944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2d5948: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2d5948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2d594c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2d594cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2d5950: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2d5950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x2d5954: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x2d5954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x2d5958: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2d5958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2d595c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d595cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2d5960: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x2d5960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->pc = 0x2d5964u;
}
