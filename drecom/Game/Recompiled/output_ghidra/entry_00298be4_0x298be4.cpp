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

// Function: entry_00298be4
// Address: 0x298be4 - 0x298c10
void entry_00298be4_0x298be4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00298be4_0x298be4");
#endif

    ctx->pc = 0x298be4u;

    // 0x298be4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x298be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298be8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x298becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x298bf0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bf4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x298bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bf8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298bfc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x298bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x298c00: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298c04: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x298c04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x298c08: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x298c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298c0c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x298c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x298c10u;
}
