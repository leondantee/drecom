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

// Function: Em01_R1_walk_h
// Address: 0x302500 - 0x30273c
void Em01_R1_walk_h_0x302500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01_R1_walk_h_0x302500");
#endif

    switch (ctx->pc) {
        case 0x30256cu: goto label_30256c;
        case 0x3025b0u: goto label_3025b0;
        case 0x3025c4u: goto label_3025c4;
        case 0x3025dcu: goto label_3025dc;
        case 0x3025e8u: goto label_3025e8;
        case 0x3025f8u: goto label_3025f8;
        case 0x302604u: goto label_302604;
        case 0x30265cu: goto label_30265c;
        case 0x302698u: goto label_302698;
        case 0x3026acu: goto label_3026ac;
        case 0x3026c4u: goto label_3026c4;
        case 0x3026d0u: goto label_3026d0;
        case 0x3026e0u: goto label_3026e0;
        case 0x3026ecu: goto label_3026ec;
        default: break;
    }

    ctx->pc = 0x302500u;

    // 0x302500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x302504: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x302504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x302508: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x302508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x30250c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30250cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302510: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x302510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302514: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x302514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x302518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x302518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30251c: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
    ctx->pc = 0x30251Cu;
    {
        const bool branch_taken_0x30251c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30251c) {
            ctx->pc = 0x30266Cu;
            goto label_30266c;
        }
    }
    ctx->pc = 0x302524u;
    // 0x302524: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x302524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x302528: 0x10830044  beq         $a0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x302528u;
    {
        const bool branch_taken_0x302528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302528) {
            ctx->pc = 0x30263Cu;
            goto label_30263c;
        }
    }
    ctx->pc = 0x302530u;
    // 0x302530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x302530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302534: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x302534u;
    {
        const bool branch_taken_0x302534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x302534) {
            ctx->pc = 0x302584u;
            goto label_302584;
        }
    }
    ctx->pc = 0x30253Cu;
    // 0x30253c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30253Cu;
    {
        const bool branch_taken_0x30253c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30253c) {
            ctx->pc = 0x30254Cu;
            goto label_30254c;
        }
    }
    ctx->pc = 0x302544u;
    // 0x302544: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x302544u;
    {
        const bool branch_taken_0x302544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302544) {
            ctx->pc = 0x30272Cu;
            goto label_30272c;
        }
    }
    ctx->pc = 0x30254Cu;
label_30254c:
    // 0x30254c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302550: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302554: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302558: 0x24065a0b  addiu       $a2, $zero, 0x5A0B
    ctx->pc = 0x302558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23051));
    // 0x30255c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30255cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302560: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302564: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302564u;
    SET_GPR_U32(ctx, 31, 0x30256Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302564u, 0x30256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30256Cu;
label_30256c:
    // 0x30256c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302570: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x302570u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x302574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302578: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30257c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30257cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302580: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_302584:
    // 0x302584: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302588: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30258c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30258cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302590: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x302590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x302594: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302598: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30259c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3025a0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x3025a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3025a4: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x3025a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x3025a8: 0xc05c848  jal         func_172120
    ctx->pc = 0x3025A8u;
    SET_GPR_U32(ctx, 31, 0x3025B0u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3025A8u, 0x3025B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025B0u;
label_3025b0:
    // 0x3025b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3025b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3025b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3025b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3025b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3025bc: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3025BCu;
    SET_GPR_U32(ctx, 31, 0x3025C4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3025BCu, 0x3025C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025C4u;
label_3025c4:
    // 0x3025c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3025c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025c8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3025c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3025cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3025d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3025d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3025D4u;
    SET_GPR_U32(ctx, 31, 0x3025DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3025D4u, 0x3025DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025DCu;
label_3025dc:
    // 0x3025dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3025E0u;
    SET_GPR_U32(ctx, 31, 0x3025E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3025E0u, 0x3025E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025E8u;
label_3025e8:
    // 0x3025e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3025ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3025f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3025F0u;
    SET_GPR_U32(ctx, 31, 0x3025F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3025F0u, 0x3025F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025F8u;
label_3025f8:
    // 0x3025f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3025f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3025fc: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3025FCu;
    SET_GPR_U32(ctx, 31, 0x302604u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3025FCu, 0x302604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302604u;
label_302604:
    // 0x302604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302608: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x302608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30260c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x30260Cu;
    {
        const bool branch_taken_0x30260c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30260c) {
            ctx->pc = 0x30272Cu;
            goto label_30272c;
        }
    }
    ctx->pc = 0x302614u;
    // 0x302614: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302618: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x302618u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x30261c: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x30261Cu;
    {
        const bool branch_taken_0x30261c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30261c) {
            ctx->pc = 0x30272Cu;
            goto label_30272c;
        }
    }
    ctx->pc = 0x302624u;
    // 0x302624: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302628: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x302628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x30262c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x302630: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x302630u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x302634: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x302634u;
    {
        const bool branch_taken_0x302634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302634) {
            ctx->pc = 0x30272Cu;
            goto label_30272c;
        }
    }
    ctx->pc = 0x30263Cu;
label_30263c:
    // 0x30263c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302640: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302644: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x302644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x302648: 0x24060547  addiu       $a2, $zero, 0x547
    ctx->pc = 0x302648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1351));
    // 0x30264c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30264cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302650: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x302650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x302654: 0xc0965d0  jal         func_259740
    ctx->pc = 0x302654u;
    SET_GPR_U32(ctx, 31, 0x30265Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x302654u, 0x30265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30265Cu;
label_30265c:
    // 0x30265c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302660: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x302660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x302664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302668: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x302668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30266c:
    // 0x30266c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x30266cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x302670: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x302670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x302674: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302678: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30267c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302680: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302684: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302688: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30268c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x302690: 0xc05c848  jal         func_172120
    ctx->pc = 0x302690u;
    SET_GPR_U32(ctx, 31, 0x302698u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302690u, 0x302698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302698u;
label_302698:
    // 0x302698: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30269c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x30269cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3026a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3026a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3026a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3026A4u;
    SET_GPR_U32(ctx, 31, 0x3026ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3026A4u, 0x3026ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026ACu;
label_3026ac:
    // 0x3026ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3026acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026b0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3026b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3026b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3026b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3026bc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3026BCu;
    SET_GPR_U32(ctx, 31, 0x3026C4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3026BCu, 0x3026C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026C4u;
label_3026c4:
    // 0x3026c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026c8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3026C8u;
    SET_GPR_U32(ctx, 31, 0x3026D0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3026C8u, 0x3026D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026D0u;
label_3026d0:
    // 0x3026d0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3026d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3026d8: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3026D8u;
    SET_GPR_U32(ctx, 31, 0x3026E0u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3026D8u, 0x3026E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026E0u;
label_3026e0:
    // 0x3026e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3026e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026e4: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x3026E4u;
    SET_GPR_U32(ctx, 31, 0x3026ECu);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x3026E4u, 0x3026ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3026ECu;
label_3026ec:
    // 0x3026ec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3026ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3026f0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3026f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3026f4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3026F4u;
    {
        const bool branch_taken_0x3026f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3026f4) {
            ctx->pc = 0x30272Cu;
            goto label_30272c;
        }
    }
    ctx->pc = 0x3026FCu;
    // 0x3026fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3026fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302700: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302704: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302704u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302708: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x302708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30270c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302710: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302710u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302714: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302718: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30271c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302720: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302724: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302728: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30272c:
    // 0x30272c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x30272cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302730: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x302730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x302734: 0x3e00008  jr          $ra
    ctx->pc = 0x302734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30273Cu;
}
