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

// Function: e2d_id16_type05
// Address: 0x2b16c0 - 0x2b1834
void e2d_id16_type05_0x2b16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id16_type05_0x2b16c0");
#endif

    switch (ctx->pc) {
        case 0x2b16dcu: goto label_2b16dc;
        case 0x2b16f0u: goto label_2b16f0;
        default: break;
    }

    ctx->pc = 0x2b16c0u;

    // 0x2b16c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b16c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b16c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b16c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b16cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b16d0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b16d4: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B16D4u;
    SET_GPR_U32(ctx, 31, 0x2B16DCu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B16D4u, 0x2B16DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16DCu;
label_2b16dc:
    // 0x2b16dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b16dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b16e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b16e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b16e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b16e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b16e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B16E8u;
    SET_GPR_U32(ctx, 31, 0x2B16F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B16E8u, 0x2B16F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B16F0u;
label_2b16f0:
    // 0x2b16f0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b16f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b16f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b16f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b16f8: 0x0  nop
    ctx->pc = 0x2b16f8u;
    // NOP
    // 0x2b16fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b16fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1700: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2b1700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2b1704: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1704u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1708: 0x0  nop
    ctx->pc = 0x2b1708u;
    // NOP
    // 0x2b170c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b170cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1710: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1714: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1718: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2b1718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2b171c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b171cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1720: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1724: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b1724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b1728: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2b1728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2b172c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b172cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1730: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1734: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b1734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b1738: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b173c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b173cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1740: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1744: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b1744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b1748: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b174c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b174cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1750: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1754: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b1754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b1758: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b175c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b175cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1760: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1764: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b1764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b1768: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2b1768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2b176c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1770: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1770u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1774: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1778: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b1778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b177c: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1780: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1784: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1788: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b178c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b1790: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b1790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1794: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b179c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b179cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b17a0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2b17a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2b17a4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2b17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2b17a8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b17a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b17ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b17acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b17b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b17b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b17b4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b17b8: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x2b17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x2b17bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b17bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b17c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b17c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b17c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b17c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b17c8: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b17c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b17cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b17ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b17d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b17d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b17d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b17d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b17d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b17dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b17dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b17e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b17e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b17e4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b17e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b17e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b17e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b17ec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b17ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b17f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b17f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b17f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b17f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b17f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b17f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b17fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b17fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b1800: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b1800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b1804: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b1804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b1808: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b180c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b180cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b1810: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1814: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b1814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b1818: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b1818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b181c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1820: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b1820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1824: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b1824u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1828: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b182c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B182Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B182Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1834u;
}
