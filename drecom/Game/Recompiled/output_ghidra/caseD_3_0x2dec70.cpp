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

// Function: caseD_3
// Address: 0x2dec70 - 0x2decb0
void caseD_3_0x2dec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x2dec70");
#endif

    ctx->pc = 0x2dec70u;

    // 0x2dec70: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec74: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2dec78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2dec7c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2dec7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dec80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2dec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec84: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2dec84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2dec88: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dec8c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dec8cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dec90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DEC90u;
    {
        const bool branch_taken_0x2dec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dec90) {
            ctx->pc = 0x2DECB0u;
            return;
        }
    }
    ctx->pc = 0x2DEC98u;
    // 0x2dec98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dec9c: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2dec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2deca0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2deca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2deca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2deca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2deca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2deca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2decac: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2decacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    ctx->pc = 0x2decb0u;
}
