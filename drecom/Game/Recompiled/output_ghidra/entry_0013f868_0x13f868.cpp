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

// Function: entry_0013f868
// Address: 0x13f868 - 0x13f924
void entry_0013f868_0x13f868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f868_0x13f868");
#endif

    switch (ctx->pc) {
        case 0x13f88cu: goto label_13f88c;
        case 0x13f89cu: goto label_13f89c;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8c4u: goto label_13f8c4;
        default: break;
    }

    ctx->pc = 0x13f868u;

    // 0x13f868: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f86c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13f86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13f870: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13f870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13f874: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13f874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13f878: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13f878u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13f87c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13f87cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13f880: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13f880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13f884: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13F884u;
    SET_GPR_U32(ctx, 31, 0x13F88Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13F884u, 0x13F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F88Cu;
label_13f88c:
    // 0x13f88c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f890: 0x27a51640  addiu       $a1, $sp, 0x1640
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13f894: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F894u;
    SET_GPR_U32(ctx, 31, 0x13F89Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F89Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F89Cu) { return; }
    ctx->pc = 0x13F89Cu;
label_13f89c:
    // 0x13f89c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13f89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8a0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8a4: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f8a8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13F8B0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F8B0u) { return; }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8b4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x13f8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13f8b8: 0x27a51630  addiu       $a1, $sp, 0x1630
    ctx->pc = 0x13f8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13f8bc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13F8BCu;
    SET_GPR_U32(ctx, 31, 0x13F8C4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13F8C4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13F8C4u) { return; }
    ctx->pc = 0x13F8C4u;
label_13f8c4:
    // 0x13f8c4: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8c8: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x13f8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x13f8cc: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13f8d0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x13f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13f8d4: 0xafa216a8  sw          $v0, 0x16A8($sp)
    ctx->pc = 0x13f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 2));
    // 0x13f8d8: 0x8fa51680  lw          $a1, 0x1680($sp)
    ctx->pc = 0x13f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13f8dc: 0x24a20003  addiu       $v0, $a1, 0x3
    ctx->pc = 0x13f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x13f8e0: 0xafa21680  sw          $v0, 0x1680($sp)
    ctx->pc = 0x13f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 2));
    // 0x13f8e4: 0x8fa31694  lw          $v1, 0x1694($sp)
    ctx->pc = 0x13f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13f8e8: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x13f8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13f8ec: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13f8f0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x13f8f4: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13f8f8: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x13f8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x13f8fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x13f8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f900: 0x864025  or          $t0, $a0, $a2
    ctx->pc = 0x13f900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13f904: 0x482025  or          $a0, $v0, $t0
    ctx->pc = 0x13f904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x13f908: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x13f908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x13f90c: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13f90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13f910: 0x863825  or          $a3, $a0, $a2
    ctx->pc = 0x13f910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x13f914: 0x8fa81674  lw          $t0, 0x1674($sp)
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13f918: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x13f918u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x13f91c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x13F91Cu;
    {
        const bool branch_taken_0x13f91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f91c) {
            ctx->pc = 0x13FF28u;
            return;
        }
    }
    ctx->pc = 0x13F924u;
}
