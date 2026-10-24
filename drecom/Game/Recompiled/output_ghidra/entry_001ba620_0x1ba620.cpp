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

// Function: entry_001ba620
// Address: 0x1ba620 - 0x1ba650
void entry_001ba620_0x1ba620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba620_0x1ba620");
#endif

    switch (ctx->pc) {
        case 0x1ba640u: goto label_1ba640;
        default: break;
    }

    ctx->pc = 0x1ba620u;

    // 0x1ba620: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba624: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba628: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x1ba62c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ba62cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ba630: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1ba634: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ba634u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ba638: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1BA638u;
    SET_GPR_U32(ctx, 31, 0x1BA640u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1BA640u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1BA640u) { return; }
    ctx->pc = 0x1BA640u;
label_1ba640:
    // 0x1ba640: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba644: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1ba644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1ba648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ba648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ba64c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1ba64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ba650u;
}
