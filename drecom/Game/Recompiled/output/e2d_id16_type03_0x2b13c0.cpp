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

// Function: e2d_id16_type03
// Address: 0x2b13c0 - 0x2b1534
void e2d_id16_type03_0x2b13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id16_type03_0x2b13c0");
#endif

    switch (ctx->pc) {
        case 0x2b13dcu: goto label_2b13dc;
        case 0x2b13f0u: goto label_2b13f0;
        default: break;
    }

    ctx->pc = 0x2b13c0u;

    // 0x2b13c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b13c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b13c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b13c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b13c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b13c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b13cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b13d0: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x2b13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x2b13d4: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2B13D4u;
    SET_GPR_U32(ctx, 31, 0x2B13DCu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2B13D4u, 0x2B13DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13DCu;
label_2b13dc:
    // 0x2b13dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b13dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b13e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b13e4: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b13e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b13e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B13E8u;
    SET_GPR_U32(ctx, 31, 0x2B13F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B13E8u, 0x2B13F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B13F0u;
label_2b13f0:
    // 0x2b13f0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2b13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2b13f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b13f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b13f8: 0x0  nop
    ctx->pc = 0x2b13f8u;
    // NOP
    // 0x2b13fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b13fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1400: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b1400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b1404: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1404u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1408: 0x0  nop
    ctx->pc = 0x2b1408u;
    // NOP
    // 0x2b140c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b140cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1410: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1414: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b1418: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2b1418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2b141c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b141cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1420: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1424: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b1424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b1428: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b142c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b142cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1430: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1434: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b1434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b1438: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b143c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b143cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1444: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b1444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b1448: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b1448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b144c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1450: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1454: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b1454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b1458: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b1458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b145c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b145cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1460: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1464: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b1464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b1468: 0x3c03bf33  lui         $v1, 0xBF33
    ctx->pc = 0x2b1468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48947 << 16));
    // 0x2b146c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b146cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1478: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b1478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b147c: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b147cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1480: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1484: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1484u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1488: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b148c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b1490: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2b1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2b1494: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2b1494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2b1498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b149c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b14a0: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x2b14a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x2b14a4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x2b14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x2b14a8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b14a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b14ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b14acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b14b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b14b4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b14b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b14b8: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x2b14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x2b14bc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b14c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b14c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b14c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b14c8: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b14c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b14cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b14ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b14d0: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b14d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b14d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b14d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b14dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b14dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b14e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b14e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b14e4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b14e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b14e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b14e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b14ec: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b14ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b14f0: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b14f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b14f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b14f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b14f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b14fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b14fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b1500: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b1500u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b1504: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b1504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b1508: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b1508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b150c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b150cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b1510: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b1514: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b1514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b1518: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b1518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b151c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1520: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b1520u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b1524: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b1524u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1528: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b152c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1534u;
}
