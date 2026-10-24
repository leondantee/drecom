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

// Function: entry_00130fb4
// Address: 0x130fb4 - 0x130fe4
void entry_00130fb4_0x130fb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130fb4_0x130fb4");
#endif

    ctx->pc = 0x130fb4u;

    // 0x130fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130fc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130fc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130fcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x130fe4u;
}
