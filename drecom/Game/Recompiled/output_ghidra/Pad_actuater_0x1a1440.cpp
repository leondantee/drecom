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

// Function: Pad_actuater
// Address: 0x1a1440 - 0x1a1570
void Pad_actuater_0x1a1440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pad_actuater_0x1a1440");
#endif

    switch (ctx->pc) {
        case 0x1a1488u: goto label_1a1488;
        case 0x1a14b0u: goto label_1a14b0;
        case 0x1a1504u: goto label_1a1504;
        case 0x1a1524u: goto label_1a1524;
        case 0x1a1558u: goto label_1a1558;
        default: break;
    }

    ctx->pc = 0x1a1440u;

    // 0x1a1440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1444: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1a1444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1a1448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a1448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a144c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a144cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a1450: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a1454: 0x24502540  addiu       $s0, $v0, 0x2540
    ctx->pc = 0x1a1454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9536));
    // 0x1a1458: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1a1458u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a145c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a145cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1460: 0xa0202530  sb          $zero, 0x2530($at)
    ctx->pc = 0x1a1460u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2530u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2530u, _value); } while (0);
    // 0x1a1464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1468: 0xa0202531  sb          $zero, 0x2531($at)
    ctx->pc = 0x1a1468u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D2531u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D2531u, _value); } while (0);
    // 0x1a146c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a146cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1470: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x1a1470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x1a1474: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a1474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a1478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1478u;
    {
        const bool branch_taken_0x1a1478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1478) {
            ctx->pc = 0x1A1490u;
            goto label_1a1490;
        }
    }
    ctx->pc = 0x1A1480u;
    // 0x1a1480: 0xc0685c8  jal         func_1A1720
    ctx->pc = 0x1A1480u;
    SET_GPR_U32(ctx, 31, 0x1A1488u);
    ctx->pc = 0x1A1720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1720u, 0x1A1480u, 0x1A1488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1488u;
label_1a1488:
    // 0x1a1488: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A1488u;
    {
        const bool branch_taken_0x1a1488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1488) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A1490u;
label_1a1490:
    // 0x1a1490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1494: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1a1498: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a149c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a14a0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A1540u;
            goto label_1a1540;
        }
    }
    ctx->pc = 0x1A14A8u;
    // 0x1a14a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A14A8u;
    {
        const bool branch_taken_0x1a14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a8) {
            ctx->pc = 0x1A1530u;
            goto label_1a1530;
        }
    }
    ctx->pc = 0x1A14B0u;
label_1a14b0:
    // 0x1a14b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a14b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a14b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a14b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a14b8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1a14b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1a14bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A14BCu;
    {
        const bool branch_taken_0x1a14bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14bc) {
            ctx->pc = 0x1A1528u;
            goto label_1a1528;
        }
    }
    ctx->pc = 0x1A14C4u;
    // 0x1a14c4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a14c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14c8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a14c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a14cc: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A14CCu;
    {
        const bool branch_taken_0x1a14cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a14cc) {
            ctx->pc = 0x1A14E8u;
            goto label_1a14e8;
        }
    }
    ctx->pc = 0x1A14D4u;
    // 0x1a14d4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1a14d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a14d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a14dc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x1a14dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a14e0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A14E0u;
    {
        const bool branch_taken_0x1a14e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14e0) {
            ctx->pc = 0x1A1528u;
            goto label_1a1528;
        }
    }
    ctx->pc = 0x1A14E8u;
label_1a14e8:
    // 0x1a14e8: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a14e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a14ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1a14ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a14f0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A14F0u;
    {
        const bool branch_taken_0x1a14f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a14f0) {
            ctx->pc = 0x1A1518u;
            goto label_1a1518;
        }
    }
    ctx->pc = 0x1A14F8u;
    // 0x1a14f8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a14f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a14fc: 0xc06855c  jal         func_1A1570
    ctx->pc = 0x1A14FCu;
    SET_GPR_U32(ctx, 31, 0x1A1504u);
    ctx->pc = 0x1A1570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1570u, 0x1A14FCu, 0x1A1504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1504u;
label_1a1504:
    // 0x1a1504: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x1a1504u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1a1508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a1508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a150c: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1a150cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a1510: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1510u;
    {
        const bool branch_taken_0x1a1510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1510) {
            ctx->pc = 0x1A1528u;
            goto label_1a1528;
        }
    }
    ctx->pc = 0x1A1518u;
label_1a1518:
    // 0x1a1518: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1a1518u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1a151c: 0xc0685c0  jal         func_1A1700
    ctx->pc = 0x1A151Cu;
    SET_GPR_U32(ctx, 31, 0x1A1524u);
    ctx->pc = 0x1A1700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1700u, 0x1A151Cu, 0x1A1524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1524u;
label_1a1524:
    // 0x1a1524: 0x0  nop
    ctx->pc = 0x1a1524u;
    // NOP
label_1a1528:
    // 0x1a1528: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a152c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a152cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a1530:
    // 0x1a1530: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x1a1530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1a1534: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1A1534u;
    {
        const bool branch_taken_0x1a1534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1534) {
            ctx->pc = 0x1A14B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a14b0;
        }
    }
    ctx->pc = 0x1A153Cu;
    // 0x1a153c: 0x0  nop
    ctx->pc = 0x1a153cu;
    // NOP
label_1a1540:
    // 0x1a1540: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1a1540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1544: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a1544u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1548: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a154c: 0x24462530  addiu       $a2, $v0, 0x2530
    ctx->pc = 0x1a154cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 9520));
    // 0x1a1550: 0xc043296  jal         func_10CA58
    ctx->pc = 0x1A1550u;
    SET_GPR_U32(ctx, 31, 0x1A1558u);
    ctx->pc = 0x10CA58u;
    {
        ctx->pc = 0x1A1558u;
        ps2_stubs::scePadSetActDirect(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1A1558u) { return; }
    ctx->pc = 0x1A1558u;
label_1a1558:
    // 0x1a1558: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1a1558u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a155c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a155cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1564: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1568: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1570u;
}
