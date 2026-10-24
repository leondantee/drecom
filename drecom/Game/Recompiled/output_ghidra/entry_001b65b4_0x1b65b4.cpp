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

// Function: entry_001b65b4
// Address: 0x1b65b4 - 0x1b65e8
void entry_001b65b4_0x1b65b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b65b4_0x1b65b4");
#endif

    switch (ctx->pc) {
        case 0x1b65d4u: goto label_1b65d4;
        default: break;
    }

    ctx->pc = 0x1b65b4u;

    // 0x1b65b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b65b8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b65bc: 0x24451b40  addiu       $a1, $v0, 0x1B40
    ctx->pc = 0x1b65bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x1b65c0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1b65c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1b65c4: 0x24620180  addiu       $v0, $v1, 0x180
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x1b65c8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1b65c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b65cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B65CCu;
    SET_GPR_U32(ctx, 31, 0x1B65D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B65D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B65D4u) { return; }
    ctx->pc = 0x1B65D4u;
label_1b65d4:
    // 0x1b65d4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b65d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b65d8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b65d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b65dc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1b65dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1b65e0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1b65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b65e4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b65e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b65e8u;
}
