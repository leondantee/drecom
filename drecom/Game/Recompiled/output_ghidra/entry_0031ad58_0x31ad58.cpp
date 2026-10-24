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

// Function: entry_0031ad58
// Address: 0x31ad58 - 0x31ad90
void entry_0031ad58_0x31ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ad58_0x31ad58");
#endif

    ctx->pc = 0x31ad58u;

    // 0x31ad58: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31ad5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31ad60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ad64: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x31ad64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31ad68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad6c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x31ad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ad70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad74: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x31ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ad78: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad7c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x31ad7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ad80: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x31ad80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31ad84: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x31ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x31ad88: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x31AD88u;
    {
        const bool branch_taken_0x31ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ad88) {
            ctx->pc = 0x31AE48u;
            return;
        }
    }
    ctx->pc = 0x31AD90u;
}
