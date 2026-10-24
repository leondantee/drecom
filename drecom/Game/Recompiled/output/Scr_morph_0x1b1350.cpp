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

// Function: Scr_morph
// Address: 0x1b1350 - 0x1b1500
void Scr_morph_0x1b1350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_morph_0x1b1350");
#endif

    switch (ctx->pc) {
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1468u: goto label_1b1468;
        case 0x1b1480u: goto label_1b1480;
        default: break;
    }

    ctx->pc = 0x1b1350u;

    // 0x1b1350: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b1350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b1354: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b1354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b1358: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b1358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b135c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b135cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b1360: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b1360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b1364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1368: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b136c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1370: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b1370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1374: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1378: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b137c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1b137cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x1b1380: 0xa3a500c8  sb          $a1, 0xC8($sp)
    ctx->pc = 0x1b1380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b1384: 0xa3a600d0  sb          $a2, 0xD0($sp)
    ctx->pc = 0x1b1384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b1388: 0xe7ac00d8  swc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b1388u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1b138c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b1390: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b1390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b1394: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1b1394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x1b1398: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1b1398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1b139c: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x1b139cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b13a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b13a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b13a4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b13a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b13a8: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1b13a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b13ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b13acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b13b0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b13b4: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1b13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b13b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b13bc: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1b13bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1b13c0: 0x8fbe00ac  lw          $fp, 0xAC($sp)
    ctx->pc = 0x1b13c0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b13c4: 0x27d40004  addiu       $s4, $fp, 0x4
    ctx->pc = 0x1b13c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1b13c8: 0x93a300d0  lbu         $v1, 0xD0($sp)
    ctx->pc = 0x1b13c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1b13cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b13d0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b13d4: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b13d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b13d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b13dc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b13e0: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1b13e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b13e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b13e8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1b13ec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b13f0: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1b13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x1b13f4: 0x27d60004  addiu       $s6, $fp, 0x4
    ctx->pc = 0x1b13f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1b13f8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b13fc: 0x8c7702d0  lw          $s7, 0x2D0($v1)
    ctx->pc = 0x1b13fcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1b1400: 0x97c30002  lhu         $v1, 0x2($fp)
    ctx->pc = 0x1b1400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x1b1404: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b1404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b1408: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b1408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b140c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1410: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1b1410u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b1414: 0x2e3b821  addu        $s7, $s7, $v1
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b1418: 0x8ef50034  lw          $s5, 0x34($s7)
    ctx->pc = 0x1b1418u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 52)));
    // 0x1b141c: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1b141cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_1b1420:
    // 0x1b1420: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x1b1420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b1424: 0x3073ffff  andi        $s3, $v1, 0xFFFF
    ctx->pc = 0x1b1424u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1428: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x1b1428u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1b142c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b142cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1430: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b1430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1434: 0x3c38821  addu        $s1, $fp, $v1
    ctx->pc = 0x1b1434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1b1438: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1b1438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b143c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1440: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b1440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b1444: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1b1444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b1448: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1b1448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b144c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b144cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b1450: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b1450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b1454: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b1454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1458: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1b1458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1b145c: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x1b145cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b1460: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B1460u;
    {
        const bool branch_taken_0x1b1460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1460) {
            ctx->pc = 0x1B1490u;
            goto label_1b1490;
        }
    }
    ctx->pc = 0x1B1468u;
label_1b1468:
    // 0x1b1468: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b146c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b146cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b1470: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b1470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b1474: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b1474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1478: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 31, 0x1B1480u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B1478u, 0x1B1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b1484: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b1484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b1488: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b148c: 0x0  nop
    ctx->pc = 0x1b148cu;
    // NOP
label_1b1490:
    // 0x1b1490: 0x72601e28  paddub      $v1, $s3, $zero
    ctx->pc = 0x1b1490u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1b1494: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1b1494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b1498: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B1498u;
    {
        const bool branch_taken_0x1b1498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1498) {
            ctx->pc = 0x1B1468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1468;
        }
    }
    ctx->pc = 0x1B14A0u;
    // 0x1b14a0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1b14a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b14a4: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b14a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b14a8: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b14a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b14ac: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x1b14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1b14b0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b14b4: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1b14b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1b14b8: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x1b14b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x1b14bc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b14c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b14c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b14c4: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B14C4u;
    {
        const bool branch_taken_0x1b14c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b14c4) {
            ctx->pc = 0x1B1420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1420;
        }
    }
    ctx->pc = 0x1B14CCu;
    // 0x1b14cc: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b14ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b14d0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b14d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b14d4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b14d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b14d8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b14d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b14dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b14dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b14e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b14e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b14e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b14e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b14e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b14e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b14ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b14ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b14f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1b14f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b14f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B14F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B14F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1500u;
}
