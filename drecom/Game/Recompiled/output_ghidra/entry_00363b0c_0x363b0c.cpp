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

// Function: entry_00363b0c
// Address: 0x363b0c - 0x363b44
void entry_00363b0c_0x363b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00363b0c_0x363b0c");
#endif

    ctx->pc = 0x363b0cu;

    // 0x363b0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x363b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363b10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b14: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x363b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x363b18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x363b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x363b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b20: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x363b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x363b24: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b28: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x363b28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x363b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b30: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x363b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x363b34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x363b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x363b38: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x363b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x363b3c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x363B3Cu;
    {
        const bool branch_taken_0x363b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x363b3c) {
            ctx->pc = 0x363DDCu;
            return;
        }
    }
    ctx->pc = 0x363B44u;
}
