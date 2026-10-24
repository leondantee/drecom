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

// Function: entry_00330080
// Address: 0x330080 - 0x3302f8
void entry_00330080_0x330080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00330080_0x330080");
#endif

    switch (ctx->pc) {
        case 0x3302bcu: goto label_3302bc;
        case 0x3302d8u: goto label_3302d8;
        case 0x3302ecu: goto label_3302ec;
        default: break;
    }

    ctx->pc = 0x330080u;

    // 0x330080: 0x826265b0  lb          $v0, 0x65B0($s3)
    ctx->pc = 0x330080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26032)));
    // 0x330084: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x330084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x330088: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x330088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x33008c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x33008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x330090: 0x826b65b3  lb          $t3, 0x65B3($s3)
    ctx->pc = 0x330090u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 26035)));
    // 0x330094: 0xb1e3c  dsll32      $v1, $t3, 24
    ctx->pc = 0x330094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 24));
    // 0x330098: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x330098u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x33009c: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x33009cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3300a0: 0x1443020a  bne         $v0, $v1, . + 4 + (0x20A << 2)
    ctx->pc = 0x3300A0u;
    {
        const bool branch_taken_0x3300a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3300a0) {
            ctx->pc = 0x3308CCu;
            return;
        }
    }
    ctx->pc = 0x3300A8u;
    // 0x3300a8: 0x3c07003b  lui         $a3, 0x3B
    ctx->pc = 0x3300a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59 << 16));
    // 0x3300ac: 0x24e79700  addiu       $a3, $a3, -0x6900
    ctx->pc = 0x3300acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940416));
    // 0x3300b0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x3300b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3300b4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3300b4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3A9700u));
    // 0x3300b8: 0x78e80010  lq          $t0, 0x10($a3)
    ctx->pc = 0x3300b8u;
    SET_GPR_VEC(ctx, 8, FAST_READ128(0x3A9710u));
    // 0x3300bc: 0x78e90020  lq          $t1, 0x20($a3)
    ctx->pc = 0x3300bcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x3A9720u));
    // 0x3300c0: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x3300c0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3A9730u));
    // 0x3300c4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x3300c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x3300c8: 0x7cc80010  sq          $t0, 0x10($a2)
    ctx->pc = 0x3300c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 8));
    // 0x3300cc: 0x7cc90020  sq          $t1, 0x20($a2)
    ctx->pc = 0x3300ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 9));
    // 0x3300d0: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x3300d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x3300d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3300d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3300d8: 0x246395a0  addiu       $v1, $v1, -0x6A60
    ctx->pc = 0x3300d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940064));
    // 0x3300dc: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x3300dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3300e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3300e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3300e4: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3300e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x3300e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3300ec: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x3300ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3300f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3300f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3300f4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x3300f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x3300f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3300f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3300fc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3300fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x330100: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x330100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x330104: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x330104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x330108: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x330108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x33010c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x33010cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x330110: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x330110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x330114: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x330114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x330118: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x330118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33011c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x330120: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330120u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330124: 0x0  nop
    ctx->pc = 0x330124u;
    // NOP
    // 0x330128: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330128u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33012c: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x33012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330130: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330134: 0xe7a101c0  swc1        $f1, 0x1C0($sp)
    ctx->pc = 0x330134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x330138: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x330138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x33013c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x33013cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330140: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x330140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x330144: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x330144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330148: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x330148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33014c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33014cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x330150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330154: 0x0  nop
    ctx->pc = 0x330154u;
    // NOP
    // 0x330158: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330158u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33015c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x33015cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330160: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330160u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330164: 0xe7a101d0  swc1        $f1, 0x1D0($sp)
    ctx->pc = 0x330164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x330168: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x330168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x33016c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x33016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x330170: 0x464821  addu        $t1, $v0, $a2
    ctx->pc = 0x330170u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x330174: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x330174u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x330178: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x330178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x33017c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33017cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x330180: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x330180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x330184: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x330184u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x330188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33018c: 0x0  nop
    ctx->pc = 0x33018cu;
    // NOP
    // 0x330190: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x330194: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x330194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330198: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x33019c: 0xe7a101e0  swc1        $f1, 0x1E0($sp)
    ctx->pc = 0x33019cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x3301a0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3301a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x3301a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3301a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3301a8: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x3301a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3301ac: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3301acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3301b0: 0xc33821  addu        $a3, $a2, $v1
    ctx->pc = 0x3301b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3301b4: 0x74040  sll         $t0, $a3, 1
    ctx->pc = 0x3301b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3301b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3301b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3301bc: 0x0  nop
    ctx->pc = 0x3301bcu;
    // NOP
    // 0x3301c0: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3301c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3301c4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x3301c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3301c8: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x3301c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x3301cc: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x3301ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x3301d0: 0x8fa60270  lw          $a2, 0x270($sp)
    ctx->pc = 0x3301d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x3301d4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3301d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3301d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x3301d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3301dc: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x3301dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3301e0: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3301e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3301e4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x3301e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3301e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3301e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3301ec: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3301ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3301f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3301f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3301f4: 0x0  nop
    ctx->pc = 0x3301f4u;
    // NOP
    // 0x3301f8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3301f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3301fc: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x3301fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330200: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330200u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330204: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x330204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x330208: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33020c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33020cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330210: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x330214: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x330214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x330218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33021c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x33021cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x330220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x330220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330224: 0x0  nop
    ctx->pc = 0x330224u;
    // NOP
    // 0x330228: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33022c: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x33022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330230: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330234: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x330234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x330238: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x330238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33023c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x33023cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330240: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x330240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x330244: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x330244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330248: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x330248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33024c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x33024cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x330250: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330254: 0x0  nop
    ctx->pc = 0x330254u;
    // NOP
    // 0x330258: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33025c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x33025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330260: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330260u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330264: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x330264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x330268: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x330268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33026c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330270: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x330270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x330274: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x330274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x330278: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x330278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x33027c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33027cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x330280: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x330280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x330284: 0x0  nop
    ctx->pc = 0x330284u;
    // NOP
    // 0x330288: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x330288u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x33028c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x33028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x330290: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x330290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x330294: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x330294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x330298: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x330298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33029c: 0xc4202700  lwc1        $f0, 0x2700($at)
    ctx->pc = 0x33029cu;
    { uint32_t bits = FAST_READ32(0x892700u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3302a0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x3302a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x3302a4: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3302a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3302a8: 0xc42c2708  lwc1        $f12, 0x2708($at)
    ctx->pc = 0x3302a8u;
    { uint32_t bits = FAST_READ32(0x892708u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3302ac: 0xe7ac0204  swc1        $f12, 0x204($sp)
    ctx->pc = 0x3302acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x3302b0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3302b4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3302B4u;
    SET_GPR_U32(ctx, 31, 0x3302BCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3302BCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302BCu) { return; }
    ctx->pc = 0x3302BCu;
label_3302bc:
    // 0x3302bc: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3302bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x3302c0: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x3302c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3302c4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x3302c4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x3302c8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3302cc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3302ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3302d0: 0xc040ce4  jal         func_103390
    ctx->pc = 0x3302D0u;
    SET_GPR_U32(ctx, 31, 0x3302D8u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x3302D8u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302D8u) { return; }
    ctx->pc = 0x3302D8u;
label_3302d8:
    // 0x3302d8: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3302d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3302dc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3302dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3302e0: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x3302e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x3302e4: 0xc040c92  jal         func_103248
    ctx->pc = 0x3302E4u;
    SET_GPR_U32(ctx, 31, 0x3302ECu);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x3302ECu;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3302ECu) { return; }
    ctx->pc = 0x3302ECu;
label_3302ec:
    // 0x3302ec: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x3302ecu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3302f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3302F0u;
    {
        const bool branch_taken_0x3302f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3302f0) {
            ctx->pc = 0x330358u;
            return;
        }
    }
    ctx->pc = 0x3302F8u;
}
