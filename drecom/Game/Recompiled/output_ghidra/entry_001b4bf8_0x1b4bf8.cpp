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

// Function: entry_001b4bf8
// Address: 0x1b4bf8 - 0x1b4c18
void entry_001b4bf8_0x1b4bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4bf8_0x1b4bf8");
#endif

    ctx->pc = 0x1b4bf8u;

    // 0x1b4bf8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4bfc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c00: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b4c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b4c04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c08: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1b4c08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b4c0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b4c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b4c10: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4c14: 0xa464127c  sh          $a0, 0x127C($v1)
    ctx->pc = 0x1b4c14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4732), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b4c18u;
}
