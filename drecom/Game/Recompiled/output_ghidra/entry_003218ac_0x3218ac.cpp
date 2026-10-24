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

// Function: entry_003218ac
// Address: 0x3218ac - 0x321910
void entry_003218ac_0x3218ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003218ac_0x3218ac");
#endif

    switch (ctx->pc) {
        case 0x3218bcu: goto label_3218bc;
        case 0x3218d8u: goto label_3218d8;
        case 0x321904u: goto label_321904;
        default: break;
    }

    ctx->pc = 0x3218acu;

    // 0x3218ac: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3218acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3218b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218b4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3218B4u;
    SET_GPR_U32(ctx, 31, 0x3218BCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3218BCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3218BCu) { return; }
    ctx->pc = 0x3218BCu;
label_3218bc:
    // 0x3218bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218c0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x3218c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3218c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218c8: 0x24a403c0  addiu       $a0, $a1, 0x3C0
    ctx->pc = 0x3218c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 960));
    // 0x3218cc: 0x8c450324  lw          $a1, 0x324($v0)
    ctx->pc = 0x3218ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
    // 0x3218d0: 0xc040ca2  jal         func_103288
    ctx->pc = 0x3218D0u;
    SET_GPR_U32(ctx, 31, 0x3218D8u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x3218D8u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3218D8u) { return; }
    ctx->pc = 0x3218D8u;
label_3218d8:
    // 0x3218d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3218d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218dc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x3218dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218e0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x3218e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3218e4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3218e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3218e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x3218e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x3218ec: 0x246603c0  addiu       $a2, $v1, 0x3C0
    ctx->pc = 0x3218ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x3218f0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x3218f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3218f4: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x3218f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x3218f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3218f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3218fc: 0xc040d62  jal         func_103588
    ctx->pc = 0x3218FCu;
    SET_GPR_U32(ctx, 31, 0x321904u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x321904u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x321904u) { return; }
    ctx->pc = 0x321904u;
label_321904:
    // 0x321904: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x321904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x321908: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x321908u;
    {
        const bool branch_taken_0x321908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x321908) {
            ctx->pc = 0x321948u;
            return;
        }
    }
    ctx->pc = 0x321910u;
}
