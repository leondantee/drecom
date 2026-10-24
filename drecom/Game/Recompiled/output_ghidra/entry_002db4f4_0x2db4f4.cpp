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

// Function: entry_002db4f4
// Address: 0x2db4f4 - 0x2db524
void entry_002db4f4_0x2db4f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db4f4_0x2db4f4");
#endif

    ctx->pc = 0x2db4f4u;

    // 0x2db4f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db4f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db4fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db4fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db500: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2db500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2db504: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db508: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db50c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db510: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db514: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db518: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db518u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db51c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db520: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2db524u;
}
