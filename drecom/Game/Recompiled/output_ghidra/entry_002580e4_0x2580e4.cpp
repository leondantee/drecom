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

// Function: entry_002580e4
// Address: 0x2580e4 - 0x258100
void entry_002580e4_0x2580e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002580e4_0x2580e4");
#endif

    ctx->pc = 0x2580e4u;

    // 0x2580e4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580e8: 0xaec30060  sw          $v1, 0x60($s6)
    ctx->pc = 0x2580e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 3));
    // 0x2580ec: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580f0: 0xaec30064  sw          $v1, 0x64($s6)
    ctx->pc = 0x2580f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 100), GPR_U32(ctx, 3));
    // 0x2580f4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2580f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2580f8: 0xaec30068  sw          $v1, 0x68($s6)
    ctx->pc = 0x2580f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 104), GPR_U32(ctx, 3));
    // 0x2580fc: 0x0  nop
    ctx->pc = 0x2580fcu;
    // NOP
    ctx->pc = 0x258100u;
}
