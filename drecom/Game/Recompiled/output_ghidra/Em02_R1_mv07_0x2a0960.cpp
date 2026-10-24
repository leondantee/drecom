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

// Function: Em02_R1_mv07
// Address: 0x2a0960 - 0x2a16b8
void Em02_R1_mv07_0x2a0960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_mv07_0x2a0960");
#endif

    switch (ctx->pc) {
        case 0x2a09e4u: goto label_2a09e4;
        case 0x2a0a2cu: goto label_2a0a2c;
        case 0x2a0a3cu: goto label_2a0a3c;
        case 0x2a0a4cu: goto label_2a0a4c;
        case 0x2a0b04u: goto label_2a0b04;
        case 0x2a0b3cu: goto label_2a0b3c;
        case 0x2a0b78u: goto label_2a0b78;
        case 0x2a0bb0u: goto label_2a0bb0;
        case 0x2a0c00u: goto label_2a0c00;
        case 0x2a0c50u: goto label_2a0c50;
        case 0x2a0c64u: goto label_2a0c64;
        case 0x2a0c7cu: goto label_2a0c7c;
        case 0x2a0c9cu: goto label_2a0c9c;
        case 0x2a0cb4u: goto label_2a0cb4;
        case 0x2a0cd8u: goto label_2a0cd8;
        case 0x2a0d3cu: goto label_2a0d3c;
        case 0x2a0d44u: goto label_2a0d44;
        case 0x2a0eb8u: goto label_2a0eb8;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0eecu: goto label_2a0eec;
        case 0x2a0f24u: goto label_2a0f24;
        case 0x2a0f54u: goto label_2a0f54;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f78u: goto label_2a0f78;
        case 0x2a0fb4u: goto label_2a0fb4;
        case 0x2a101cu: goto label_2a101c;
        case 0x2a1038u: goto label_2a1038;
        case 0x2a106cu: goto label_2a106c;
        case 0x2a108cu: goto label_2a108c;
        case 0x2a10a0u: goto label_2a10a0;
        case 0x2a10acu: goto label_2a10ac;
        case 0x2a10b8u: goto label_2a10b8;
        case 0x2a1160u: goto label_2a1160;
        case 0x2a11dcu: goto label_2a11dc;
        case 0x2a1240u: goto label_2a1240;
        case 0x2a1264u: goto label_2a1264;
        case 0x2a1278u: goto label_2a1278;
        case 0x2a1284u: goto label_2a1284;
        case 0x2a133cu: goto label_2a133c;
        case 0x2a1378u: goto label_2a1378;
        case 0x2a13b8u: goto label_2a13b8;
        case 0x2a1404u: goto label_2a1404;
        case 0x2a1448u: goto label_2a1448;
        case 0x2a1480u: goto label_2a1480;
        case 0x2a1494u: goto label_2a1494;
        case 0x2a14acu: goto label_2a14ac;
        case 0x2a14c4u: goto label_2a14c4;
        case 0x2a14dcu: goto label_2a14dc;
        case 0x2a14f4u: goto label_2a14f4;
        case 0x2a1510u: goto label_2a1510;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1540u: goto label_2a1540;
        case 0x2a1550u: goto label_2a1550;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a15e8u: goto label_2a15e8;
        case 0x2a1634u: goto label_2a1634;
        default: break;
    }

    ctx->pc = 0x2a0960u;

    // 0x2a0960: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2a0960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2a0964: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2a0964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2a0968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a0968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a096c: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x2a096cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x2a0970: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0974: 0x8c9002d0  lw          $s0, 0x2D0($a0)
    ctx->pc = 0x2a0974u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x2a0978: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a097c: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x2a097cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2a0980: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2a0980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2a0984: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2a0984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0988: 0x10a602dc  beq         $a1, $a2, . + 4 + (0x2DC << 2)
    ctx->pc = 0x2A0988u;
    {
        const bool branch_taken_0x2a0988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2a0988) {
            ctx->pc = 0x2A14FCu;
            goto label_2a14fc;
        }
    }
    ctx->pc = 0x2A0990u;
    // 0x2a0990: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0994: 0x10a30190  beq         $a1, $v1, . + 4 + (0x190 << 2)
    ctx->pc = 0x2A0994u;
    {
        const bool branch_taken_0x2a0994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a0994) {
            ctx->pc = 0x2A0FD8u;
            goto label_2a0fd8;
        }
    }
    ctx->pc = 0x2A099Cu;
    // 0x2a099c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09a0: 0x10a40136  beq         $a1, $a0, . + 4 + (0x136 << 2)
    ctx->pc = 0x2A09A0u;
    {
        const bool branch_taken_0x2a09a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2a09a0) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A09A8u;
    // 0x2a09a8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A09A8u;
    {
        const bool branch_taken_0x2a09a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09a8) {
            ctx->pc = 0x2A09B8u;
            goto label_2a09b8;
        }
    }
    ctx->pc = 0x2A09B0u;
    // 0x2a09b0: 0x1000033c  b           . + 4 + (0x33C << 2)
    ctx->pc = 0x2A09B0u;
    {
        const bool branch_taken_0x2a09b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a09b0) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A09B8u;
label_2a09b8:
    // 0x2a09b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09bc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09c0: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x2a09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a09c4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09c8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a09c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a09ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a09d0: 0x24060420  addiu       $a2, $zero, 0x420
    ctx->pc = 0x2a09d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x2a09d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a09d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a09d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a09d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a09dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A09DCu;
    SET_GPR_U32(ctx, 31, 0x2A09E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A09DCu, 0x2A09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A09E4u;
label_2a09e4:
    // 0x2a09e4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a09e4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a09e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a09e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a09ec: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a09f0: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x2a09f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x2a09f4: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x2a09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
    // 0x2a09f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a09f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a09fc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a00: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x2a0a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x2a0a04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a0a04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a08: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a0c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2a0a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2a0a10: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0a14: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x2a0a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a0a18: 0x1460008f  bnez        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x2A0A18u;
    {
        const bool branch_taken_0x2a0a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0a18) {
            ctx->pc = 0x2A0C58u;
            goto label_2a0c58;
        }
    }
    ctx->pc = 0x2A0A20u;
    // 0x2a0a20: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2a0a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0a24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A24u;
    SET_GPR_U32(ctx, 31, 0x2A0A2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A24u, 0x2A0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A2Cu;
label_2a0a2c:
    // 0x2a0a2c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0a2cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0a30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a0a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0a34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A34u;
    SET_GPR_U32(ctx, 31, 0x2A0A3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A34u, 0x2A0A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A3Cu;
label_2a0a3c:
    // 0x2a0a3c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0a3cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0a40: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2a0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0a44: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0A44u;
    SET_GPR_U32(ctx, 31, 0x2A0A4Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0A44u, 0x2A0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0A4Cu;
label_2a0a4c:
    // 0x2a0a4c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a0a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a54: 0x0  nop
    ctx->pc = 0x2a0a54u;
    // NOP
    // 0x2a0a58: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2a0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2a0a5c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x2a0a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x2a0a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a64: 0x0  nop
    ctx->pc = 0x2a0a64u;
    // NOP
    // 0x2a0a68: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2a0a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2a0a6c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2a0a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a74: 0x0  nop
    ctx->pc = 0x2a0a74u;
    // NOP
    // 0x2a0a78: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2a0a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2a0a7c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2a0a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2a0a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a84: 0x0  nop
    ctx->pc = 0x2a0a84u;
    // NOP
    // 0x2a0a88: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2a0a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2a0a8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0a94: 0x0  nop
    ctx->pc = 0x2a0a94u;
    // NOP
    // 0x2a0a98: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2a0a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2a0a9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0aa4: 0x0  nop
    ctx->pc = 0x2a0aa4u;
    // NOP
    // 0x2a0aa8: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2a0aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2a0aac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a0aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a0ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0ab4: 0x0  nop
    ctx->pc = 0x2a0ab4u;
    // NOP
    // 0x2a0ab8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2a0ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a0abc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2a0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0ac4: 0x0  nop
    ctx->pc = 0x2a0ac4u;
    // NOP
    // 0x2a0ac8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2a0ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2a0acc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0ad0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0ad4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0ad8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0adc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0ae0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ae4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0ae8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0aec: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0af0: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0af4: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0af8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0afc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0AFCu;
    SET_GPR_U32(ctx, 31, 0x2A0B04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0AFCu, 0x2A0B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B04u;
label_2a0b04:
    // 0x2a0b04: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b0c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b10: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x2a0b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0b14: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a0b14u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b18: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b1c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a0b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0b20: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b24: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b28: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0b2c: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0b30: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0b30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0b34: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0B34u;
    SET_GPR_U32(ctx, 31, 0x2A0B3Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0B34u, 0x2A0B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B3Cu;
label_2a0b3c:
    // 0x2a0b3c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x2a0b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b40: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a0b40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b44: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b48: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a0b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a0b4c: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a0b4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b50: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x2a0b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b54: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0b54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0b58: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a0b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0b5c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b60: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b64: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0b68: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0b6c: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0b70: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0B70u;
    SET_GPR_U32(ctx, 31, 0x2A0B78u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0B70u, 0x2A0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0B78u;
label_2a0b78:
    // 0x2a0b78: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x2a0b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0b7c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a0b7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0b80: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0b84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a0b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a0b88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0b8c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0b90: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a0b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0b94: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2a0b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0b98: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x2a0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0b9c: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x2a0b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0ba0: 0x27a90080  addiu       $t1, $sp, 0x80
    ctx->pc = 0x2a0ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0ba4: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0ba8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0BA8u;
    SET_GPR_U32(ctx, 31, 0x2A0BB0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0BA8u, 0x2A0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0BB0u;
label_2a0bb0:
    // 0x2a0bb0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0bb8: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0bbc: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a0bc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0bc4: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0bc8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0bc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0bcc: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x2a0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a0bd0: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a0bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0bd4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2a0bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0bd8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a0bd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0bdc: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a0bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0be0: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a0be0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0be4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0be8: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a0be8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0bec: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0becu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0bf0: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2a0bf0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0bf4: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0bf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0bf8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0BF8u;
    SET_GPR_U32(ctx, 31, 0x2A0C00u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0BF8u, 0x2A0C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C00u;
label_2a0c00:
    // 0x2a0c00: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2a0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2a0c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0c08: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0c0c: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a0c10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0c14: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0c1c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x2a0c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0c20: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a0c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a0c24: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x2a0c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0c28: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a0c28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0c2c: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a0c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0c30: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x2a0c30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0c34: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0c38: 0x71204628  paddub      $t0, $t1, $zero
    ctx->pc = 0x2a0c38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0c3c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0c40: 0x71404e28  paddub      $t1, $t2, $zero
    ctx->pc = 0x2a0c40u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0c44: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2a0c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a0c48: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0C48u;
    SET_GPR_U32(ctx, 31, 0x2A0C50u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0C48u, 0x2A0C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C50u;
label_2a0c50:
    // 0x2a0c50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2A0C50u;
    {
        const bool branch_taken_0x2a0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0c50) {
            ctx->pc = 0x2A0CD8u;
            goto label_2a0cd8;
        }
    }
    ctx->pc = 0x2A0C58u;
label_2a0c58:
    // 0x2a0c58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2a0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c5c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A0C5Cu;
    SET_GPR_U32(ctx, 31, 0x2A0C64u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A0C5Cu, 0x2A0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C64u;
label_2a0c64:
    // 0x2a0c64: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c68: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a0c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a0c6c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c74: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0C74u;
    SET_GPR_U32(ctx, 31, 0x2A0C7Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0C74u, 0x2A0C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C7Cu;
label_2a0c7c:
    // 0x2a0c7c: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2a0c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0c80: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a0c80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0c84: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x2a0c84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a0c88: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x2a0c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0c8c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0c94: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0C94u;
    SET_GPR_U32(ctx, 31, 0x2A0C9Cu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0C94u, 0x2A0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0C9Cu;
label_2a0c9c:
    // 0x2a0c9c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ca0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a0ca4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2a0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0ca8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0cac: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0CACu;
    SET_GPR_U32(ctx, 31, 0x2A0CB4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0CACu, 0x2A0CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CB4u;
label_2a0cb4:
    // 0x2a0cb4: 0x8fa80128  lw          $t0, 0x128($sp)
    ctx->pc = 0x2a0cb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0cb8: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a0cb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0cbc: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x2a0cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0cc0: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a0cc0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a0cc4: 0x27aa00a0  addiu       $t2, $sp, 0xA0
    ctx->pc = 0x2a0cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2a0cc8: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2a0cc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a0ccc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0cd0: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A0CD0u;
    SET_GPR_U32(ctx, 31, 0x2A0CD8u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A0CD0u, 0x2A0CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CD8u;
label_2a0cd8:
    // 0x2a0cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0cdc: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ce0: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x2a0ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a0ce4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ce8: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x2a0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0cec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a0cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a0cf0: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a0cf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0cf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a0cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0cf8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0cfc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d00: 0xc4a10128  lwc1        $f1, 0x128($a1)
    ctx->pc = 0x2a0d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0d04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a0d08: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a0d08u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d0c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a0d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a0d10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a0d14: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a0d18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a0d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0d1c: 0x0  nop
    ctx->pc = 0x2a0d1cu;
    // NOP
    // 0x2a0d20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2a0d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2a0d24: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0d28: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0d28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0d2c: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2a0d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0d30: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a0d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a0d34: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A0D34u;
    SET_GPR_U32(ctx, 31, 0x2A0D3Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A0D3Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A0D3Cu) { return; }
    ctx->pc = 0x2A0D3Cu;
label_2a0d3c:
    // 0x2a0d3c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A0D3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0D44u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A0D3Cu, 0x2A0D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D44u;
label_2a0d44:
    // 0x2a0d44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a0d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a0d48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a0d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a0d4c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A0D4Cu;
    {
        const bool branch_taken_0x2a0d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0d4c) {
            ctx->pc = 0x2A0DE4u;
            goto label_2a0de4;
        }
    }
    ctx->pc = 0x2A0D54u;
    // 0x2a0d54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a0d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0d5c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0d64: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d68: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a0d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a0d6c: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
    // 0x2a0d70: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a0d70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0d74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0d78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0d7c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d80: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a0d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x2a0d84: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0d88: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x2a0d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0d8c: 0x3c08451c  lui         $t0, 0x451C
    ctx->pc = 0x2a0d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17692 << 16));
    // 0x2a0d90: 0x35074000  ori         $a3, $t0, 0x4000
    ctx->pc = 0x2a0d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16384);
    // 0x2a0d94: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a0d94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0d98: 0x0  nop
    ctx->pc = 0x2a0d98u;
    // NOP
    // 0x2a0d9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0d9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0da0: 0x0  nop
    ctx->pc = 0x2a0da0u;
    // NOP
    // 0x2a0da4: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x2A0DA4u;
    {
        const bool branch_taken_0x2a0da4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0da4) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0DACu;
    // 0x2a0dac: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0db0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x2a0db0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0db4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0db8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0db8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0dbc: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0dc0: 0xe5400180  swc1        $f0, 0x180($t2)
    ctx->pc = 0x2a0dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 384), bits); }
    // 0x2a0dc4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0dc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0dcc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0dd0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0dd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0dd4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0dd8: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a0dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a0ddc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2A0DDCu;
    {
        const bool branch_taken_0x2a0ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0ddc) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0DE4u;
label_2a0de4:
    // 0x2a0de4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x2a0de8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a0de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0dec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0df0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0df4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0df8: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2a0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2a0dfc: 0x3c05c248  lui         $a1, 0xC248
    ctx->pc = 0x2a0dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49736 << 16));
    // 0x2a0e00: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2a0e00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e04: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e0c: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e10: 0xe4c00188  swc1        $f0, 0x188($a2)
    ctx->pc = 0x2a0e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 392), bits); }
    // 0x2a0e14: 0x3c074352  lui         $a3, 0x4352
    ctx->pc = 0x2a0e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17234 << 16));
    // 0x2a0e18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a0e18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0e1c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e20: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2a0e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2a0e24: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e28: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x2a0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0e2c: 0x3c06451c  lui         $a2, 0x451C
    ctx->pc = 0x2a0e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17692 << 16));
    // 0x2a0e30: 0x34c54000  ori         $a1, $a2, 0x4000
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x2a0e34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a0e34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0e38: 0x0  nop
    ctx->pc = 0x2a0e38u;
    // NOP
    // 0x2a0e3c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2a0e3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a0e40: 0x0  nop
    ctx->pc = 0x2a0e40u;
    // NOP
    // 0x2a0e44: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x2A0E44u;
    {
        const bool branch_taken_0x2a0e44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a0e44) {
            ctx->pc = 0x2A0E7Cu;
            goto label_2a0e7c;
        }
    }
    ctx->pc = 0x2A0E4Cu;
    // 0x2a0e4c: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x2a0e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0e50: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2a0e50u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e54: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2a0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e5c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e60: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a0e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a0e64: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x2a0e68: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a0e68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a0e6c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2a0e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0e70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a0e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a0e74: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e78: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x2a0e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
label_2a0e7c:
    // 0x2a0e7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a0e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0e80: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e84: 0xa0e610a8  sb          $a2, 0x10A8($a3)
    ctx->pc = 0x2a0e84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4264), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a0e88: 0x3c043e8e  lui         $a0, 0x3E8E
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16014 << 16));
    // 0x2a0e8c: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a0e90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0e94: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e98: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a0e98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0e9c: 0x24a70120  addiu       $a3, $a1, 0x120
    ctx->pc = 0x2a0e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a0ea0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a0ea0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a0ea4: 0xc4cc00d4  lwc1        $f12, 0xD4($a2)
    ctx->pc = 0x2a0ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0ea8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2a0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2a0eac: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x2a0eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2a0eb0: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A0EB0u;
    SET_GPR_U32(ctx, 31, 0x2A0EB8u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A0EB0u, 0x2A0EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EB8u;
label_2a0eb8:
    // 0x2a0eb8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a0eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2a0ebc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ec0: 0xc4a100d4  lwc1        $f1, 0xD4($a1)
    ctx->pc = 0x2a0ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0ec4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a0ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a0ec8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a0ec8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a0ecc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A0ECCu;
    SET_GPR_U32(ctx, 31, 0x2A0ED4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A0ECCu, 0x2A0ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0ED4u;
label_2a0ed4:
    // 0x2a0ed4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ed8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a0ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a0edc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ee0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a0ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0ee4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A0EE4u;
    SET_GPR_U32(ctx, 31, 0x2A0EECu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A0EE4u, 0x2A0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EECu;
label_2a0eec:
    // 0x2a0eec: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0ef0: 0x908509db  lbu         $a1, 0x9DB($a0)
    ctx->pc = 0x2a0ef0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x2a0ef4: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a0ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a0ef8: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x2a0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x2a0efc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A0EFCu;
    {
        const bool branch_taken_0x2a0efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0efc) {
            ctx->pc = 0x2A0F44u;
            goto label_2a0f44;
        }
    }
    ctx->pc = 0x2A0F04u;
    // 0x2a0f04: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f08: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f0c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f10: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a0f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a0f14: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x2a0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a0f18: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a0f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a0f1c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A0F1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F24u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A0F1Cu, 0x2A0F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F24u;
label_2a0f24:
    // 0x2a0f24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a0f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f28: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f2c: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a0f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a0f30: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a0f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a0f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a0f38: 0x0  nop
    ctx->pc = 0x2a0f38u;
    // NOP
    // 0x2a0f3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a0f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a0f40: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a0f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
label_2a0f44:
    // 0x2a0f44: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a0f48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a0f4c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A0F4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0F54u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A0F4Cu, 0x2A0F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F54u;
label_2a0f54:
    // 0x2a0f54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0f54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f58: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f5c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a0f5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a0f60: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A0F60u;
    SET_GPR_U32(ctx, 31, 0x2A0F68u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A0F60u, 0x2A0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F68u;
label_2a0f68:
    // 0x2a0f68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a0f68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a0f6c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f70: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A0F70u;
    SET_GPR_U32(ctx, 31, 0x2A0F78u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A0F70u, 0x2A0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F78u;
label_2a0f78:
    // 0x2a0f78: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f7c: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2a0f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a0f80: 0x108001c8  beqz        $a0, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2A0F80u;
    {
        const bool branch_taken_0x2a0f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f80) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A0F88u;
    // 0x2a0f88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0f8c: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f90: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2a0f90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a0f94: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f98: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0f9c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a0f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a0fa0: 0x24060421  addiu       $a2, $zero, 0x421
    ctx->pc = 0x2a0fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1057));
    // 0x2a0fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0fa8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a0fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a0fac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A0FACu;
    SET_GPR_U32(ctx, 31, 0x2A0FB4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A0FACu, 0x2A0FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FB4u;
label_2a0fb4:
    // 0x2a0fb4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fb8: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x2a0fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0fbc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fc0: 0xa460127e  sh          $zero, 0x127E($v1)
    ctx->pc = 0x2a0fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a0fc4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2a0fc8: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fcc: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2a0fccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a0fd0: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x2A0FD0u;
    {
        const bool branch_taken_0x2a0fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0fd0) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A0FD8u;
label_2a0fd8:
    // 0x2a0fd8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a0fdc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a0fe0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2a0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2a0fe4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2a0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2a0fe8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a0fec: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2a0fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2a0ff0: 0x3c033e8e  lui         $v1, 0x3E8E
    ctx->pc = 0x2a0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
    // 0x2a0ff4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x2a0ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
    // 0x2a0ff8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a0ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0ffc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1000: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1004: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1008: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a100c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2a100cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x2a1010: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x2a1014: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1014u;
    SET_GPR_U32(ctx, 31, 0x2A101Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1014u, 0x2A101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A101Cu;
label_2a101c:
    // 0x2a101c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2a1020: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1024: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a1024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1028: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2a1028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a102c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a102cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1030: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1030u;
    SET_GPR_U32(ctx, 31, 0x2A1038u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1030u, 0x2A1038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1038u;
label_2a1038:
    // 0x2a1038: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a103c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a103cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a1040: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1044: 0xc4810184  lwc1        $f1, 0x184($a0)
    ctx->pc = 0x2a1044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1048: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x2a104c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a104cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1050: 0x0  nop
    ctx->pc = 0x2a1050u;
    // NOP
    // 0x2a1054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2a1054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a1058: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2a1058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2a105c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a105cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1060: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1064: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1064u;
    SET_GPR_U32(ctx, 31, 0x2A106Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1064u, 0x2A106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A106Cu;
label_2a106c:
    // 0x2a106c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a106cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1070: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x2a1070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1074: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1078: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a107c: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1080: 0x24660180  addiu       $a2, $v1, 0x180
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x2a1084: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A1084u;
    SET_GPR_U32(ctx, 31, 0x2A108Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A1084u, 0x2A108Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A108Cu;
label_2a108c:
    // 0x2a108c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a108cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1090: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1094: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1094u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1098: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1098u;
    SET_GPR_U32(ctx, 31, 0x2A10A0u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1098u, 0x2A10A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10A0u;
label_2a10a0:
    // 0x2a10a0: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10a4: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A10A4u;
    SET_GPR_U32(ctx, 31, 0x2A10ACu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A10A4u, 0x2A10ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10ACu;
label_2a10ac:
    // 0x2a10ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a10acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10b0: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A10B0u;
    SET_GPR_U32(ctx, 31, 0x2A10B8u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A10B0u, 0x2A10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10B8u;
label_2a10b8:
    // 0x2a10b8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a10b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a10bc: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a10bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10c0: 0x84c7127c  lh          $a3, 0x127C($a2)
    ctx->pc = 0x2a10c0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4732)));
    // 0x2a10c4: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x2a10c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2a10c8: 0xa4c8127c  sh          $t0, 0x127C($a2)
    ctx->pc = 0x2a10c8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4732), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a10cc: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10d0: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x2a10d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a10d4: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2a10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x2a10d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a10d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a10dc: 0x0  nop
    ctx->pc = 0x2a10dcu;
    // NOP
    // 0x2a10e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a10e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a10e4: 0x0  nop
    ctx->pc = 0x2a10e4u;
    // NOP
    // 0x2a10e8: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x2A10E8u;
    {
        const bool branch_taken_0x2a10e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a10e8) {
            ctx->pc = 0x2A11ECu;
            goto label_2a11ec;
        }
    }
    ctx->pc = 0x2A10F0u;
    // 0x2a10f0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a10f4: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x2a10f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a10f8: 0x3c03442f  lui         $v1, 0x442F
    ctx->pc = 0x2a10f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17455 << 16));
    // 0x2a10fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a10fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1100: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a1100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a1104: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2a1104u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1108: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2a1108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a110c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2a110cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1110: 0x0  nop
    ctx->pc = 0x2a1110u;
    // NOP
    // 0x2a1114: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x2A1114u;
    {
        const bool branch_taken_0x2a1114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1114) {
            ctx->pc = 0x2A11ECu;
            goto label_2a11ec;
        }
    }
    ctx->pc = 0x2A111Cu;
    // 0x2a111c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1120: 0x8463127e  lh          $v1, 0x127E($v1)
    ctx->pc = 0x2a1120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4734)));
    // 0x2a1124: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2a1124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1128: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2a1128u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2a112c: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2a112cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a1130: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x2A1130u;
    {
        const bool branch_taken_0x2a1130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1130) {
            ctx->pc = 0x2A11ECu;
            goto label_2a11ec;
        }
    }
    ctx->pc = 0x2A1138u;
    // 0x2a1138: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a113c: 0x8483127c  lh          $v1, 0x127C($a0)
    ctx->pc = 0x2a113cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4732)));
    // 0x2a1140: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x2a1140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2a1144: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2a1144u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2a1148: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2a1148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2a114c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A114Cu;
    {
        const bool branch_taken_0x2a114c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a114c) {
            ctx->pc = 0x2A11ECu;
            goto label_2a11ec;
        }
    }
    ctx->pc = 0x2A1154u;
    // 0x2a1154: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a1154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a1158: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A1158u;
    SET_GPR_U32(ctx, 31, 0x2A1160u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A1158u, 0x2A1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1160u;
label_2a1160:
    // 0x2a1160: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1164: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2a1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a1168: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a1168u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a116c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2a116cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a1170: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2a1170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2a1174: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2a1174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2a1178: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2a1178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2a117c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a117cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1180: 0x0  nop
    ctx->pc = 0x2a1180u;
    // NOP
    // 0x2a1184: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a1184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a1188: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a118c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a118cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1190: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a1190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a1194: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a1194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1198: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a1198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a119c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a119cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a11a0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x2a11a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a11a4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a11a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a11a8: 0x34a60007  ori         $a2, $a1, 0x7
    ctx->pc = 0x2a11a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x2a11ac: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a11acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11b0: 0x8ce80130  lw          $t0, 0x130($a3)
    ctx->pc = 0x2a11b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x2a11b4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2a11b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a11b8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2a11b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a11bc: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x2a11bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a11c0: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x2a11c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a11c4: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2a11c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a11c8: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x2a11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
    // 0x2a11cc: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a11ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a11d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a11d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a11d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A11D4u;
    SET_GPR_U32(ctx, 31, 0x2A11DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A11D4u, 0x2A11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A11DCu;
label_2a11dc:
    // 0x2a11dc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a11dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11e0: 0x84a3127e  lh          $v1, 0x127E($a1)
    ctx->pc = 0x2a11e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x2a11e4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2a11e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a11e8: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x2a11e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
label_2a11ec:
    // 0x2a11ec: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a11ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11f0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a11f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a11f4: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x2a11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a11f8: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x2a11f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a11fc: 0xc4e00124  lwc1        $f0, 0x124($a3)
    ctx->pc = 0x2a11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1200: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2a1200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a1204: 0x0  nop
    ctx->pc = 0x2a1204u;
    // NOP
    // 0x2a1208: 0x45000126  bc1f        . + 4 + (0x126 << 2)
    ctx->pc = 0x2A1208u;
    {
        const bool branch_taken_0x2a1208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a1208) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A1210u;
    // 0x2a1210: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1214: 0x8fa90128  lw          $t1, 0x128($sp)
    ctx->pc = 0x2a1214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1218: 0xa1280002  sb          $t0, 0x2($t1)
    ctx->pc = 0x2a1218u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a121c: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x2a121cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1220: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1224: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a1224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1228: 0x8d450368  lw          $a1, 0x368($t2)
    ctx->pc = 0x2a1228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 872)));
    // 0x2a122c: 0x24060214  addiu       $a2, $zero, 0x214
    ctx->pc = 0x2a122cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
    // 0x2a1230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a1230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1234: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a1234u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a1238: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A1238u;
    SET_GPR_U32(ctx, 31, 0x2A1240u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A1238u, 0x2A1240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1240u;
label_2a1240:
    // 0x2a1240: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a1240u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1244: 0x8fa60128  lw          $a2, 0x128($sp)
    ctx->pc = 0x2a1244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1248: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x2a1248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2a124c: 0x14e0008e  bnez        $a3, . + 4 + (0x8E << 2)
    ctx->pc = 0x2A124Cu;
    {
        const bool branch_taken_0x2a124c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a124c) {
            ctx->pc = 0x2A1488u;
            goto label_2a1488;
        }
    }
    ctx->pc = 0x2A1254u;
    // 0x2a1254: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2a1254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1258: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x2a1258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a125c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A125Cu;
    SET_GPR_U32(ctx, 31, 0x2A1264u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A125Cu, 0x2A1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1264u;
label_2a1264:
    // 0x2a1264: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a1264u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1268: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x2a1268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a126c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x2a126cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a1270: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A1270u;
    SET_GPR_U32(ctx, 31, 0x2A1278u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A1270u, 0x2A1278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1278u;
label_2a1278:
    // 0x2a1278: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2a1278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a127c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A127Cu;
    SET_GPR_U32(ctx, 31, 0x2A1284u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A127Cu, 0x2A1284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1284u;
label_2a1284:
    // 0x2a1284: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2a1284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2a1288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a128c: 0x0  nop
    ctx->pc = 0x2a128cu;
    // NOP
    // 0x2a1290: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x2a1290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2a1294: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x2a1294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x2a1298: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a1298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a129c: 0x0  nop
    ctx->pc = 0x2a129cu;
    // NOP
    // 0x2a12a0: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x2a12a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x2a12a4: 0x3c054180  lui         $a1, 0x4180
    ctx->pc = 0x2a12a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16768 << 16));
    // 0x2a12a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a12a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12ac: 0x0  nop
    ctx->pc = 0x2a12acu;
    // NOP
    // 0x2a12b0: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x2a12b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2a12b4: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2a12b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
    // 0x2a12b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a12b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12bc: 0x0  nop
    ctx->pc = 0x2a12bcu;
    // NOP
    // 0x2a12c0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2a12c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2a12c4: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a12c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a12c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12cc: 0x0  nop
    ctx->pc = 0x2a12ccu;
    // NOP
    // 0x2a12d0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2a12d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2a12d4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x2a12d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12d8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2a12d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12dc: 0x0  nop
    ctx->pc = 0x2a12dcu;
    // NOP
    // 0x2a12e0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2a12e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2a12e4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x2a12e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12e8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x2a12e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12ec: 0x0  nop
    ctx->pc = 0x2a12ecu;
    // NOP
    // 0x2a12f0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2a12f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2a12f4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x2a12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x2a12f8: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a12f8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a12fc: 0x0  nop
    ctx->pc = 0x2a12fcu;
    // NOP
    // 0x2a1300: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a1300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a1304: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1308: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a130c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a130cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1310: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a1310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1314: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1318: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a131c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a131cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a1320: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1324: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a1328: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a1328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a132c: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a132cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1330: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a1330u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1334: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1334u;
    SET_GPR_U32(ctx, 31, 0x2A133Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1334u, 0x2A133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A133Cu;
label_2a133c:
    // 0x2a133c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a133cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1340: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1348: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a134c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a134cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1350: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1354: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1358: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a1358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a135c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a135cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1360: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1360u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a1364: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a1364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1368: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a1368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a136c: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a136cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1370: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1370u;
    SET_GPR_U32(ctx, 31, 0x2A1378u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1370u, 0x2A1378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1378u;
label_2a1378:
    // 0x2a1378: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a1378u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a137c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a137cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a1380: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a1380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1384: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1388: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a1388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a138c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a138cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1390: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1394: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a1394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a1398: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a139c: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a139cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a13a0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2a13a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a13a4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2a13a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13a8: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a13a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a13ac: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a13acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a13b0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A13B0u;
    SET_GPR_U32(ctx, 31, 0x2A13B8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A13B0u, 0x2A13B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A13B8u;
label_2a13b8:
    // 0x2a13b8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a13b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13bc: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x2a13bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x2a13c0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2a13c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a13c4: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a13c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a13c8: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a13c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a13cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a13ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a13d0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a13d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a13d4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a13d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a13d8: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x2a13d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a13dc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a13dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a13e0: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x2a13e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a13e4: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2a13e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a13e8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2a13e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a13ec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a13ecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a13f0: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a13f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a13f4: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a13f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a13f8: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a13f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a13fc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A13FCu;
    SET_GPR_U32(ctx, 31, 0x2A1404u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A13FCu, 0x2A1404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1404u;
label_2a1404:
    // 0x2a1404: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2a1404u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1408: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a1408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a140c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1410: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1414: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x2a1414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1418: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2a1418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a141c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a141cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1420: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a1420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a1424: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1428: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a142c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a142cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2a1430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1434: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2a1434u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1438: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2a1438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a143c: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2a143cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1440: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1440u;
    SET_GPR_U32(ctx, 31, 0x2A1448u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1440u, 0x2A1448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1448u;
label_2a1448:
    // 0x2a1448: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2a1448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2a144c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a144cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a1450: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a1454: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a1454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a1458: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a145c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a145cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1460: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a1460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a1464: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2a1464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2a1468: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2a1468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2a146c: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x2a146cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2a1470: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2a1470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2a1474: 0x27aa00f0  addiu       $t2, $sp, 0xF0
    ctx->pc = 0x2a1474u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a1478: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A1478u;
    SET_GPR_U32(ctx, 31, 0x2A1480u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A1478u, 0x2A1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1480u;
label_2a1480:
    // 0x2a1480: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2A1480u;
    {
        const bool branch_taken_0x2a1480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1480) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A1488u;
label_2a1488:
    // 0x2a1488: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2a1488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a148c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A148Cu;
    SET_GPR_U32(ctx, 31, 0x2A1494u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A148Cu, 0x2A1494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1494u;
label_2a1494:
    // 0x2a1494: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1498: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a1498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a149c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14a4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14A4u;
    SET_GPR_U32(ctx, 31, 0x2A14ACu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14A4u, 0x2A14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14ACu;
label_2a14ac:
    // 0x2a14ac: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14b0: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2a14b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a14b4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14bc: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14BCu;
    SET_GPR_U32(ctx, 31, 0x2A14C4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14BCu, 0x2A14C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14C4u;
label_2a14c4:
    // 0x2a14c4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14c8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a14c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a14cc: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14d4: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14D4u;
    SET_GPR_U32(ctx, 31, 0x2A14DCu);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14D4u, 0x2A14DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14DCu;
label_2a14dc:
    // 0x2a14dc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a14dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a14e0: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a14e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2a14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2a14e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a14e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a14ec: 0xc086b14  jal         func_21AC50
    ctx->pc = 0x2A14ECu;
    SET_GPR_U32(ctx, 31, 0x2A14F4u);
    ctx->pc = 0x21AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AC50u, 0x2A14ECu, 0x2A14F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A14F4u;
label_2a14f4:
    // 0x2a14f4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2A14F4u;
    {
        const bool branch_taken_0x2a14f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a14f4) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A14FCu;
label_2a14fc:
    // 0x2a14fc: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a14fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1500: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a1500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a1504: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a1504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a1508: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A1508u;
    SET_GPR_U32(ctx, 31, 0x2A1510u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A1508u, 0x2A1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1510u;
label_2a1510:
    // 0x2a1510: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1514: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a1514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1518: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a151c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1520: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x2a1520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x2a1524: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a1524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a1528: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A1528u;
    SET_GPR_U32(ctx, 31, 0x2A1530u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A1528u, 0x2A1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1530u;
label_2a1530:
    // 0x2a1530: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1534: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a1534u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a1538: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A1538u;
    SET_GPR_U32(ctx, 31, 0x2A1540u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A1538u, 0x2A1540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1540u;
label_2a1540:
    // 0x2a1540: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1544: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a1544u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a1548: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A1548u;
    SET_GPR_U32(ctx, 31, 0x2A1550u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A1548u, 0x2A1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1550u;
label_2a1550:
    // 0x2a1550: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a1550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1554: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a1554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1558: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a1558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a155c: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A155Cu;
    SET_GPR_U32(ctx, 31, 0x2A1564u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A155Cu, 0x2A1564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1564u;
label_2a1564:
    // 0x2a1564: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2a1564u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a1568: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2a1568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a156c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2a156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2a1570: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x2a1570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a1574: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2a1574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1578: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a1578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a157c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a157cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a1580: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a1580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a1584: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1588: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2a1588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2a158c: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a1590: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a1590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1594: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a1594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a1598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a159c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a159cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a15a0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15a4: 0x906409e7  lbu         $a0, 0x9E7($v1)
    ctx->pc = 0x2a15a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2a15a8: 0x1080003e  beqz        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2A15A8u;
    {
        const bool branch_taken_0x2a15a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15a8) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A15B0u;
    // 0x2a15b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a15b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a15b4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a15b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15b8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2a15b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a15bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a15c0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15c4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a15c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a15c8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15cc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2a15ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a15d0: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15d4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2a15d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a15d8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a15d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a15dc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a15dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a15e0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A15E0u;
    SET_GPR_U32(ctx, 31, 0x2A15E8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A15E0u, 0x2A15E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A15E8u;
label_2a15e8:
    // 0x2a15e8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a15e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a15ec: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x2a15ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2a15f0: 0x30c70001  andi        $a3, $a2, 0x1
    ctx->pc = 0x2a15f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x2a15f4: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x2A15F4u;
    {
        const bool branch_taken_0x2a15f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a15f4) {
            ctx->pc = 0x2A162Cu;
            goto label_2a162c;
        }
    }
    ctx->pc = 0x2A15FCu;
    // 0x2a15fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2a15fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1600: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1604: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x2a1604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2a1608: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2a1608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a160c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a160cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1610: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2a1610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a1614: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1618: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a1618u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a161c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a161cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1620: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2a1620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1624: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2a1624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1628: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a1628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2a162c:
    // 0x2a162c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2A162Cu;
    SET_GPR_U32(ctx, 31, 0x2A1634u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2A162Cu, 0x2A1634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1634u;
label_2a1634:
    // 0x2a1634: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a1634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a1638: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x2a1638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2a163c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1640: 0x14830018  bne         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2A1640u;
    {
        const bool branch_taken_0x2a1640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1640) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A1648u;
    // 0x2a1648: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a1648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a164c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2a164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a1650: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2a1650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a1654: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x2a1654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2a1658: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A1658u;
    {
        const bool branch_taken_0x2a1658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1658) {
            ctx->pc = 0x2A16A4u;
            goto label_2a16a4;
        }
    }
    ctx->pc = 0x2A1660u;
    // 0x2a1660: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1664: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x2a1664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2a1668: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2a1668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2a166c: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x2a166cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2a1670: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2a1670u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2a1674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a1674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a1678: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a167c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2a167cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a1680: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2a1680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1684: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a1684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1688: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x2a1688u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a168c: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2a168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1690: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x2a1690u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1694: 0x8fb00128  lw          $s0, 0x128($sp)
    ctx->pc = 0x2a1694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a1698: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2a1698u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a169c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2a169cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2a16a0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a16a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2a16a4:
    // 0x2a16a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2a16a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a16a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a16a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a16ac: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x2a16acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2a16b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A16B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A16B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A16B8u;
}
