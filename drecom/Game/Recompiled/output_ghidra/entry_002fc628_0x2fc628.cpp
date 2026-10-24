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

// Function: entry_002fc628
// Address: 0x2fc628 - 0x2fc768
void entry_002fc628_0x2fc628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc628_0x2fc628");
#endif

    switch (ctx->pc) {
        case 0x2fc688u: goto label_2fc688;
        case 0x2fc6acu: goto label_2fc6ac;
        case 0x2fc700u: goto label_2fc700;
        case 0x2fc728u: goto label_2fc728;
        case 0x2fc748u: goto label_2fc748;
        default: break;
    }

    ctx->pc = 0x2fc628u;

    // 0x2fc628: 0x83a6016f  lb          $a2, 0x16F($sp)
    ctx->pc = 0x2fc628u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc62c: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x2fc62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2fc630: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc630u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc634: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fc634u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc638: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2fc638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc63c: 0x24651600  addiu       $a1, $v1, 0x1600
    ctx->pc = 0x2fc63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x2fc640: 0x78a60000  lq          $a2, 0x0($a1)
    ctx->pc = 0x2fc640u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fc644: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x2fc644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2fc648: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x2fc648u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x2fc64c: 0x83a7016f  lb          $a3, 0x16F($sp)
    ctx->pc = 0x2fc64cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc650: 0x7263c  dsll32      $a0, $a3, 24
    ctx->pc = 0x2fc650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 24));
    // 0x2fc654: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x2fc654u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x2fc658: 0x419c0  sll         $v1, $a0, 7
    ctx->pc = 0x2fc658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x2fc65c: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x2fc65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc660: 0x24c41610  addiu       $a0, $a2, 0x1610
    ctx->pc = 0x2fc660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x2fc664: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2fc664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fc668: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2fc668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2fc66c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2fc66cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2fc670: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2fc670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc674: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x2fc674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2fc678: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc678u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc67c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2fc67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2fc680: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2FC680u;
    SET_GPR_U32(ctx, 31, 0x2FC688u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2FC680u, 0x2FC688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC688u;
label_2fc688:
    // 0x2fc688: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2fc688u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc68c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2fc68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2fc690: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2fc690u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc694: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x2fc694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc698: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2fc698u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc69c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2fc69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2fc6a0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2fc6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fc6a4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2FC6A4u;
    SET_GPR_U32(ctx, 31, 0x2FC6ACu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2FC6ACu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC6ACu) { return; }
    ctx->pc = 0x2FC6ACu;
label_2fc6ac:
    // 0x2fc6ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2fc6acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc6b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2fc6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc6b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2fc6b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc6b8: 0x0  nop
    ctx->pc = 0x2fc6b8u;
    // NOP
    // 0x2fc6bc: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x2fc6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x2fc6c0: 0x17463c  dsll32      $t0, $s7, 24
    ctx->pc = 0x2fc6c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 23) << (32 + 24));
    // 0x2fc6c4: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x2fc6c4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
    // 0x2fc6c8: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x2fc6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x2fc6cc: 0x2843821  addu        $a3, $s4, $a0
    ctx->pc = 0x2fc6ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2fc6d0: 0x83a3016f  lb          $v1, 0x16F($sp)
    ctx->pc = 0x2fc6d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 367)));
    // 0x2fc6d4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2fc6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc6d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc6d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc6dc: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x2fc6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x2fc6e0: 0x2834021  addu        $t0, $s4, $v1
    ctx->pc = 0x2fc6e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2fc6e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2fc6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc6e8: 0x24e71600  addiu       $a3, $a3, 0x1600
    ctx->pc = 0x2fc6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
    // 0x2fc6ec: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc6ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc6f0: 0x25081600  addiu       $t0, $t0, 0x1600
    ctx->pc = 0x2fc6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5632));
    // 0x2fc6f4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x2fc6f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2fc6f8: 0xc040c80  jal         func_103200
    ctx->pc = 0x2FC6F8u;
    SET_GPR_U32(ctx, 31, 0x2FC700u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x2FC700u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC700u) { return; }
    ctx->pc = 0x2FC700u;
label_2fc700:
    // 0x2fc700: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2fc700u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc704: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2fc704u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc708: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2fc708u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc70c: 0x0  nop
    ctx->pc = 0x2fc70cu;
    // NOP
    // 0x2fc710: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2fc710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2fc714: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2fc714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc718: 0x27a70140  addiu       $a3, $sp, 0x140
    ctx->pc = 0x2fc718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc71c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x2fc71cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2fc720: 0xc040c24  jal         func_103090
    ctx->pc = 0x2FC720u;
    SET_GPR_U32(ctx, 31, 0x2FC728u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2FC728u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC728u) { return; }
    ctx->pc = 0x2FC728u;
label_2fc728:
    // 0x2fc728: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2fc728u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc72c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2fc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2fc730: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2fc730u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fc734: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x2fc734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc738: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2fc738u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2fc73c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2fc73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2fc740: 0xc040c8c  jal         func_103230
    ctx->pc = 0x2FC740u;
    SET_GPR_U32(ctx, 31, 0x2FC748u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x2FC748u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2FC748u) { return; }
    ctx->pc = 0x2FC748u;
label_2fc748:
    // 0x2fc748: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2fc748u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2fc74c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2fc74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2fc750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fc750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fc754: 0x0  nop
    ctx->pc = 0x2fc754u;
    // NOP
    // 0x2fc758: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2fc758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2fc75c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc75cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc760: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2FC760u;
    {
        const bool branch_taken_0x2fc760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc760) {
            ctx->pc = 0x2FC840u;
            return;
        }
    }
    ctx->pc = 0x2FC768u;
}
