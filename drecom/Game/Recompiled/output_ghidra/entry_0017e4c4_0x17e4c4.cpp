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

// Function: entry_0017e4c4
// Address: 0x17e4c4 - 0x17e540
void entry_0017e4c4_0x17e4c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e4c4_0x17e4c4");
#endif

    switch (ctx->pc) {
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e508u: goto label_17e508;
        case 0x17e520u: goto label_17e520;
        default: break;
    }

    ctx->pc = 0x17e4c4u;

    // 0x17e4c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4c8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4cc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e4d0: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x17e4d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x17e4d4: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x17e4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x17e4d8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x17e4d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x17e4dc: 0x24460020  addiu       $a2, $v0, 0x20
    ctx->pc = 0x17e4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x17e4e0: 0xc040c80  jal         func_103200
    ctx->pc = 0x17E4E0u;
    SET_GPR_U32(ctx, 31, 0x17E4E8u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17E4E8u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E4E8u) { return; }
    ctx->pc = 0x17E4E8u;
label_17e4e8:
    // 0x17e4e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x17e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4ec: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e4f4: 0x8c84008c  lw          $a0, 0x8C($a0)
    ctx->pc = 0x17e4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x17e4f8: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x17e4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x17e4fc: 0x8c660088  lw          $a2, 0x88($v1)
    ctx->pc = 0x17e4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x17e500: 0xc05fb7c  jal         func_17EDF0
    ctx->pc = 0x17E500u;
    SET_GPR_U32(ctx, 31, 0x17E508u);
    ctx->pc = 0x17EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EDF0u, 0x17E500u, 0x17E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E508u;
label_17e508:
    // 0x17e508: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x17e508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17e50c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e510: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17e514: 0xc7ac0054  lwc1        $f12, 0x54($sp)
    ctx->pc = 0x17e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17e518: 0xc040c8c  jal         func_103230
    ctx->pc = 0x17E518u;
    SET_GPR_U32(ctx, 31, 0x17E520u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x17E520u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E520u) { return; }
    ctx->pc = 0x17E520u;
label_17e520:
    // 0x17e520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17e524: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x17e524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x17e528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x17e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17e52c: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x17e530: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17e534: 0x24660020  addiu       $a2, $v1, 0x20
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x17e538: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x17E538u;
    SET_GPR_U32(ctx, 31, 0x17E540u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x17E540u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17E540u) { return; }
    ctx->pc = 0x17E540u;
}
