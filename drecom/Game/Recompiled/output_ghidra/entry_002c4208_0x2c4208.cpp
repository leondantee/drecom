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

// Function: entry_002c4208
// Address: 0x2c4208 - 0x2c4234
void entry_002c4208_0x2c4208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c4208_0x2c4208");
#endif

    ctx->pc = 0x2c4208u;

    // 0x2c4208: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c4208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c420c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4210: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c4210u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4214: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4218: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c4218u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c421c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4220: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c4220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4224: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4228: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c4228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c422c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2c422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c4230: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c4230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2c4234u;
}
