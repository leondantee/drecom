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

// Function: entry_0029ef38
// Address: 0x29ef38 - 0x29ef68
void entry_0029ef38_0x29ef38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ef38_0x29ef38");
#endif

    ctx->pc = 0x29ef38u;

    // 0x29ef38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ef3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef40: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ef44: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x29ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29ef48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef4c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29ef4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29ef50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef54: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29ef54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ef58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef5c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29ef5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29ef60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ef64: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29ef64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x29ef68u;
}
