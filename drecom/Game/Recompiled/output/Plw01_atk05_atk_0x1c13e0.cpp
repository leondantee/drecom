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

// Function: Plw01_atk05_atk
// Address: 0x1c13e0 - 0x1c1650
void Plw01_atk05_atk_0x1c13e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_atk05_atk_0x1c13e0");
#endif

    switch (ctx->pc) {
        case 0x1c1460u: goto label_1c1460;
        case 0x1c1478u: goto label_1c1478;
        case 0x1c14a0u: goto label_1c14a0;
        case 0x1c14b8u: goto label_1c14b8;
        case 0x1c1510u: goto label_1c1510;
        case 0x1c151cu: goto label_1c151c;
        case 0x1c1530u: goto label_1c1530;
        case 0x1c153cu: goto label_1c153c;
        case 0x1c15b4u: goto label_1c15b4;
        default: break;
    }

    ctx->pc = 0x1c13e0u;

    // 0x1c13e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c13e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c13e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1c13e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c13e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c13ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1c13f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1c13f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1c13f4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x1c13f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1c13f8: 0x3c033007  lui         $v1, 0x3007
    ctx->pc = 0x1c13f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12295 << 16));
    // 0x1c13fc: 0x3464fffe  ori         $a0, $v1, 0xFFFE
    ctx->pc = 0x1c13fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1c1400: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1404: 0xfc640a08  sd          $a0, 0xA08($v1)
    ctx->pc = 0x1c1404u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 2568), GPR_U64(ctx, 4));
    // 0x1c1408: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c140c: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1c140cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c1410: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1c1410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1418: 0x1083002e  beq         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C1418u;
    {
        const bool branch_taken_0x1c1418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1418) {
            ctx->pc = 0x1C14D4u;
            goto label_1c14d4;
        }
    }
    ctx->pc = 0x1C1420u;
    // 0x1c1420: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C1420u;
    {
        const bool branch_taken_0x1c1420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1420) {
            ctx->pc = 0x1C1430u;
            goto label_1c1430;
        }
    }
    ctx->pc = 0x1C1428u;
    // 0x1c1428: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x1C1428u;
    {
        const bool branch_taken_0x1c1428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1428) {
            ctx->pc = 0x1C163Cu;
            goto label_1c163c;
        }
    }
    ctx->pc = 0x1C1430u;
label_1c1430:
    // 0x1c1430: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1434: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c1434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c1438: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1438u;
    {
        const bool branch_taken_0x1c1438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1438) {
            ctx->pc = 0x1C1480u;
            goto label_1c1480;
        }
    }
    ctx->pc = 0x1C1440u;
    // 0x1c1440: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1444: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1448: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c144c: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x1c144cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c1450: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1454: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1458: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1458u;
    SET_GPR_U32(ctx, 31, 0x1C1460u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1458u, 0x1C1460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1460u;
label_1c1460:
    // 0x1c1460: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1464: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c1464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c1468: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c146c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c146cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c1470: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C1470u;
    SET_GPR_U32(ctx, 31, 0x1C1478u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C1470u, 0x1C1478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1478u;
label_1c1478:
    // 0x1c1478: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C1478u;
    {
        const bool branch_taken_0x1c1478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1478) {
            ctx->pc = 0x1C14B8u;
            goto label_1c14b8;
        }
    }
    ctx->pc = 0x1C1480u;
label_1c1480:
    // 0x1c1480: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1484: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c1484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1488: 0x8c451364  lw          $a1, 0x1364($v0)
    ctx->pc = 0x1c1488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c148c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1c1490: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c1490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1494: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c1494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c1498: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x1C1498u;
    SET_GPR_U32(ctx, 31, 0x1C14A0u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x1C1498u, 0x1C14A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14A0u;
label_1c14a0:
    // 0x1c14a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c14a4: 0x8c441364  lw          $a0, 0x1364($v0)
    ctx->pc = 0x1c14a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4964)));
    // 0x1c14a8: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1c14a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1c14ac: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x1c14acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1c14b0: 0xc0968ec  jal         func_25A3B0
    ctx->pc = 0x1C14B0u;
    SET_GPR_U32(ctx, 31, 0x1C14B8u);
    ctx->pc = 0x25A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3B0u, 0x1C14B0u, 0x1C14B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C14B8u;
label_1c14b8:
    // 0x1c14b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c14bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c14bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c14c0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1c14c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c14c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c14c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c14c8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1c14c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1c14cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c14d0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1c14d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1c14d4:
    // 0x1c14d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c14d8: 0x9042107b  lbu         $v0, 0x107B($v0)
    ctx->pc = 0x1c14d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4219)));
    // 0x1c14dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c14dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c14e0: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x1c14e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x1c14e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C14E4u;
    {
        const bool branch_taken_0x1c14e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c14e4) {
            ctx->pc = 0x1C1500u;
            goto label_1c1500;
        }
    }
    ctx->pc = 0x1C14ECu;
    // 0x1c14ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c14ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c14f0: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1c14f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1c14f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1c14f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1c14f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c14f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c14fc: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1c14fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
label_1c1500:
    // 0x1c1500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1508: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C1508u;
    SET_GPR_U32(ctx, 31, 0x1C1510u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C1508u, 0x1C1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1510u;
label_1c1510:
    // 0x1c1510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1514: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1514u;
    SET_GPR_U32(ctx, 31, 0x1C151Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1514u, 0x1C151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C151Cu;
label_1c151c:
    // 0x1c151c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c151cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1528: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1528u;
    SET_GPR_U32(ctx, 31, 0x1C1530u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1528u, 0x1C1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1534: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1534u;
    SET_GPR_U32(ctx, 31, 0x1C153Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1534u, 0x1C153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C153Cu;
label_1c153c:
    // 0x1c153c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1540: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c1540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c1544: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c1544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1548: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c154c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C154Cu;
    {
        const bool branch_taken_0x1c154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c154c) {
            ctx->pc = 0x1C15BCu;
            goto label_1c15bc;
        }
    }
    ctx->pc = 0x1C1554u;
    // 0x1c1554: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1558: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c155c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C155Cu;
    {
        const bool branch_taken_0x1c155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c155c) {
            ctx->pc = 0x1C15BCu;
            goto label_1c15bc;
        }
    }
    ctx->pc = 0x1C1564u;
    // 0x1c1564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1568: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c156c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1570: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1574: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1574u;
    {
        const bool branch_taken_0x1c1574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1574) {
            ctx->pc = 0x1C15BCu;
            goto label_1c15bc;
        }
    }
    ctx->pc = 0x1C157Cu;
    // 0x1c157c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1580: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c1580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c1584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1584u;
    {
        const bool branch_taken_0x1c1584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1584) {
            ctx->pc = 0x1C159Cu;
            goto label_1c159c;
        }
    }
    ctx->pc = 0x1C158Cu;
    // 0x1c158c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1590: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c1590u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1594u;
    {
        const bool branch_taken_0x1c1594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1594) {
            ctx->pc = 0x1C15A8u;
            goto label_1c15a8;
        }
    }
    ctx->pc = 0x1C159Cu;
label_1c159c:
    // 0x1c159c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c15a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15a4: 0xa04313f9  sb          $v1, 0x13F9($v0)
    ctx->pc = 0x1c15a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 3));
label_1c15a8:
    // 0x1c15a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15ac: 0xc06d2d8  jal         func_1B4B60
    ctx->pc = 0x1C15ACu;
    SET_GPR_U32(ctx, 31, 0x1C15B4u);
    ctx->pc = 0x1B4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4B60u, 0x1C15ACu, 0x1C15B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C15B4u;
label_1c15b4:
    // 0x1c15b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C15B4u;
    {
        const bool branch_taken_0x1c15b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15b4) {
            ctx->pc = 0x1C163Cu;
            goto label_1c163c;
        }
    }
    ctx->pc = 0x1C15BCu;
label_1c15bc:
    // 0x1c15bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15c0: 0x90631085  lbu         $v1, 0x1085($v1)
    ctx->pc = 0x1c15c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4229)));
    // 0x1c15c4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C15C4u;
    {
        const bool branch_taken_0x1c15c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15c4) {
            ctx->pc = 0x1C163Cu;
            goto label_1c163c;
        }
    }
    ctx->pc = 0x1C15CCu;
    // 0x1c15cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15d0: 0x906313f9  lbu         $v1, 0x13F9($v1)
    ctx->pc = 0x1c15d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5113)));
    // 0x1c15d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C15D4u;
    {
        const bool branch_taken_0x1c15d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15d4) {
            ctx->pc = 0x1C15ECu;
            goto label_1c15ec;
        }
    }
    ctx->pc = 0x1C15DCu;
    // 0x1c15dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15e0: 0xa06013f9  sb          $zero, 0x13F9($v1)
    ctx->pc = 0x1c15e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c15e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C15E4u;
    {
        const bool branch_taken_0x1c15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c15e4) {
            ctx->pc = 0x1C15F8u;
            goto label_1c15f8;
        }
    }
    ctx->pc = 0x1C15ECu;
label_1c15ec:
    // 0x1c15ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15f4: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1c15f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
label_1c15f8:
    // 0x1c15f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1600: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c1600u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c1604: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1608: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1c1608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1c160c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c160cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1610: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1610u;
    {
        const bool branch_taken_0x1c1610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1610) {
            ctx->pc = 0x1C1628u;
            goto label_1c1628;
        }
    }
    ctx->pc = 0x1C1618u;
    // 0x1c1618: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c161c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1c161cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1620u;
    {
        const bool branch_taken_0x1c1620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1620) {
            ctx->pc = 0x1C1634u;
            goto label_1c1634;
        }
    }
    ctx->pc = 0x1C1628u;
label_1c1628:
    // 0x1c1628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c1628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c162c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1630: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c1630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
label_1c1634:
    // 0x1c1634: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C1634u;
    {
        const bool branch_taken_0x1c1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1634) {
            ctx->pc = 0x1C163Cu;
            goto label_1c163c;
        }
    }
    ctx->pc = 0x1C163Cu;
label_1c163c:
    // 0x1c163c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c163cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1640: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1644: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c1648: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1650u;
}
