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

// Function: entry_0019bb58
// Address: 0x19bb58 - 0x19bba4
void entry_0019bb58_0x19bb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019bb58_0x19bb58");
#endif

    ctx->pc = 0x19bb58u;

    // 0x19bb58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb5c: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x19bb60: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BB60u;
    {
        const bool branch_taken_0x19bb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bb60) {
            ctx->pc = 0x19BBA4u;
            return;
        }
    }
    ctx->pc = 0x19BB68u;
    // 0x19bb68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb6c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bb74: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bb78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb7c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bb80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x19bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bb84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19bb84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19bb88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19bb8c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB8Cu;
    {
        const bool branch_taken_0x19bb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb8c) {
            ctx->pc = 0x19BBA4u;
            return;
        }
    }
    ctx->pc = 0x19BB94u;
    // 0x19bb94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb98: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bb9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bba0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x19bba4u;
}
