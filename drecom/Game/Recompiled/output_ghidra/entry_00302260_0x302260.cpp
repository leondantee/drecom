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

// Function: entry_00302260
// Address: 0x302260 - 0x3022a4
void entry_00302260_0x302260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302260_0x302260");
#endif

    ctx->pc = 0x302260u;

    // 0x302260: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302264: 0x8c641274  lw          $a0, 0x1274($v1)
    ctx->pc = 0x302264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4724)));
    // 0x302268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30226c: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30226Cu;
    {
        const bool branch_taken_0x30226c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30226c) {
            ctx->pc = 0x3022A4u;
            return;
        }
    }
    ctx->pc = 0x302274u;
    // 0x302274: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302278: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30227c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30227cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302280: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x302280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x302284: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302288: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302288u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30228c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30228cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302290: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302294: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302298: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30229c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3022a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3022a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3022a4u;
}
