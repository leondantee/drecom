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

// Function: entry_002185e8
// Address: 0x2185e8 - 0x218758
void entry_002185e8_0x2185e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002185e8_0x2185e8");
#endif

    switch (ctx->pc) {
        case 0x218644u: goto label_218644;
        case 0x218668u: goto label_218668;
        case 0x21868cu: goto label_21868c;
        case 0x218728u: goto label_218728;
        default: break;
    }

    ctx->pc = 0x2185e8u;

    // 0x2185e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2185e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2185ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2185ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2185f0: 0x0  nop
    ctx->pc = 0x2185f0u;
    // NOP
    // 0x2185f4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2185f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2185f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2185f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2185fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2185fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x218600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218604: 0x0  nop
    ctx->pc = 0x218604u;
    // NOP
    // 0x218608: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x218608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x21860c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x218610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218614: 0x0  nop
    ctx->pc = 0x218614u;
    // NOP
    // 0x218618: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x21861c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x21861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x218620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218624: 0x0  nop
    ctx->pc = 0x218624u;
    // NOP
    // 0x218628: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x218628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x21862c: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x21862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x218630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218634: 0x0  nop
    ctx->pc = 0x218634u;
    // NOP
    // 0x218638: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x218638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x21863c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21863Cu;
    SET_GPR_U32(ctx, 31, 0x218644u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21863Cu, 0x218644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218644u;
label_218644:
    // 0x218644: 0x3c0241b0  lui         $v0, 0x41B0
    ctx->pc = 0x218644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16816 << 16));
    // 0x218648: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21864c: 0x0  nop
    ctx->pc = 0x21864cu;
    // NOP
    // 0x218650: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218654: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x218654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218658: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21865c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x21865cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x218660: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218660u;
    SET_GPR_U32(ctx, 31, 0x218668u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218660u, 0x218668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218668u;
label_218668:
    // 0x218668: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x218668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21866c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21866cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218670: 0x0  nop
    ctx->pc = 0x218670u;
    // NOP
    // 0x218674: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218678: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x218678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21867c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21867cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218680: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x218680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x218684: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218684u;
    SET_GPR_U32(ctx, 31, 0x21868Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218684u, 0x21868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21868Cu;
label_21868c:
    // 0x21868c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21868cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x218690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x218690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218694: 0x0  nop
    ctx->pc = 0x218694u;
    // NOP
    // 0x218698: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x218698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21869c: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x21869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2186a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2186a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2186a4: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2186a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2186a8: 0x3c02bdcc  lui         $v0, 0xBDCC
    ctx->pc = 0x2186a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48588 << 16));
    // 0x2186ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2186acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2186b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2186b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186b4: 0x0  nop
    ctx->pc = 0x2186b4u;
    // NOP
    // 0x2186b8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x2186b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x2186bc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x2186bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x2186c0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2186c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2186c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2186c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186c8: 0x0  nop
    ctx->pc = 0x2186c8u;
    // NOP
    // 0x2186cc: 0xe6000108  swc1        $f0, 0x108($s0)
    ctx->pc = 0x2186ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    // 0x2186d0: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2186d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2186d4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2186d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2186d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2186d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186dc: 0x0  nop
    ctx->pc = 0x2186dcu;
    // NOP
    // 0x2186e0: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x2186e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x2186e4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2186e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2186e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2186e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2186ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2186ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186f0: 0x0  nop
    ctx->pc = 0x2186f0u;
    // NOP
    // 0x2186f4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2186f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2186f8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x2186fc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x2186fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x218700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218704: 0x0  nop
    ctx->pc = 0x218704u;
    // NOP
    // 0x218708: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x218708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x21870c: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x21870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x218710: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x218710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x218714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218718: 0x0  nop
    ctx->pc = 0x218718u;
    // NOP
    // 0x21871c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x21871cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x218720: 0xc06765c  jal         func_19D970
    ctx->pc = 0x218720u;
    SET_GPR_U32(ctx, 31, 0x218728u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x218720u, 0x218728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218728u;
label_218728:
    // 0x218728: 0x3c034282  lui         $v1, 0x4282
    ctx->pc = 0x218728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17026 << 16));
    // 0x21872c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21872cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218730: 0x0  nop
    ctx->pc = 0x218730u;
    // NOP
    // 0x218734: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x218734u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218738: 0x3c03430c  lui         $v1, 0x430C
    ctx->pc = 0x218738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
    // 0x21873c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21873cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218740: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x218740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218744: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x218744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218748: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x218748u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21874c: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x21874cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x218750: 0x93a30038  lbu         $v1, 0x38($sp)
    ctx->pc = 0x218750u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x218754: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x218754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x218758u;
}
