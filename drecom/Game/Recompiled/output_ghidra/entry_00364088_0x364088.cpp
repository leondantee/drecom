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

// Function: entry_00364088
// Address: 0x364088 - 0x3640c0
void entry_00364088_0x364088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364088_0x364088");
#endif

    ctx->pc = 0x364088u;

    // 0x364088: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x364088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36408c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36408cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364090: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x364090u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x364094: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x364094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x364098: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36409c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36409cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3640a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3640a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3640a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3640acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3640b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3640b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3640b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3640b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3640b8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3640B8u;
    {
        const bool branch_taken_0x3640b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3640b8) {
            ctx->pc = 0x364360u;
            return;
        }
    }
    ctx->pc = 0x3640C0u;
}
