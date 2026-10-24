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

// Function: entry_00205f30
// Address: 0x205f30 - 0x205f60
void entry_00205f30_0x205f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205f30_0x205f30");
#endif

    ctx->pc = 0x205f30u;

    // 0x205f30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205f34: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f38: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x205f38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x205f3c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x205f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x205f40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f44: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x205f44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x205f48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f4c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x205f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x205f50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f54: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x205f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x205f58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x205f5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x205f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x205f60u;
}
