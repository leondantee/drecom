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

// Function: entry_0014353c
// Address: 0x14353c - 0x143828
void entry_0014353c_0x14353c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014353c_0x14353c");
#endif

    switch (ctx->pc) {
        case 0x143584u: goto label_143584;
        case 0x143598u: goto label_143598;
        case 0x1435b0u: goto label_1435b0;
        case 0x1435c4u: goto label_1435c4;
        case 0x1435d8u: goto label_1435d8;
        case 0x1435ecu: goto label_1435ec;
        case 0x143600u: goto label_143600;
        case 0x14361cu: goto label_14361c;
        case 0x143630u: goto label_143630;
        case 0x143644u: goto label_143644;
        case 0x14365cu: goto label_14365c;
        case 0x143670u: goto label_143670;
        case 0x143684u: goto label_143684;
        case 0x143698u: goto label_143698;
        case 0x1436a4u: goto label_1436a4;
        case 0x1436b4u: goto label_1436b4;
        case 0x1436c0u: goto label_1436c0;
        case 0x1436ccu: goto label_1436cc;
        case 0x14372cu: goto label_14372c;
        case 0x143748u: goto label_143748;
        case 0x143758u: goto label_143758;
        case 0x14376cu: goto label_14376c;
        case 0x143780u: goto label_143780;
        case 0x14379cu: goto label_14379c;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437e8u: goto label_1437e8;
        default: break;
    }

    ctx->pc = 0x14353cu;

    // 0x14353c: 0xa20013a7  sb          $zero, 0x13A7($s0)
    ctx->pc = 0x14353cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5031), (uint8_t)GPR_U32(ctx, 0));
    // 0x143540: 0xa60013a8  sh          $zero, 0x13A8($s0)
    ctx->pc = 0x143540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5032), (uint16_t)GPR_U32(ctx, 0));
    // 0x143544: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x143544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x143548: 0xa60213aa  sh          $v0, 0x13AA($s0)
    ctx->pc = 0x143548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5034), (uint16_t)GPR_U32(ctx, 2));
    // 0x14354c: 0xa60013ac  sh          $zero, 0x13AC($s0)
    ctx->pc = 0x14354cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5036), (uint16_t)GPR_U32(ctx, 0));
    // 0x143550: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x143550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x143554: 0xa60213ae  sh          $v0, 0x13AE($s0)
    ctx->pc = 0x143554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5038), (uint16_t)GPR_U32(ctx, 2));
    // 0x143558: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x143558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14355c: 0x24425200  addiu       $v0, $v0, 0x5200
    ctx->pc = 0x14355cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20992));
    // 0x143560: 0xae021228  sw          $v0, 0x1228($s0)
    ctx->pc = 0x143560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4648), GPR_U32(ctx, 2));
    // 0x143564: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x143568: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x143568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
    // 0x14356c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143570: 0xa2021219  sb          $v0, 0x1219($s0)
    ctx->pc = 0x143570u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x143574: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x143578: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14357c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14357Cu;
    SET_GPR_U32(ctx, 31, 0x143584u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14357Cu, 0x143584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143584u;
label_143584:
    // 0x143584: 0xae02131c  sw          $v0, 0x131C($s0)
    ctx->pc = 0x143584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4892), GPR_U32(ctx, 2));
    // 0x143588: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x143588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x14358c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14358cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143590: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143590u;
    SET_GPR_U32(ctx, 31, 0x143598u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143590u, 0x143598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143598u;
label_143598:
    // 0x143598: 0xae021320  sw          $v0, 0x1320($s0)
    ctx->pc = 0x143598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 2));
    // 0x14359c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x14359cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1435a0: 0x34448000  ori         $a0, $v0, 0x8000
    ctx->pc = 0x1435a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1435a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435a8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435A8u;
    SET_GPR_U32(ctx, 31, 0x1435B0u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435A8u, 0x1435B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435B0u;
label_1435b0:
    // 0x1435b0: 0xae021324  sw          $v0, 0x1324($s0)
    ctx->pc = 0x1435b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4900), GPR_U32(ctx, 2));
    // 0x1435b4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1435b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x1435b8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435bc: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435BCu;
    SET_GPR_U32(ctx, 31, 0x1435C4u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435BCu, 0x1435C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435C4u;
label_1435c4:
    // 0x1435c4: 0xae021328  sw          $v0, 0x1328($s0)
    ctx->pc = 0x1435c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4904), GPR_U32(ctx, 2));
    // 0x1435c8: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1435c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1435cc: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435d0: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435D0u;
    SET_GPR_U32(ctx, 31, 0x1435D8u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435D0u, 0x1435D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435D8u;
label_1435d8:
    // 0x1435d8: 0xae421244  sw          $v0, 0x1244($s2)
    ctx->pc = 0x1435d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4676), GPR_U32(ctx, 2));
    // 0x1435dc: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x1435e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435e4: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435E4u;
    SET_GPR_U32(ctx, 31, 0x1435ECu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435E4u, 0x1435ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1435ECu;
label_1435ec:
    // 0x1435ec: 0xae821240  sw          $v0, 0x1240($s4)
    ctx->pc = 0x1435ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4672), GPR_U32(ctx, 2));
    // 0x1435f0: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1435f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1435f4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1435f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1435f8: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x1435F8u;
    SET_GPR_U32(ctx, 31, 0x143600u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x1435F8u, 0x143600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143600u;
label_143600:
    // 0x143600: 0xae821244  sw          $v0, 0x1244($s4)
    ctx->pc = 0x143600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4676), GPR_U32(ctx, 2));
    // 0x143604: 0x8e821240  lw          $v0, 0x1240($s4)
    ctx->pc = 0x143604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4672)));
    // 0x143608: 0xaea21240  sw          $v0, 0x1240($s5)
    ctx->pc = 0x143608u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4672), GPR_U32(ctx, 2));
    // 0x14360c: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x14360cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143610: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143614: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143614u;
    SET_GPR_U32(ctx, 31, 0x14361Cu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143614u, 0x14361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14361Cu;
label_14361c:
    // 0x14361c: 0xaea21244  sw          $v0, 0x1244($s5)
    ctx->pc = 0x14361cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4676), GPR_U32(ctx, 2));
    // 0x143620: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x143624: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143628: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143628u;
    SET_GPR_U32(ctx, 31, 0x143630u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143628u, 0x143630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143630u;
label_143630:
    // 0x143630: 0xae221240  sw          $v0, 0x1240($s1)
    ctx->pc = 0x143630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4672), GPR_U32(ctx, 2));
    // 0x143634: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x143634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143638: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14363c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14363Cu;
    SET_GPR_U32(ctx, 31, 0x143644u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14363Cu, 0x143644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143644u;
label_143644:
    // 0x143644: 0xae221244  sw          $v0, 0x1244($s1)
    ctx->pc = 0x143644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4676), GPR_U32(ctx, 2));
    // 0x143648: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x143648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x14364c: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x14364cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x143650: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143654: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143654u;
    SET_GPR_U32(ctx, 31, 0x14365Cu);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143654u, 0x14365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14365Cu;
label_14365c:
    // 0x14365c: 0xae62131c  sw          $v0, 0x131C($s3)
    ctx->pc = 0x14365cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4892), GPR_U32(ctx, 2));
    // 0x143660: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x143660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x143664: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143668: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143668u;
    SET_GPR_U32(ctx, 31, 0x143670u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143668u, 0x143670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143670u;
label_143670:
    // 0x143670: 0xae621320  sw          $v0, 0x1320($s3)
    ctx->pc = 0x143670u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4896), GPR_U32(ctx, 2));
    // 0x143674: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x143674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x143678: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14367c: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x14367Cu;
    SET_GPR_U32(ctx, 31, 0x143684u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x14367Cu, 0x143684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143684u;
label_143684:
    // 0x143684: 0xae62138c  sw          $v0, 0x138C($s3)
    ctx->pc = 0x143684u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5004), GPR_U32(ctx, 2));
    // 0x143688: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x143688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x14368c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x14368cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x143690: 0xc0593a8  jal         func_164EA0
    ctx->pc = 0x143690u;
    SET_GPR_U32(ctx, 31, 0x143698u);
    ctx->pc = 0x164EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164EA0u, 0x143690u, 0x143698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143698u;
label_143698:
    // 0x143698: 0xae621390  sw          $v0, 0x1390($s3)
    ctx->pc = 0x143698u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5008), GPR_U32(ctx, 2));
    // 0x14369c: 0xc050e58  jal         func_143960
    ctx->pc = 0x14369Cu;
    SET_GPR_U32(ctx, 31, 0x1436A4u);
    ctx->pc = 0x143960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143960u, 0x14369Cu, 0x1436A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436A4u;
label_1436a4:
    // 0x1436a4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x1436a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x1436a8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1436a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1436ac: 0xc050ea4  jal         func_143A90
    ctx->pc = 0x1436ACu;
    SET_GPR_U32(ctx, 31, 0x1436B4u);
    ctx->pc = 0x143A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143A90u, 0x1436ACu, 0x1436B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436B4u;
label_1436b4:
    // 0x1436b4: 0x8e041330  lw          $a0, 0x1330($s0)
    ctx->pc = 0x1436b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x1436b8: 0xc09528c  jal         func_254A30
    ctx->pc = 0x1436B8u;
    SET_GPR_U32(ctx, 31, 0x1436C0u);
    ctx->pc = 0x254A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A30u, 0x1436B8u, 0x1436C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436C0u;
label_1436c0:
    // 0x1436c0: 0x8e041334  lw          $a0, 0x1334($s0)
    ctx->pc = 0x1436c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x1436c4: 0xc09528c  jal         func_254A30
    ctx->pc = 0x1436C4u;
    SET_GPR_U32(ctx, 31, 0x1436CCu);
    ctx->pc = 0x254A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254A30u, 0x1436C4u, 0x1436CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1436CCu;
label_1436cc:
    // 0x1436cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436d0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1436d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1436d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1436d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1436d8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1436d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1436dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1436dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1436e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436e4: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1436e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1436e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436ec: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1436ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1436f0: 0x2402dfff  addiu       $v0, $zero, -0x2001
    ctx->pc = 0x1436f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x1436f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1436f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1436f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1436f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1436fc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1436fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x143700: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143704: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x143704u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x143708: 0x2402fdff  addiu       $v0, $zero, -0x201
    ctx->pc = 0x143708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x14370c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x143710: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x143710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x143714: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x143714u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x143718: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x143718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x14371c: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x14371cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143720: 0x8e061324  lw          $a2, 0x1324($s0)
    ctx->pc = 0x143720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4900)));
    // 0x143724: 0xc050efc  jal         func_143BF0
    ctx->pc = 0x143724u;
    SET_GPR_U32(ctx, 31, 0x14372Cu);
    ctx->pc = 0x143BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BF0u, 0x143724u, 0x14372Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14372Cu;
label_14372c:
    // 0x14372c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14372cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x143730: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x143730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x143734: 0x8e041344  lw          $a0, 0x1344($s0)
    ctx->pc = 0x143734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4932)));
    // 0x143738: 0x8e051334  lw          $a1, 0x1334($s0)
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4916)));
    // 0x14373c: 0x8e061328  lw          $a2, 0x1328($s0)
    ctx->pc = 0x14373cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4904)));
    // 0x143740: 0xc050efc  jal         func_143BF0
    ctx->pc = 0x143740u;
    SET_GPR_U32(ctx, 31, 0x143748u);
    ctx->pc = 0x143BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143BF0u, 0x143740u, 0x143748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143748u;
label_143748:
    // 0x143748: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x143748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x14374c: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x14374cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
    // 0x143750: 0xc051134  jal         func_1444D0
    ctx->pc = 0x143750u;
    SET_GPR_U32(ctx, 31, 0x143758u);
    ctx->pc = 0x1444D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1444D0u, 0x143750u, 0x143758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143758u;
label_143758:
    // 0x143758: 0x8e041340  lw          $a0, 0x1340($s0)
    ctx->pc = 0x143758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x14375c: 0x8e051330  lw          $a1, 0x1330($s0)
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
    // 0x143760: 0x8e061338  lw          $a2, 0x1338($s0)
    ctx->pc = 0x143760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x143764: 0xc050f38  jal         func_143CE0
    ctx->pc = 0x143764u;
    SET_GPR_U32(ctx, 31, 0x14376Cu);
    ctx->pc = 0x143CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143CE0u, 0x143764u, 0x14376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x14376cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x143770: 0xa0400090  sb          $zero, 0x90($v0)
    ctx->pc = 0x143770u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 144), (uint8_t)GPR_U32(ctx, 0));
    // 0x143774: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x143774u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x143778: 0xc050f9c  jal         func_143E70
    ctx->pc = 0x143778u;
    SET_GPR_U32(ctx, 31, 0x143780u);
    ctx->pc = 0x143E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143E70u, 0x143778u, 0x143780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143780u;
label_143780:
    // 0x143780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143784: 0xa20213f8  sb          $v0, 0x13F8($s0)
    ctx->pc = 0x143784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5112), (uint8_t)GPR_U32(ctx, 2));
    // 0x143788: 0xa20013f9  sb          $zero, 0x13F9($s0)
    ctx->pc = 0x143788u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x14378c: 0x920213f8  lbu         $v0, 0x13F8($s0)
    ctx->pc = 0x14378cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5112)));
    // 0x143790: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x143790u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143794: 0xc051004  jal         func_144010
    ctx->pc = 0x143794u;
    SET_GPR_U32(ctx, 31, 0x14379Cu);
    ctx->pc = 0x144010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144010u, 0x143794u, 0x14379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14379Cu;
label_14379c:
    // 0x14379c: 0xc051110  jal         func_144440
    ctx->pc = 0x14379Cu;
    SET_GPR_U32(ctx, 31, 0x1437A4u);
    ctx->pc = 0x144440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144440u, 0x14379Cu, 0x1437A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437A4u;
label_1437a4:
    // 0x1437a4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1437a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1437a8: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x1437ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1437b0: 0xae6200c0  sw          $v0, 0xC0($s3)
    ctx->pc = 0x1437b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
    // 0x1437b4: 0xc051158  jal         func_144560
    ctx->pc = 0x1437B4u;
    SET_GPR_U32(ctx, 31, 0x1437BCu);
    ctx->pc = 0x144560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144560u, 0x1437B4u, 0x1437BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437BCu;
label_1437bc:
    // 0x1437bc: 0x8e0301ec  lw          $v1, 0x1EC($s0)
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1437c0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1437C0u;
    {
        const bool branch_taken_0x1437c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437c0) {
            ctx->pc = 0x143828u;
            return;
        }
    }
    ctx->pc = 0x1437C8u;
    // 0x1437c8: 0x8e0401ec  lw          $a0, 0x1EC($s0)
    ctx->pc = 0x1437c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x1437cc: 0xc0794b0  jal         func_1E52C0
    ctx->pc = 0x1437CCu;
    SET_GPR_U32(ctx, 31, 0x1437D4u);
    ctx->pc = 0x1E52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E52C0u, 0x1437CCu, 0x1437D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437D4u;
label_1437d4:
    // 0x1437d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1437d8: 0x8c250ae8  lw          $a1, 0xAE8($at)
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1437dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1437dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1437e0: 0xc079534  jal         func_1E54D0
    ctx->pc = 0x1437E0u;
    SET_GPR_U32(ctx, 31, 0x1437E8u);
    ctx->pc = 0x1E54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E54D0u, 0x1437E0u, 0x1437E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1437E8u;
label_1437e8:
    // 0x1437e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1437e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1437ec: 0xac220ae8  sw          $v0, 0xAE8($at)
    ctx->pc = 0x1437ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x1437f0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1437f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1437f4: 0x24640ae8  addiu       $a0, $v1, 0xAE8
    ctx->pc = 0x1437f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x1437f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1437f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1437fc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1437fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x143800: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x143800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0AE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D0AE8u, _value); } while (0);
    // 0x143804: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x143804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x143808: 0x24650ae8  addiu       $a1, $v1, 0xAE8
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2792));
    // 0x14380c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x14380cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x143810: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x143810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x143814: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x143818: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x143818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14381c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x143820: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x143820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x143824: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x143824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x143828u;
}
