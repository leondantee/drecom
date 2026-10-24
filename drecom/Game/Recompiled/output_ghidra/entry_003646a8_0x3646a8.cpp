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

// Function: entry_003646a8
// Address: 0x3646a8 - 0x3646e0
void entry_003646a8_0x3646a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003646a8_0x3646a8");
#endif

    ctx->pc = 0x3646a8u;

    // 0x3646a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3646a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3646ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3646b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x3646b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3646b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3646bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3646c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3646c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3646c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3646ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3646d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3646d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3646d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3646d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3646d8: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x3646D8u;
    {
        const bool branch_taken_0x3646d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3646d8) {
            ctx->pc = 0x364A7Cu;
            return;
        }
    }
    ctx->pc = 0x3646E0u;
}
