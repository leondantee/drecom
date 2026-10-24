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

// Function: entry_001bedd8
// Address: 0x1bedd8 - 0x1bedf4
void entry_001bedd8_0x1bedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bedd8_0x1bedd8");
#endif

    ctx->pc = 0x1bedd8u;

    // 0x1bedd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1bedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1beddc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bede0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1bede0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bede4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1bede4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bede8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1bede8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1bedec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bedecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bedf0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1bedf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1bedf4u;
}
