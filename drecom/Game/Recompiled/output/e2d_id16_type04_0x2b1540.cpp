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

// Function: e2d_id16_type04
// Address: 0x2b1540 - 0x2b16b4
void e2d_id16_type04_0x2b1540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id16_type04_0x2b1540");
#endif

    switch (ctx->pc) {
        case 0x2b155cu: goto label_2b155c;
        case 0x2b1570u: goto label_2b1570;
        default: break;
    }

    ctx->pc = 0x2b1540u;

    // 0x2b1540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b1540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b1544: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b1548: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b1548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b154c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1550: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b1550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b1554: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B1554u;
    SET_GPR_U32(ctx, 31, 0x2B155Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B1554u, 0x2B155Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B155Cu;
label_2b155c:
    // 0x2b155c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b155cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b1560: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1564: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b1564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b1568: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B1568u;
    SET_GPR_U32(ctx, 31, 0x2B1570u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B1568u, 0x2B1570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1570u;
label_2b1570:
    // 0x2b1570: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b1570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b1574: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1578: 0x0  nop
    ctx->pc = 0x2b1578u;
    // NOP
    // 0x2b157c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b157cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1580: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b1580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b1584: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1588: 0x0  nop
    ctx->pc = 0x2b1588u;
    // NOP
    // 0x2b158c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b158cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1590: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1594: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1598: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2b1598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2b159c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b159cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15a4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b15a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b15a8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b15ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15b4: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b15b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b15b8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b15bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15c4: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b15c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b15c8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b15cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15d4: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b15d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b15d8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b15dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15e4: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b15e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b15e8: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2b15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2b15ec: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b15ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b15f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b15f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b15f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b15f8: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b15f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b15fc: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1600: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1604: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1608: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b160c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b1610: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b1610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1614: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b161c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1620: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2b1620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2b1624: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2b1624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2b1628: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b1628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b162c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b162cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1630: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1634: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b1634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1638: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x2b1638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x2b163c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b1640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1644: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1648: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b1648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b164c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b164cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b1650: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b1650u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b1654: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b1654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b1658: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b1658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b165c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b165cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b1660: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1664: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b1664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b1668: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b166c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b166cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b1670: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b1670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b1674: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b1674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b1678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b1678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b167c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b167cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b1680: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b1680u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b1684: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b1684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b1688: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b168c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b168cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b1690: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1694: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b1694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b1698: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b1698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b169c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b16a0: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b16a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b16a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b16a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b16a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b16a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b16ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B16ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B16ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B16B4u;
}
