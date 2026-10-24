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

// Function: Em06_R1_die_handgun
// Address: 0x19b840 - 0x19bc0c
void Em06_R1_die_handgun_0x19b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_die_handgun_0x19b840");
#endif

    switch (ctx->pc) {
        case 0x19b8b8u: goto label_19b8b8;
        case 0x19b91cu: goto label_19b91c;
        case 0x19b930u: goto label_19b930;
        case 0x19b960u: goto label_19b960;
        case 0x19b970u: goto label_19b970;
        case 0x19b990u: goto label_19b990;
        case 0x19b99cu: goto label_19b99c;
        case 0x19b9acu: goto label_19b9ac;
        case 0x19b9b8u: goto label_19b9b8;
        default: break;
    }

    ctx->pc = 0x19b840u;

    // 0x19b840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x19b844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x19b848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x19b848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x19b84c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b850: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19b850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b854: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19b854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19b858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19b858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b85c: 0x108300e2  beq         $a0, $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x19B85Cu;
    {
        const bool branch_taken_0x19b85c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b85c) {
            ctx->pc = 0x19BBE8u;
            goto label_19bbe8;
        }
    }
    ctx->pc = 0x19B864u;
    // 0x19b864: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19b864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b868: 0x1083008e  beq         $a0, $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x19B868u;
    {
        const bool branch_taken_0x19b868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b868) {
            ctx->pc = 0x19BAA4u;
            goto label_19baa4;
        }
    }
    ctx->pc = 0x19B870u;
    // 0x19b870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19b870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19b874: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x19B874u;
    {
        const bool branch_taken_0x19b874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b874) {
            ctx->pc = 0x19B9F4u;
            goto label_19b9f4;
        }
    }
    ctx->pc = 0x19B87Cu;
    // 0x19b87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b880: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x19B880u;
    {
        const bool branch_taken_0x19b880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19b880) {
            ctx->pc = 0x19B8E0u;
            goto label_19b8e0;
        }
    }
    ctx->pc = 0x19B888u;
    // 0x19b888: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19B888u;
    {
        const bool branch_taken_0x19b888 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b888) {
            ctx->pc = 0x19B898u;
            goto label_19b898;
        }
    }
    ctx->pc = 0x19B890u;
    // 0x19b890: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x19B890u;
    {
        const bool branch_taken_0x19b890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b890) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19B898u;
label_19b898:
    // 0x19b898: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b89c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b8a4: 0x24066416  addiu       $a2, $zero, 0x6416
    ctx->pc = 0x19b8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25622));
    // 0x19b8a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b8ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b8acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b8b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B8B0u;
    SET_GPR_U32(ctx, 31, 0x19B8B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B8B0u, 0x19B8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B8B8u;
label_19b8b8:
    // 0x19b8b8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8bc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b8c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8c4: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19b8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19b8c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19b8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19b8cc: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19b8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b8d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8d4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b8d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b8d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b8dc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_19b8e0:
    // 0x19b8e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b8e4: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19b8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19b8e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x19b8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19b8ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19b8ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19b8f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x19b8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19b8f4: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19B8F4u;
    {
        const bool branch_taken_0x19b8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19b8f4) {
            ctx->pc = 0x19B938u;
            goto label_19b938;
        }
    }
    ctx->pc = 0x19B8FCu;
    // 0x19b8fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b900: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b908: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19b908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19b90c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19B90Cu;
    {
        const bool branch_taken_0x19b90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b90c) {
            ctx->pc = 0x19B930u;
            goto label_19b930;
        }
    }
    ctx->pc = 0x19B914u;
    // 0x19b914: 0xc067694  jal         func_19DA50
    ctx->pc = 0x19B914u;
    SET_GPR_U32(ctx, 31, 0x19B91Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x19B914u, 0x19B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B91Cu;
label_19b91c:
    // 0x19b91c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b920: 0x3045001f  andi        $a1, $v0, 0x1F
    ctx->pc = 0x19b920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x19b924: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b928: 0xc0ba2f0  jal         func_2E8BC0
    ctx->pc = 0x19B928u;
    SET_GPR_U32(ctx, 31, 0x19B930u);
    ctx->pc = 0x2E8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8BC0u, 0x19B928u, 0x19B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B930u;
label_19b930:
    // 0x19b930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b934: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b934u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_19b938:
    // 0x19b938: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b93c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b93cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b940: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b944: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19b948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B948u;
    {
        const bool branch_taken_0x19b948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b948) {
            ctx->pc = 0x19B960u;
            goto label_19b960;
        }
    }
    ctx->pc = 0x19B950u;
    // 0x19b950: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b954: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x19b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19b958: 0xc0ba408  jal         func_2E9020
    ctx->pc = 0x19B958u;
    SET_GPR_U32(ctx, 31, 0x19B960u);
    ctx->pc = 0x2E9020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9020u, 0x19B958u, 0x19B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B960u;
label_19b960:
    // 0x19b960: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19b964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19b968: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19B968u;
    SET_GPR_U32(ctx, 31, 0x19B970u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19B968u, 0x19B970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B970u;
label_19b970:
    // 0x19b970: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b974: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b978: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x19b978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b97c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19b980: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19b984: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19b988: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19B988u;
    SET_GPR_U32(ctx, 31, 0x19B990u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19B990u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19B990u) { return; }
    ctx->pc = 0x19B990u;
label_19b990:
    // 0x19b990: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b994: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19B994u;
    SET_GPR_U32(ctx, 31, 0x19B99Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19B994u, 0x19B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B99Cu;
label_19b99c:
    // 0x19b99c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19b9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b9a4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19B9A4u;
    SET_GPR_U32(ctx, 31, 0x19B9ACu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19B9A4u, 0x19B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9ACu;
label_19b9ac:
    // 0x19b9ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9b0: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19B9B0u, 0x19B9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9bc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19b9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19b9c0: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
    ctx->pc = 0x19B9C0u;
    {
        const bool branch_taken_0x19b9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9c0) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19B9C8u;
    // 0x19b9c8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19b9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19b9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b9d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9d4: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19b9d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19b9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19b9dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19b9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9e0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19b9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19b9e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19b9e8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b9ec: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x19B9ECu;
    {
        const bool branch_taken_0x19b9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9ec) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19B9F4u;
label_19b9f4:
    // 0x19b9f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19b9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19b9f8: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19b9fc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x19b9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba04: 0x0  nop
    ctx->pc = 0x19ba04u;
    // NOP
    // 0x19ba08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19ba08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19ba0c: 0x0  nop
    ctx->pc = 0x19ba0cu;
    // NOP
    // 0x19ba10: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x19BA10u;
    {
        const bool branch_taken_0x19ba10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19ba10) {
            ctx->pc = 0x19BA44u;
            goto label_19ba44;
        }
    }
    ctx->pc = 0x19BA18u;
    // 0x19ba18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba1c: 0x24641348  addiu       $a0, $v1, 0x1348
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19ba20: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x19ba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ba24: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x19ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x19ba28: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19ba28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x19ba2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19ba2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba30: 0x0  nop
    ctx->pc = 0x19ba30u;
    // NOP
    // 0x19ba34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19ba34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19ba38: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19ba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x19ba3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x19BA3Cu;
    {
        const bool branch_taken_0x19ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba3c) {
            ctx->pc = 0x19BA8Cu;
            goto label_19ba8c;
        }
    }
    ctx->pc = 0x19BA44u;
label_19ba44:
    // 0x19ba44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba4c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19ba50: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19ba50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19ba54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ba58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba5c: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x19ba5cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x19ba60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ba60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ba64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba68: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19ba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19ba6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba70: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19ba70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19ba74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba78: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19ba78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19ba7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ba80: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19ba80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ba84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba88: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19ba88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_19ba8c:
    // 0x19ba8c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19ba90: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19ba90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19ba94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ba98: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19ba9c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x19BA9Cu;
    {
        const bool branch_taken_0x19ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba9c) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19BAA4u;
label_19baa4:
    // 0x19baa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19baa8: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x19baa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x19baac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19baacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19bab0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19bab4: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BAB4u;
    {
        const bool branch_taken_0x19bab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bab4) {
            ctx->pc = 0x19BB08u;
            goto label_19bb08;
        }
    }
    ctx->pc = 0x19BABCu;
    // 0x19babc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bac0: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bac0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bac4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bac8: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bacc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bad0: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bad4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19bad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bad8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19bad8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x19badc: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x19badcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x19bae0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BAE0u;
    {
        const bool branch_taken_0x19bae0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bae0) {
            ctx->pc = 0x19BB08u;
            goto label_19bb08;
        }
    }
    ctx->pc = 0x19BAE8u;
    // 0x19bae8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19bae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19baec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19baecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19baf0: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x19baf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x19baf4: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x19baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x19baf8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x19baf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x19bafc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bafcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb00: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19bb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
label_19bb08:
    // 0x19bb08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb0c: 0x94630094  lhu         $v1, 0x94($v1)
    ctx->pc = 0x19bb0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x19bb10: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x19bb10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19bb14: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bb18: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x19BB18u;
    {
        const bool branch_taken_0x19bb18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb18) {
            ctx->pc = 0x19BB58u;
            goto label_19bb58;
        }
    }
    ctx->pc = 0x19BB20u;
    // 0x19bb20: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x19bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x19bb24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bb24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb28: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb2c: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19bb30: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19bb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19bb34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb38: 0xa4600096  sh          $zero, 0x96($v1)
    ctx->pc = 0x19bb38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bb3c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb40: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19bb40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bb44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19bb44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bb48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb4c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19bb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19bb50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb54: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19bb54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
label_19bb58:
    // 0x19bb58: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb5c: 0x84630096  lh          $v1, 0x96($v1)
    ctx->pc = 0x19bb5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x19bb60: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BB60u;
    {
        const bool branch_taken_0x19bb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bb60) {
            ctx->pc = 0x19BBA4u;
            goto label_19bba4;
        }
    }
    ctx->pc = 0x19BB68u;
    // 0x19bb68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb6c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bb70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bb74: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bb78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb7c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bb80: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x19bb80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bb84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19bb84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19bb88: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19bb8c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BB8Cu;
    {
        const bool branch_taken_0x19bb8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb8c) {
            ctx->pc = 0x19BBA4u;
            goto label_19bba4;
        }
    }
    ctx->pc = 0x19BB94u;
    // 0x19bb94: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bb98: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bb98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bb9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bba0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bba0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_19bba4:
    // 0x19bba4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bba8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19bbac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bbb0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bbb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbb8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x19bbbc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x19bbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x19bbc0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x19bbc0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x19bbc4: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x19bbc8: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x19BBC8u;
    {
        const bool branch_taken_0x19bbc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bbc8) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19BBD0u;
    // 0x19bbd0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbd4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19bbd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bbd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19bbdc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19bbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19bbe0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BBE0u;
    {
        const bool branch_taken_0x19bbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bbe0) {
            ctx->pc = 0x19BBFCu;
            goto label_19bbfc;
        }
    }
    ctx->pc = 0x19BBE8u;
label_19bbe8:
    // 0x19bbe8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x19bbec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19bbecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bbf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19bbf4: 0x24631348  addiu       $v1, $v1, 0x1348
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4936));
    // 0x19bbf8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19bbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19bbfc:
    // 0x19bbfc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x19bbfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bc00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19bc04: 0x3e00008  jr          $ra
    ctx->pc = 0x19BC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BC0Cu;
}
