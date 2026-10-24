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

// Function: entry_0013fe48
// Address: 0x13fe48 - 0x13ff28
void entry_0013fe48_0x13fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fe48_0x13fe48");
#endif

    switch (ctx->pc) {
        case 0x13fe78u: goto label_13fe78;
        case 0x13fe94u: goto label_13fe94;
        case 0x13feb0u: goto label_13feb0;
        case 0x13feccu: goto label_13fecc;
        default: break;
    }

    ctx->pc = 0x13fe48u;

    // 0x13fe48: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe4c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x13fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13fe50: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe54: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x13fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13fe58: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fe58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fe5c: 0x27a71610  addiu       $a3, $sp, 0x1610
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fe60: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x13fe60u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fe64: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fe64u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fe68: 0x27a21690  addiu       $v0, $sp, 0x1690
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13fe6c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13fe6cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe70: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13FE70u;
    SET_GPR_U32(ctx, 31, 0x13FE78u);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13FE70u, 0x13FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FE78u;
label_13fe78:
    // 0x13fe78: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fe78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe7c: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe80: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fe80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fe84: 0x27a21640  addiu       $v0, $sp, 0x1640
    ctx->pc = 0x13fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13fe88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fe88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe8c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FE8Cu;
    SET_GPR_U32(ctx, 31, 0x13FE94u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FE94u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FE94u) { return; }
    ctx->pc = 0x13FE94u;
label_13fe94:
    // 0x13fe94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fe94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fe98: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fe98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fe9c: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fea0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x13fea0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x13fea4: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fea8: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13FEA8u;
    SET_GPR_U32(ctx, 31, 0x13FEB0u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FEB0u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FEB0u) { return; }
    ctx->pc = 0x13FEB0u;
label_13feb0:
    // 0x13feb0: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13feb4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x13feb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13feb8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x13feb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13febc: 0x27a21630  addiu       $v0, $sp, 0x1630
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13fec0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fec4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FEC4u;
    SET_GPR_U32(ctx, 31, 0x13FECCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FECCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FECCu) { return; }
    ctx->pc = 0x13FECCu;
label_13fecc:
    // 0x13fecc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13feccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fed0: 0x8fa316a8  lw          $v1, 0x16A8($sp)
    ctx->pc = 0x13fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fed4: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x13fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x13fed8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fedc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x13fedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13fee0: 0xafa516a8  sw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 5));
    // 0x13fee4: 0x8fa61680  lw          $a2, 0x1680($sp)
    ctx->pc = 0x13fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5760)));
    // 0x13fee8: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x13fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x13feec: 0xafa21680  sw          $v0, 0x1680($sp)
    ctx->pc = 0x13feecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5760), GPR_U32(ctx, 2));
    // 0x13fef0: 0x8fa51694  lw          $a1, 0x1694($sp)
    ctx->pc = 0x13fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5780)));
    // 0x13fef4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x13fef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x13fef8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x13fefc: 0x61bfc  dsll32      $v1, $a2, 15
    ctx->pc = 0x13fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 15));
    // 0x13ff00: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13ff04: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ff08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x13ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13ff0c: 0xa41025  or          $v0, $a1, $a0
    ctx->pc = 0x13ff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13ff10: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x13ff10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13ff14: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x13ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x13ff18: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13ff18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ff1c: 0x1042825  or          $a1, $t0, $a0
    ctx->pc = 0x13ff1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x13ff20: 0x8fa21674  lw          $v0, 0x1674($sp)
    ctx->pc = 0x13ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5748)));
    // 0x13ff24: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x13ff24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    ctx->pc = 0x13ff28u;
}
