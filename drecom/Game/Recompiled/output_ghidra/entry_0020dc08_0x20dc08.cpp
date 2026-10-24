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

// Function: entry_0020dc08
// Address: 0x20dc08 - 0x20dc38
void entry_0020dc08_0x20dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dc08_0x20dc08");
#endif

    ctx->pc = 0x20dc08u;

    // 0x20dc08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dc0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20dc10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dc14: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x20dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20dc18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc1c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20dc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20dc20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc24: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20dc24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc2c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20dc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dc30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20dc34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x20dc38u;
}
