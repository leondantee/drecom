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

// Function: entry_002a14fc
// Address: 0x2a14fc - 0x2a162c
void entry_002a14fc_0x2a14fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a14fc_0x2a14fc");
#endif

    switch (ctx->pc) {
        case 0x2a1510u: goto label_2a1510;
        case 0x2a1530u: goto label_2a1530;
        case 0x2a1540u: goto label_2a1540;
        case 0x2a1550u: goto label_2a1550;
        case 0x2a1564u: goto label_2a1564;
        case 0x2a15e8u: goto label_2a15e8;
        default: break;
    }

    ctx->pc = 0x2a14fcu;

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
            return;
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
            return;
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
    ctx->pc = 0x2a162cu;
}
