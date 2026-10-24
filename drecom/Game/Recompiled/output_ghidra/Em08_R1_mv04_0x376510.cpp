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

// Function: Em08_R1_mv04
// Address: 0x376510 - 0x376c6c
void Em08_R1_mv04_0x376510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_mv04_0x376510");
#endif

    switch (ctx->pc) {
        case 0x3765a8u: goto label_3765a8;
        case 0x3765b0u: goto label_3765b0;
        case 0x376620u: goto label_376620;
        case 0x376674u: goto label_376674;
        case 0x37670cu: goto label_37670c;
        case 0x376744u: goto label_376744;
        case 0x3767ccu: goto label_3767cc;
        case 0x376864u: goto label_376864;
        case 0x376874u: goto label_376874;
        case 0x376880u: goto label_376880;
        case 0x3768b0u: goto label_3768b0;
        case 0x376930u: goto label_376930;
        case 0x376968u: goto label_376968;
        case 0x3769f0u: goto label_3769f0;
        case 0x376a88u: goto label_376a88;
        case 0x376a98u: goto label_376a98;
        case 0x376aa4u: goto label_376aa4;
        case 0x376af0u: goto label_376af0;
        case 0x376af8u: goto label_376af8;
        case 0x376b2cu: goto label_376b2c;
        case 0x376b3cu: goto label_376b3c;
        case 0x376b48u: goto label_376b48;
        case 0x376b84u: goto label_376b84;
        case 0x376b9cu: goto label_376b9c;
        case 0x376bacu: goto label_376bac;
        case 0x376bb8u: goto label_376bb8;
        default: break;
    }

    ctx->pc = 0x376510u;

    // 0x376510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x376510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x376514: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x376514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x376518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37651c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37651cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x376520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x376524: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x376524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x376528: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37652c: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x37652cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x376530: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376534: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x376534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x376538: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x376538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x37653c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37653cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376540: 0x10830192  beq         $a0, $v1, . + 4 + (0x192 << 2)
    ctx->pc = 0x376540u;
    {
        const bool branch_taken_0x376540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x376540) {
            ctx->pc = 0x376B8Cu;
            goto label_376b8c;
        }
    }
    ctx->pc = 0x376548u;
    // 0x376548: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x376548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37654c: 0x10830173  beq         $a0, $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x37654Cu;
    {
        const bool branch_taken_0x37654c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37654c) {
            ctx->pc = 0x376B1Cu;
            goto label_376b1c;
        }
    }
    ctx->pc = 0x376554u;
    // 0x376554: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x376554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376558: 0x108300da  beq         $a0, $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x376558u;
    {
        const bool branch_taken_0x376558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x376558) {
            ctx->pc = 0x3768C4u;
            goto label_3768c4;
        }
    }
    ctx->pc = 0x376560u;
    // 0x376560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x376560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376564: 0x1083004e  beq         $a0, $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x376564u;
    {
        const bool branch_taken_0x376564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x376564) {
            ctx->pc = 0x3766A0u;
            goto label_3766a0;
        }
    }
    ctx->pc = 0x37656Cu;
    // 0x37656c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37656Cu;
    {
        const bool branch_taken_0x37656c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37656c) {
            ctx->pc = 0x37657Cu;
            goto label_37657c;
        }
    }
    ctx->pc = 0x376574u;
    // 0x376574: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x376574u;
    {
        const bool branch_taken_0x376574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376574) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x37657Cu;
label_37657c:
    // 0x37657c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376584: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376588: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37658c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376590: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376594: 0x24065a08  addiu       $a2, $zero, 0x5A08
    ctx->pc = 0x376594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23048));
    // 0x376598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37659c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37659cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3765a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3765A0u;
    SET_GPR_U32(ctx, 31, 0x3765A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3765A0u, 0x3765A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765A8u;
label_3765a8:
    // 0x3765a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3765A8u;
    SET_GPR_U32(ctx, 31, 0x3765B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3765A8u, 0x3765B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765B0u;
label_3765b0:
    // 0x3765b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3765b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3765b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3765b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3765b8: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x3765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x3765bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3765bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3765c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3765c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3765c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3765c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3765cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765d4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3765d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3765d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765dc: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x3765dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3765e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765e4: 0x0  nop
    ctx->pc = 0x3765e4u;
    // NOP
    // 0x3765e8: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x3765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x3765ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765f0: 0x0  nop
    ctx->pc = 0x3765f0u;
    // NOP
    // 0x3765f4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3765f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3765f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3765f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3765fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376600: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x376600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x376604: 0x3c023fbd  lui         $v0, 0x3FBD
    ctx->pc = 0x376604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16317 << 16));
    // 0x376608: 0x3442e44e  ori         $v0, $v0, 0xE44E
    ctx->pc = 0x376608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58446);
    // 0x37660c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376610: 0x0  nop
    ctx->pc = 0x376610u;
    // NOP
    // 0x376614: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x376618: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376618u;
    SET_GPR_U32(ctx, 31, 0x376620u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376618u, 0x376620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376620u;
label_376620:
    // 0x376620: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x376624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x376628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x376628u;
    {
        const bool branch_taken_0x376628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376628) {
            ctx->pc = 0x376650u;
            goto label_376650;
        }
    }
    ctx->pc = 0x376630u;
    // 0x376630: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x376630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x376634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376638: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x376638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37663c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37663cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376640: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x376644: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x376644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376648: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37664c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x37664cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
label_376650:
    // 0x376650: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376654: 0x245210b0  addiu       $s2, $v0, 0x10B0
    ctx->pc = 0x376654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x376658: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x376658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x37665c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37665cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376660: 0x0  nop
    ctx->pc = 0x376660u;
    // NOP
    // 0x376664: 0xe64000d0  swc1        $f0, 0xD0($s2)
    ctx->pc = 0x376664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 208), bits); }
    // 0x376668: 0xe64000d4  swc1        $f0, 0xD4($s2)
    ctx->pc = 0x376668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 212), bits); }
    // 0x37666c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x37666Cu;
    SET_GPR_U32(ctx, 31, 0x376674u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x37666Cu, 0x376674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376674u;
label_376674:
    // 0x376674: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x376674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x376678: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37667c: 0x0  nop
    ctx->pc = 0x37667cu;
    // NOP
    // 0x376680: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x376680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x376684: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x376684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x376688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37668c: 0x0  nop
    ctx->pc = 0x37668cu;
    // NOP
    // 0x376690: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x376690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x376694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376698: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x37669c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x37669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_3766a0:
    // 0x3766a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3766a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3766a4: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3766a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3766a8: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3766a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3766ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3766acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3766b0: 0x0  nop
    ctx->pc = 0x3766b0u;
    // NOP
    // 0x3766b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3766b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3766b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3766b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3766bc: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3766bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3766c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3766c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766c4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3766c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3766c8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3766c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3766ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3766d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3766d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3766d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3766d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3766d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3766d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3766dc: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3766dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3766e0: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3766e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3766e4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3766e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x3766e8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x3766e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x3766ec: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x3766ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3766f0: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x3766f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3766f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3766f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3766f8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3766f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3766fc: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x3766fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x376700: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x376700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x376704: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x376704u;
    SET_GPR_U32(ctx, 31, 0x37670Cu);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x376704u, 0x37670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37670Cu;
label_37670c:
    // 0x37670c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37670cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376710: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376710u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376714: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37671c: 0x0  nop
    ctx->pc = 0x37671cu;
    // NOP
    // 0x376720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376724: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376728: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x37672c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376730: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376734: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x376734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376738: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376738u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37673c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37673Cu;
    SET_GPR_U32(ctx, 31, 0x376744u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37673Cu, 0x376744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376744u;
label_376744:
    // 0x376744: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376748: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x376748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x37674c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376750: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376754: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x376754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376758: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37675c: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x37675cu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376760: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x376764: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x376768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37676c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x37676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376770: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x376770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376774: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376778: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x376778u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37677c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x37677cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x376780: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376784: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376788: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x376788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37678c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37678cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376790: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x376790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376794: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376798: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37679c: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x37679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3767a0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3767a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3767a4: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x3767a4u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3767a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3767ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3767acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3767b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3767b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3767b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3767b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3767b8: 0x0  nop
    ctx->pc = 0x3767b8u;
    // NOP
    // 0x3767bc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3767bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3767c0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3767c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3767c4: 0xc067588  jal         func_19D620
    ctx->pc = 0x3767C4u;
    SET_GPR_U32(ctx, 31, 0x3767CCu);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x3767C4u, 0x3767CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3767CCu;
label_3767cc:
    // 0x3767cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3767ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3767d0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3767d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3767d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3767d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3767d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3767d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3767dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x3767dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3767e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3767e4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3767e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3767e8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x3767e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x3767ec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3767ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3767f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3767f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3767f4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x3767f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3767f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3767f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3767fc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3767fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376800: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x376800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x376804: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x376804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x376808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37680c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x37680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376814: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x376814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x376818: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37681c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x37681cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376820: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376824: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376828: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x376828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x37682c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376830: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x376830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376834: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37683c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x37683cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x376840: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376844: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x376844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376848: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37684c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37684cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376850: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x376850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x376854: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376858: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376858u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37685c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x37685Cu;
    SET_GPR_U32(ctx, 31, 0x376864u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x37685Cu, 0x376864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376864u;
label_376864:
    // 0x376864: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376868: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376868u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37686c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x37686Cu;
    SET_GPR_U32(ctx, 31, 0x376874u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x37686Cu, 0x376874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376874u;
label_376874:
    // 0x376874: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376878: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376878u;
    SET_GPR_U32(ctx, 31, 0x376880u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376878u, 0x376880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376880u;
label_376880:
    // 0x376880: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376884: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376888: 0x106000f1  beqz        $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x376888u;
    {
        const bool branch_taken_0x376888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376888) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376890u;
    // 0x376890: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376894: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376898: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x37689c: 0x24065a09  addiu       $a2, $zero, 0x5A09
    ctx->pc = 0x37689cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23049));
    // 0x3768a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3768a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3768a4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3768a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3768a8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3768A8u;
    SET_GPR_U32(ctx, 31, 0x3768B0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3768A8u, 0x3768B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3768B0u;
label_3768b0:
    // 0x3768b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3768b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3768b4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3768b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768b8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x3768b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x3768bc: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x3768BCu;
    {
        const bool branch_taken_0x3768bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3768bc) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x3768C4u;
label_3768c4:
    // 0x3768c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3768c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3768c8: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3768c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3768cc: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3768ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3768d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3768d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3768d4: 0x0  nop
    ctx->pc = 0x3768d4u;
    // NOP
    // 0x3768d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3768d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3768dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3768dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3768e0: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3768e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3768e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768e8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3768e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3768ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3768ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3768f4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x3768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x3768f8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x3768f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x3768fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3768fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x376900: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x376900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x376904: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x376904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x376908: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x376908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x37690c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x37690cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x376910: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376914: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x376914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x376918: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x376918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37691c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37691cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376920: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x376920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x376924: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x376924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x376928: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x376928u;
    SET_GPR_U32(ctx, 31, 0x376930u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x376928u, 0x376930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376930u;
label_376930:
    // 0x376930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376934: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376934u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376938: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x376938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37693c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37693cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376940: 0x0  nop
    ctx->pc = 0x376940u;
    // NOP
    // 0x376944: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x376948: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37694c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x37694cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x376950: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376954: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376958: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x376958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37695c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x37695cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376960: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376960u;
    SET_GPR_U32(ctx, 31, 0x376968u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376960u, 0x376968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376968u;
label_376968:
    // 0x376968: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37696c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x376970: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376974: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x376974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x376978: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x376978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37697c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37697cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376980: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x376980u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376984: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x376984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x376988: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x37698c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x37698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x376990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x376994: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x376994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376998: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37699c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x37699cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769a0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3769a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3769a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3769a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3769a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3769ac: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x3769acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3769b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3769b4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3769b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3769b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3769b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3769bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3769bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3769c0: 0xc4410078  lwc1        $f1, 0x78($v0)
    ctx->pc = 0x3769c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3769c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3769c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3769c8: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x3769c8u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3769cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3769ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3769d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3769d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3769d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3769d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3769d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3769d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3769dc: 0x0  nop
    ctx->pc = 0x3769dcu;
    // NOP
    // 0x3769e0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3769e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3769e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3769e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3769e8: 0xc067588  jal         func_19D620
    ctx->pc = 0x3769E8u;
    SET_GPR_U32(ctx, 31, 0x3769F0u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x3769E8u, 0x3769F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3769F0u;
label_3769f0:
    // 0x3769f0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x3769f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x3769f4: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x3769f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x3769f8: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x3769f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x3769fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3769fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a00: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a04: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a08: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x376a0c: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x376a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x376a10: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x376a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x376a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a18: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x376a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x376a24: 0x3c023d8f  lui         $v0, 0x3D8F
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15759 << 16));
    // 0x376a28: 0x34425c29  ori         $v0, $v0, 0x5C29
    ctx->pc = 0x376a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23593);
    // 0x376a2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376a30: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x376a34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376a38: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x376a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x376a3c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a40: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x376a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a44: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x376a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a4c: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x376a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x376a50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a54: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x376a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a58: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x376a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x376a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x376a64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a68: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x376a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376a6c: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x376a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376a70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x376a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376a74: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x376a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x376a78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376a7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376a80: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376A80u;
    SET_GPR_U32(ctx, 31, 0x376A88u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376A80u, 0x376A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A88u;
label_376a88:
    // 0x376a88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376a90: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376A90u;
    SET_GPR_U32(ctx, 31, 0x376A98u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376A90u, 0x376A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A98u;
label_376a98:
    // 0x376a98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376a9c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376A9Cu;
    SET_GPR_U32(ctx, 31, 0x376AA4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376A9Cu, 0x376AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AA4u;
label_376aa4:
    // 0x376aa4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x376aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x376aa8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x376aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x376aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376ab0: 0x0  nop
    ctx->pc = 0x376ab0u;
    // NOP
    // 0x376ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x376ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x376ab8: 0x0  nop
    ctx->pc = 0x376ab8u;
    // NOP
    // 0x376abc: 0x45000064  bc1f        . + 4 + (0x64 << 2)
    ctx->pc = 0x376ABCu;
    {
        const bool branch_taken_0x376abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x376abc) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376AC4u;
    // 0x376ac4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x376ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x376ac8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376acc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376accu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376ad0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ad4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ad8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376adc: 0x2406020a  addiu       $a2, $zero, 0x20A
    ctx->pc = 0x376adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 522));
    // 0x376ae0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376ae4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376ae8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376AE8u;
    SET_GPR_U32(ctx, 31, 0x376AF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376AE8u, 0x376AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF0u;
label_376af0:
    // 0x376af0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376AF0u;
    SET_GPR_U32(ctx, 31, 0x376AF8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376AF0u, 0x376AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376AF8u;
label_376af8:
    // 0x376af8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x376af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376afc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x376afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x376b00: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x376b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x376b04: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x376b04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x376b08: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x376b08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x376b0c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b10: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x376b10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x376b14: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x376B14u;
    {
        const bool branch_taken_0x376b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b14) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376B1Cu;
label_376b1c:
    // 0x376b1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376B24u;
    SET_GPR_U32(ctx, 31, 0x376B2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376B24u, 0x376B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B2Cu;
label_376b2c:
    // 0x376b2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b34: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376B34u;
    SET_GPR_U32(ctx, 31, 0x376B3Cu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376B34u, 0x376B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B3Cu;
label_376b3c:
    // 0x376b3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376B40u;
    SET_GPR_U32(ctx, 31, 0x376B48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376B40u, 0x376B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B48u;
label_376b48:
    // 0x376b48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376b50: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x376B50u;
    {
        const bool branch_taken_0x376b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b50) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376B58u;
    // 0x376b58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x376b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376b5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b60: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376b70: 0x24061404  addiu       $a2, $zero, 0x1404
    ctx->pc = 0x376b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5124));
    // 0x376b74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376b78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376b7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376B7Cu;
    SET_GPR_U32(ctx, 31, 0x376B84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376B7Cu, 0x376B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B84u;
label_376b84:
    // 0x376b84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x376B84u;
    {
        const bool branch_taken_0x376b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b84) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376B8Cu;
label_376b8c:
    // 0x376b8c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b94: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376B94u;
    SET_GPR_U32(ctx, 31, 0x376B9Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376B94u, 0x376B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B9Cu;
label_376b9c:
    // 0x376b9c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376ba0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376ba0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376ba4: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376BA4u;
    SET_GPR_U32(ctx, 31, 0x376BACu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376BA4u, 0x376BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BACu;
label_376bac:
    // 0x376bac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bb0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376BB0u;
    SET_GPR_U32(ctx, 31, 0x376BB8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376BB0u, 0x376BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376BB8u;
label_376bb8:
    // 0x376bb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bbc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376bc0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x376BC0u;
    {
        const bool branch_taken_0x376bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376bc0) {
            ctx->pc = 0x376C50u;
            goto label_376c50;
        }
    }
    ctx->pc = 0x376BC8u;
    // 0x376bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x376bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376bcc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x376bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x376bd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bd8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x376bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x376bdc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376be0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x376be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x376be4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376be8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x376be8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x376bec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bf0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x376bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x376bf4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376bf8: 0x247110b0  addiu       $s1, $v1, 0x10B0
    ctx->pc = 0x376bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x376bfc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x376bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x376c00: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x376c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x376c04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x376c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x376c08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x376c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x376c0c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x376c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x376c10: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x376c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x376c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x376c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c18: 0x0  nop
    ctx->pc = 0x376c18u;
    // NOP
    // 0x376c1c: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x376c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x376c20: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x376c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x376c24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376c28: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x376c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x376c2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c30: 0x0  nop
    ctx->pc = 0x376c30u;
    // NOP
    // 0x376c34: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x376c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x376c38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c3c: 0x0  nop
    ctx->pc = 0x376c3cu;
    // NOP
    // 0x376c40: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x376c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x376c44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x376c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376c48: 0x0  nop
    ctx->pc = 0x376c48u;
    // NOP
    // 0x376c4c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_376c50:
    // 0x376c50: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x376c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x376c54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x376c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376c60: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x376c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x376c64: 0x3e00008  jr          $ra
    ctx->pc = 0x376C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376C6Cu;
}
