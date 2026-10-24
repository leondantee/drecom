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

// Function: entry_00286374
// Address: 0x286374 - 0x286790
void entry_00286374_0x286374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286374_0x286374");
#endif

    switch (ctx->pc) {
        case 0x286518u: goto label_286518;
        case 0x286638u: goto label_286638;
        default: break;
    }

    ctx->pc = 0x286374u;

    // 0x286374: 0x26245e08  addiu       $a0, $s1, 0x5E08
    ctx->pc = 0x286374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24072));
    // 0x286378: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x286378u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x28637c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286380: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286384: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x286384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x286388: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28638c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28638cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286390: 0x0  nop
    ctx->pc = 0x286390u;
    // NOP
    // 0x286394: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286398: 0x82245dea  lb          $a0, 0x5DEA($s1)
    ctx->pc = 0x286398u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x28639c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2863a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2863a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2863a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2863a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2863a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863ac: 0x0  nop
    ctx->pc = 0x2863acu;
    // NOP
    // 0x2863b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2863b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2863b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2863b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2863b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863bc: 0x0  nop
    ctx->pc = 0x2863bcu;
    // NOP
    // 0x2863c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2863c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2863c4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2863c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2863c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863cc: 0x0  nop
    ctx->pc = 0x2863ccu;
    // NOP
    // 0x2863d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2863d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2863d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2863d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2863d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863dc: 0x0  nop
    ctx->pc = 0x2863dcu;
    // NOP
    // 0x2863e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2863e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2863e4: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2863e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2863e8: 0x3c04434d  lui         $a0, 0x434D
    ctx->pc = 0x2863e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17229 << 16));
    // 0x2863ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2863ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2863f0: 0x0  nop
    ctx->pc = 0x2863f0u;
    // NOP
    // 0x2863f4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2863f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2863f8: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2863f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2863fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2863fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286400: 0x0  nop
    ctx->pc = 0x286400u;
    // NOP
    // 0x286404: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286408: 0x3c0443ef  lui         $a0, 0x43EF
    ctx->pc = 0x286408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17391 << 16));
    // 0x28640c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x28640cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286410: 0x0  nop
    ctx->pc = 0x286410u;
    // NOP
    // 0x286414: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286418: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x28641c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28641cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286420: 0x0  nop
    ctx->pc = 0x286420u;
    // NOP
    // 0x286424: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286428: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x286428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x28642c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28642cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286430: 0x0  nop
    ctx->pc = 0x286430u;
    // NOP
    // 0x286434: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x286434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x286438: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x286438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x28643c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28643cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286440: 0x0  nop
    ctx->pc = 0x286440u;
    // NOP
    // 0x286444: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x286444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x286448: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x286448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x28644c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x28644cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286450: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x286450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286458: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28645c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286460: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286464: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x286464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286468: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28646c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286470: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286474: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286478: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x286478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28647c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28647cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286480: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286484: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286488: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286488u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28648c: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x28648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286494: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x286494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x286498: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x286498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28649c: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x28649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864a4: 0x0  nop
    ctx->pc = 0x2864a4u;
    // NOP
    // 0x2864a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864ac: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2864acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2864b0: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2864b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864b4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864bc: 0x0  nop
    ctx->pc = 0x2864bcu;
    // NOP
    // 0x2864c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864c4: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2864c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2864c8: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x2864c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864cc: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864d4: 0x0  nop
    ctx->pc = 0x2864d4u;
    // NOP
    // 0x2864d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864dc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2864dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2864e0: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2864e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2864e4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2864e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2864e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2864e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2864ec: 0x0  nop
    ctx->pc = 0x2864ecu;
    // NOP
    // 0x2864f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2864f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2864f4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2864f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2864f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2864f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2864fc: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286500: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286504: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286508: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28650c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286510: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286510u;
    SET_GPR_U32(ctx, 31, 0x286518u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286510u, 0x286518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286518u;
label_286518:
    // 0x286518: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x286518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28651c: 0x26226090  addiu       $v0, $s1, 0x6090
    ctx->pc = 0x28651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 24720));
    // 0x286520: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x286520u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x286524: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x286524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286528: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x286528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x28652c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x28652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x286530: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286534: 0x0  nop
    ctx->pc = 0x286534u;
    // NOP
    // 0x286538: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28653c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x28653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286544: 0x0  nop
    ctx->pc = 0x286544u;
    // NOP
    // 0x286548: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x286548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x28654c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x28654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x286550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286554: 0x0  nop
    ctx->pc = 0x286554u;
    // NOP
    // 0x286558: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x28655c: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x286560: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286564: 0x0  nop
    ctx->pc = 0x286564u;
    // NOP
    // 0x286568: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x28656c: 0x3c0343a7  lui         $v1, 0x43A7
    ctx->pc = 0x28656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17319 << 16));
    // 0x286570: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x286574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286578: 0x0  nop
    ctx->pc = 0x286578u;
    // NOP
    // 0x28657c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x28657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286580: 0x3c04438d  lui         $a0, 0x438D
    ctx->pc = 0x286580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17293 << 16));
    // 0x286584: 0x34838000  ori         $v1, $a0, 0x8000
    ctx->pc = 0x286584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x286588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28658c: 0x0  nop
    ctx->pc = 0x28658cu;
    // NOP
    // 0x286590: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x286590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x286594: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286598: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28659c: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x28659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865a4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2865a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2865a8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2865ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2865acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2865b0: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x2865b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865b8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2865b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2865bc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2865c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2865c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2865c4: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2865c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2865c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2865c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2865cc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x2865ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x2865d0: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2865d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2865d4: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2865d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2865d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2865d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2865dc: 0x0  nop
    ctx->pc = 0x2865dcu;
    // NOP
    // 0x2865e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2865e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2865e4: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2865e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2865e8: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2865e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2865ec: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x2865ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x2865f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2865f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2865f4: 0x0  nop
    ctx->pc = 0x2865f4u;
    // NOP
    // 0x2865f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2865f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2865fc: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2865fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286600: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x286600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286604: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x286608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x286608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28660c: 0x0  nop
    ctx->pc = 0x28660cu;
    // NOP
    // 0x286610: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286614: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28661c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286620: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286624: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x286628: 0x260800c4  addiu       $t0, $s0, 0xC4
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x28662c: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286630: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286630u;
    SET_GPR_U32(ctx, 31, 0x286638u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286630u, 0x286638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286638u;
label_286638:
    // 0x286638: 0x26305f4c  addiu       $s0, $s1, 0x5F4C
    ctx->pc = 0x286638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24396));
    // 0x28663c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x286640: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x286640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x286644: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x286644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x286648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28664c: 0x0  nop
    ctx->pc = 0x28664cu;
    // NOP
    // 0x286650: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x286654: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x286654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x286658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28665c: 0x0  nop
    ctx->pc = 0x28665cu;
    // NOP
    // 0x286660: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x286660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x286664: 0x3c04435c  lui         $a0, 0x435C
    ctx->pc = 0x286664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17244 << 16));
    // 0x286668: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286668u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28666c: 0x0  nop
    ctx->pc = 0x28666cu;
    // NOP
    // 0x286670: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286674: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x286678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28667c: 0x0  nop
    ctx->pc = 0x28667cu;
    // NOP
    // 0x286680: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x286680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x286684: 0x3c034299  lui         $v1, 0x4299
    ctx->pc = 0x286684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17049 << 16));
    // 0x286688: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x286688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x28668c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28668cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286690: 0x0  nop
    ctx->pc = 0x286690u;
    // NOP
    // 0x286694: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286698: 0x82245dea  lb          $a0, 0x5DEA($s1)
    ctx->pc = 0x286698u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x28669c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x28669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
    // 0x2866a0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2866a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2866a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2866a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866ac: 0x0  nop
    ctx->pc = 0x2866acu;
    // NOP
    // 0x2866b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2866b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2866b4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2866b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2866b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866bc: 0x0  nop
    ctx->pc = 0x2866bcu;
    // NOP
    // 0x2866c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2866c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866c4: 0x3c034240  lui         $v1, 0x4240
    ctx->pc = 0x2866c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16960 << 16));
    // 0x2866c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866cc: 0x0  nop
    ctx->pc = 0x2866ccu;
    // NOP
    // 0x2866d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2866d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2866d4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2866d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2866d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2866d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2866dc: 0x0  nop
    ctx->pc = 0x2866dcu;
    // NOP
    // 0x2866e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2866e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2866e4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x2866e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x2866e8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2866e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2866ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2866ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2866f0: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x2866f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2866f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2866f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2866f8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2866f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2866fc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2866fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x286700: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x286700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286704: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x286704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x286708: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28670c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x28670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286710: 0x3c12bf80  lui         $s2, 0xBF80
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49024 << 16));
    // 0x286714: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x286714u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x286718: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x286718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28671c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28671cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286720: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x286724: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x286724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286728: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x28672c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28672cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286730: 0x0  nop
    ctx->pc = 0x286730u;
    // NOP
    // 0x286734: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286738: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x286738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x28673c: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x28673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286740: 0x3c044400  lui         $a0, 0x4400
    ctx->pc = 0x286740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17408 << 16));
    // 0x286744: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x286744u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286748: 0x0  nop
    ctx->pc = 0x286748u;
    // NOP
    // 0x28674c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28674cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286750: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x286750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x286754: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x286754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286758: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x286758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x28675c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28675cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286760: 0x0  nop
    ctx->pc = 0x286760u;
    // NOP
    // 0x286764: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x286764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x286768: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x286768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x28676c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x286770: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x286770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x286774: 0x26060044  addiu       $a2, $s0, 0x44
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x286778: 0x26070084  addiu       $a3, $s0, 0x84
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x28677c: 0x261200c4  addiu       $s2, $s0, 0xC4
    ctx->pc = 0x28677cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    // 0x286780: 0x72404628  paddub      $t0, $s2, $zero
    ctx->pc = 0x286780u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x286784: 0x26090104  addiu       $t1, $s0, 0x104
    ctx->pc = 0x286784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    // 0x286788: 0xc0a43e0  jal         func_290F80
    ctx->pc = 0x286788u;
    SET_GPR_U32(ctx, 31, 0x286790u);
    ctx->pc = 0x290F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290F80u, 0x286788u, 0x286790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286790u;
}
