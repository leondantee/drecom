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

// Function: entry_003587bc
// Address: 0x3587bc - 0x35880c
void entry_003587bc_0x3587bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003587bc_0x3587bc");
#endif

    switch (ctx->pc) {
        case 0x3587c8u: goto label_3587c8;
        case 0x3587e0u: goto label_3587e0;
        case 0x3587f8u: goto label_3587f8;
        default: break;
    }

    ctx->pc = 0x3587bcu;

    // 0x3587bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3587bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3587c0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3587C0u;
    SET_GPR_U32(ctx, 31, 0x3587C8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3587C8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587C8u) { return; }
    ctx->pc = 0x3587C8u;
label_3587c8:
    // 0x3587c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3587c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3587cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3587ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3587d0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3587d4: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x3587d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x3587d8: 0xc040d62  jal         func_103588
    ctx->pc = 0x3587D8u;
    SET_GPR_U32(ctx, 31, 0x3587E0u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x3587E0u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587E0u) { return; }
    ctx->pc = 0x3587E0u;
label_3587e0:
    // 0x3587e0: 0x260402f0  addiu       $a0, $s0, 0x2F0
    ctx->pc = 0x3587e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x3587e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3587e8: 0x260202f0  addiu       $v0, $s0, 0x2F0
    ctx->pc = 0x3587e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x3587ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x3587ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3587f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x3587F0u;
    SET_GPR_U32(ctx, 31, 0x3587F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x3587F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3587F8u) { return; }
    ctx->pc = 0x3587F8u;
label_3587f8:
    // 0x3587f8: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x3587f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x3587fc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3587fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x358800: 0x26060300  addiu       $a2, $s0, 0x300
    ctx->pc = 0x358800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x358804: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x358804u;
    SET_GPR_U32(ctx, 31, 0x35880Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x35880Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x35880Cu) { return; }
    ctx->pc = 0x35880Cu;
}
