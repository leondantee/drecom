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

// Function: entry_0025b62c
// Address: 0x25b62c - 0x25b6ec
void entry_0025b62c_0x25b62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025b62c_0x25b62c");
#endif

    switch (ctx->pc) {
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6e8u: goto label_25b6e8;
        default: break;
    }

    ctx->pc = 0x25b62cu;

    // 0x25b62c: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b630: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x25b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b634: 0xe44009cc  swc1        $f0, 0x9CC($v0)
    ctx->pc = 0x25b634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2508), bits); }
    // 0x25b638: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b63c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25b640: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b644: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x25b644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x25b648: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b64c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25b650: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25b650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b654: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x25b654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x25b658: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b65c: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25b660: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25b660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b664: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x25b664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x25b668: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b66c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b670: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25b674: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25b678: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b67c: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b680: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x25b680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x25b684: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x25b684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25b688: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25b688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b68c: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x25b68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b690: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x25b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x25b694: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x25b694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x25b698: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b69c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x25b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x25b6a0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x25b6a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x25b6a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b6a8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25B6A8u;
    SET_GPR_U32(ctx, 31, 0x25B6B0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25B6B0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25B6B0u) { return; }
    ctx->pc = 0x25B6B0u;
label_25b6b0:
    // 0x25b6b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25b6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25b6b4: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x25b6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b6b8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25b6bc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x25b6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b6c0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25b6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25b6c4: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x25b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b6c8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25b6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25b6cc: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x25b6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b6d0: 0x8fa60138  lw          $a2, 0x138($sp)
    ctx->pc = 0x25b6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x25b6d4: 0x8ca40130  lw          $a0, 0x130($a1)
    ctx->pc = 0x25b6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x25b6d8: 0x24c500e0  addiu       $a1, $a2, 0xE0
    ctx->pc = 0x25b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
    // 0x25b6dc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x25b6dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b6e0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x25B6E0u;
    SET_GPR_U32(ctx, 31, 0x25B6E8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x25B6E0u, 0x25B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B6E8u;
label_25b6e8:
    // 0x25b6e8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x25b6e8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x25b6ecu;
}
