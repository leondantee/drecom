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

// Function: entry_0020e9f0
// Address: 0x20e9f0 - 0x20ea3c
void entry_0020e9f0_0x20e9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020e9f0_0x20e9f0");
#endif

    ctx->pc = 0x20e9f0u;

    // 0x20e9f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e9f4: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x20e9f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x20e9f8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20E9F8u;
    {
        const bool branch_taken_0x20e9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e9f8) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20EA00u;
    // 0x20ea00: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea04: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20ea04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20ea08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ea0c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x20ea0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x20ea10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x20ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea14: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20ea14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20ea18: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20ea18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20ea1c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20ea1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20ea20: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x20ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x20ea24: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20EA24u;
    {
        const bool branch_taken_0x20ea24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20ea24) {
            ctx->pc = 0x20EA3Cu;
            return;
        }
    }
    ctx->pc = 0x20EA2Cu;
    // 0x20ea2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x20ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ea30: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x20ea30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x20ea34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20ea38: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x20ea38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x20ea3cu;
}
