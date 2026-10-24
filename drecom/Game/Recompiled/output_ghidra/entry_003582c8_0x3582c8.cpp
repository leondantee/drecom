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

// Function: entry_003582c8
// Address: 0x3582c8 - 0x358320
void entry_003582c8_0x3582c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003582c8_0x3582c8");
#endif

    switch (ctx->pc) {
        case 0x3582d8u: goto label_3582d8;
        case 0x3582f0u: goto label_3582f0;
        case 0x358304u: goto label_358304;
        case 0x35831cu: goto label_35831c;
        default: break;
    }

    ctx->pc = 0x3582c8u;

    // 0x3582c8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3582cc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3582ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3582d0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3582D0u;
    SET_GPR_U32(ctx, 31, 0x3582D8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3582D8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3582D8u) { return; }
    ctx->pc = 0x3582D8u;
label_3582d8:
    // 0x3582d8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3582d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3582dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3582dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3582e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3582e4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3582e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3582e8: 0xc040d62  jal         func_103588
    ctx->pc = 0x3582E8u;
    SET_GPR_U32(ctx, 31, 0x3582F0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3582F0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3582F0u) { return; }
    ctx->pc = 0x3582F0u;
label_3582f0:
    // 0x3582f0: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3582f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x3582f4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3582f8: 0x260602f0  addiu       $a2, $s0, 0x2F0
    ctx->pc = 0x3582f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x3582fc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3582FCu;
    SET_GPR_U32(ctx, 31, 0x358304u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x358304u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x358304u) { return; }
    ctx->pc = 0x358304u;
label_358304:
    // 0x358304: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x358304u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x358308: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x358308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x35830c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x35830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358310: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358314: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358314u;
    SET_GPR_U32(ctx, 31, 0x35831Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35831Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35831Cu) { return; }
    ctx->pc = 0x35831Cu;
label_35831c:
    // 0x35831c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x35831cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x358320u;
}
