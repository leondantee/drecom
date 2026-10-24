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

// Function: entry_001f1430
// Address: 0x1f1430 - 0x1f1570
void entry_001f1430_0x1f1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1430_0x1f1430");
#endif

    switch (ctx->pc) {
        case 0x1f14a4u: goto label_1f14a4;
        case 0x1f1544u: goto label_1f1544;
        case 0x1f1550u: goto label_1f1550;
        default: break;
    }

    ctx->pc = 0x1f1430u;

    // 0x1f1430: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1434: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f1438: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x1f1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x1f143c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1f143cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1f1440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f1440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1444: 0x0  nop
    ctx->pc = 0x1f1444u;
    // NOP
    // 0x1f1448: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f1448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f144c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1f144cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1f1450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f1450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1454: 0x0  nop
    ctx->pc = 0x1f1454u;
    // NOP
    // 0x1f1458: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f1458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f145c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f145cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1460: 0x0  nop
    ctx->pc = 0x1f1460u;
    // NOP
    // 0x1f1464: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f1464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f1468: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f1468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f146c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f146cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1470: 0x0  nop
    ctx->pc = 0x1f1470u;
    // NOP
    // 0x1f1474: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f1478: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1f1478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1f147c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f147cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1480: 0x0  nop
    ctx->pc = 0x1f1480u;
    // NOP
    // 0x1f1484: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f1484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f1488: 0xa7a00064  sh          $zero, 0x64($sp)
    ctx->pc = 0x1f1488u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f148c: 0xa3a00066  sb          $zero, 0x66($sp)
    ctx->pc = 0x1f148cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 102), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1490: 0xa3a00067  sb          $zero, 0x67($sp)
    ctx->pc = 0x1f1490u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f1494: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x1f1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1498: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1f1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f149c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x1F149Cu;
    SET_GPR_U32(ctx, 31, 0x1F14A4u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x1F149Cu, 0x1F14A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F14A4u;
label_1f14a4:
    // 0x1f14a4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1F14A4u;
    {
        const bool branch_taken_0x1f14a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f14a4) {
            ctx->pc = 0x1F163Cu;
            return;
        }
    }
    ctx->pc = 0x1F14ACu;
    // 0x1f14ac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f14b0: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x1f14b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x1f14b4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f14b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f14b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f14b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f14bc: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1f14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1f14c0: 0x1460005e  bnez        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x1F14C0u;
    {
        const bool branch_taken_0x1f14c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f14c0) {
            ctx->pc = 0x1F163Cu;
            return;
        }
    }
    ctx->pc = 0x1F14C8u;
    // 0x1f14c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f14c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14cc: 0x0  nop
    ctx->pc = 0x1f14ccu;
    // NOP
    // 0x1f14d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1f14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f14d4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f14d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f14d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14dc: 0x0  nop
    ctx->pc = 0x1f14dcu;
    // NOP
    // 0x1f14e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1f14e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1f14e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f14e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14e8: 0x0  nop
    ctx->pc = 0x1f14e8u;
    // NOP
    // 0x1f14ec: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1f14ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f14f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f14f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f14f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f14f8: 0x0  nop
    ctx->pc = 0x1f14f8u;
    // NOP
    // 0x1f14fc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1f14fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1f1500: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1f1500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1504: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1f1504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f1508: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1f1508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1f150c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1f150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f1510: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1f1510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1f1514: 0x3471ffff  ori         $s1, $v1, 0xFFFF
    ctx->pc = 0x1f1514u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f1518: 0x911824  and         $v1, $a0, $s1
    ctx->pc = 0x1f1518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x1f151c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f151cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f1520: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x1f1520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x1f1524: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1f1524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1f1528: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1f1528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1f152c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f152cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f1530: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f1530u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f1534: 0x24670880  addiu       $a3, $v1, 0x880
    ctx->pc = 0x1f1534u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x1f1538: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1f1538u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f153c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1F153Cu;
    SET_GPR_U32(ctx, 31, 0x1F1544u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1F153Cu, 0x1F1544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1544u;
label_1f1544:
    // 0x1f1544: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f1544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1548: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F1548u;
    SET_GPR_U32(ctx, 31, 0x1F1550u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F1548u, 0x1F1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1550u;
label_1f1550:
    // 0x1f1550: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1f1550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f1554: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1554u;
    {
        const bool branch_taken_0x1f1554 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f1554) {
            ctx->pc = 0x1F1570u;
            return;
        }
    }
    ctx->pc = 0x1F155Cu;
    // 0x1f155c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f155cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1560: 0x0  nop
    ctx->pc = 0x1f1560u;
    // NOP
    // 0x1f1564: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1f1564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1568u;
    {
        const bool branch_taken_0x1f1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1568) {
            ctx->pc = 0x1F158Cu;
            return;
        }
    }
    ctx->pc = 0x1F1570u;
}
