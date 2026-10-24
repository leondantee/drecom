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

// Function: entry_0035fe80
// Address: 0x35fe80 - 0x35feb0
void entry_0035fe80_0x35fe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035fe80_0x35fe80");
#endif

    ctx->pc = 0x35fe80u;

    // 0x35fe80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x35fe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fe84: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35fe88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fe90: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x35fe94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x35fe98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fe9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35fe9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fea0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35fea4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35fea4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35fea8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35feac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x35feb0u;
}
