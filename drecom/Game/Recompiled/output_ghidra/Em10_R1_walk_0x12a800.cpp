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

// Function: Em10_R1_walk
// Address: 0x12a800 - 0x12acec
void Em10_R1_walk_0x12a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_walk_0x12a800");
#endif

    switch (ctx->pc) {
        case 0x12a834u: goto label_12a834;
        case 0x12a844u: goto label_12a844;
        case 0x12a85cu: goto label_12a85c;
        case 0x12a8f8u: goto label_12a8f8;
        case 0x12a974u: goto label_12a974;
        case 0x12a9c0u: goto label_12a9c0;
        case 0x12aa88u: goto label_12aa88;
        case 0x12aab0u: goto label_12aab0;
        case 0x12aad8u: goto label_12aad8;
        case 0x12ab00u: goto label_12ab00;
        case 0x12ab58u: goto label_12ab58;
        case 0x12ab74u: goto label_12ab74;
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12ab98u: goto label_12ab98;
        case 0x12aba8u: goto label_12aba8;
        case 0x12abb4u: goto label_12abb4;
        case 0x12abccu: goto label_12abcc;
        case 0x12ac48u: goto label_12ac48;
        case 0x12ac78u: goto label_12ac78;
        case 0x12aca8u: goto label_12aca8;
        case 0x12acd8u: goto label_12acd8;
        default: break;
    }

    ctx->pc = 0x12a800u;

    // 0x12a800: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12a804: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12a804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12a808: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a80c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x12a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x12a810: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a814: 0x24501330  addiu       $s0, $v0, 0x1330
    ctx->pc = 0x12a814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x12a818: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a81c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a820: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12a820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12a824: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12a828: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x12a828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x12a82c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12A82Cu;
    SET_GPR_U32(ctx, 31, 0x12A834u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12A82Cu, 0x12A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A834u;
label_12a834:
    // 0x12a834: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x12a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a838: 0xc7ad0028  lwc1        $f13, 0x28($sp)
    ctx->pc = 0x12a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12a83c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x12A83Cu;
    SET_GPR_U32(ctx, 31, 0x12A844u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x12A83Cu, 0x12A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A844u;
label_12a844:
    // 0x12a844: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12a848: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a84c: 0xc7ac0038  lwc1        $f12, 0x38($sp)
    ctx->pc = 0x12a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a850: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12a854: 0xc058f20  jal         func_163C80
    ctx->pc = 0x12A854u;
    SET_GPR_U32(ctx, 31, 0x12A85Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x12A854u, 0x12A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A85Cu;
label_12a85c:
    // 0x12a85c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12a860: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12a860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a868: 0x0  nop
    ctx->pc = 0x12a868u;
    // NOP
    // 0x12a86c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a86cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a870: 0x0  nop
    ctx->pc = 0x12a870u;
    // NOP
    // 0x12a874: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12A874u;
    {
        const bool branch_taken_0x12a874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a874) {
            ctx->pc = 0x12A890u;
            goto label_12a890;
        }
    }
    ctx->pc = 0x12A87Cu;
    // 0x12a87c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x12a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x12a880: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12a880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a884: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a888: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12a888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x12a88c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12a88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12a890:
    // 0x12a890: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x12a890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a894: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x12a894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x12a898: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12a898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12a89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12a89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a8a0: 0x0  nop
    ctx->pc = 0x12a8a0u;
    // NOP
    // 0x12a8a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a8a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a8a8: 0x0  nop
    ctx->pc = 0x12a8a8u;
    // NOP
    // 0x12a8ac: 0x45000053  bc1f        . + 4 + (0x53 << 2)
    ctx->pc = 0x12A8ACu;
    {
        const bool branch_taken_0x12a8ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a8ac) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A8B4u;
    // 0x12a8b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a8b8: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x12a8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x12a8bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x12a8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12a8c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x12a8c4: 0x1460004d  bnez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x12A8C4u;
    {
        const bool branch_taken_0x12a8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8c4) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A8CCu;
    // 0x12a8cc: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x12a8ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x12a8d0: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x12A8D0u;
    {
        const bool branch_taken_0x12a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8d0) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A8D8u;
    // 0x12a8d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a8dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a8e0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x12a8e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a8e8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x12A8E8u;
    {
        const bool branch_taken_0x12a8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a8e8) {
            ctx->pc = 0x12A93Cu;
            goto label_12a93c;
        }
    }
    ctx->pc = 0x12A8F0u;
    // 0x12a8f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A8F0u;
    SET_GPR_U32(ctx, 31, 0x12A8F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A8F0u, 0x12A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8F8u;
label_12a8f8:
    // 0x12a8f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a8fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a900: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x12A900u;
    {
        const bool branch_taken_0x12a900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a900) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A908u;
    // 0x12a908: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a90c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a910: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a914: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a918: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a918u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a91c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a920: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a924: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a928: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a92c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a930: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a934: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x12A934u;
    {
        const bool branch_taken_0x12a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a934) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A93Cu;
label_12a93c:
    // 0x12a93c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a940: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x12a944: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x12a944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x12a948: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x12A948u;
    {
        const bool branch_taken_0x12a948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a948) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A950u;
    // 0x12a950: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a954: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12a954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12a958: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12a95c: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12a960: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12a960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a964: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12A964u;
    {
        const bool branch_taken_0x12a964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12a964) {
            ctx->pc = 0x12A9B8u;
            goto label_12a9b8;
        }
    }
    ctx->pc = 0x12A96Cu;
    // 0x12a96c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A96Cu;
    SET_GPR_U32(ctx, 31, 0x12A974u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A96Cu, 0x12A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A974u;
label_12a974:
    // 0x12a974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a978: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12a978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12a97c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x12A97Cu;
    {
        const bool branch_taken_0x12a97c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a97c) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A984u;
    // 0x12a984: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a988: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a98c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a990: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a994: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a998: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a99c: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9a0: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a9a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a9ac: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a9b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12A9B0u;
    {
        const bool branch_taken_0x12a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9b0) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A9B8u;
label_12a9b8:
    // 0x12a9b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12A9B8u;
    SET_GPR_U32(ctx, 31, 0x12A9C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12A9B8u, 0x12A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9C0u;
label_12a9c0:
    // 0x12a9c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12a9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a9c4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x12a9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x12a9c8: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x12A9C8u;
    {
        const bool branch_taken_0x12a9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9c8) {
            ctx->pc = 0x12A9FCu;
            goto label_12a9fc;
        }
    }
    ctx->pc = 0x12A9D0u;
    // 0x12a9d0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a9d4: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9d8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x12a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x12a9dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12a9e0: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x12a9e4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12a9e8: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x12a9ec: 0x3c03ebff  lui         $v1, 0xEBFF
    ctx->pc = 0x12a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60415 << 16));
    // 0x12a9f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a9f4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12a9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a9f8: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x12a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
label_12a9fc:
    // 0x12a9fc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa00: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12aa00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12aa04: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12aa08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa0c: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x12AA0Cu;
    {
        const bool branch_taken_0x12aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12aa0c) {
            ctx->pc = 0x12AB14u;
            goto label_12ab14;
        }
    }
    ctx->pc = 0x12AA14u;
    // 0x12aa14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AA14u;
    {
        const bool branch_taken_0x12aa14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa14) {
            ctx->pc = 0x12AA24u;
            goto label_12aa24;
        }
    }
    ctx->pc = 0x12AA1Cu;
    // 0x12aa1c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x12AA1Cu;
    {
        const bool branch_taken_0x12aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa1c) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AA24u;
label_12aa24:
    // 0x12aa24: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa28: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12aa28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12aa2c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12aa30: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12aa34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12aa38: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12AA38u;
    {
        const bool branch_taken_0x12aa38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa38) {
            ctx->pc = 0x12AAE0u;
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AA40u;
    // 0x12aa40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12aa44: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12AA44u;
    {
        const bool branch_taken_0x12aa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa44) {
            ctx->pc = 0x12AAB8u;
            goto label_12aab8;
        }
    }
    ctx->pc = 0x12AA4Cu;
    // 0x12aa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa50: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12AA50u;
    {
        const bool branch_taken_0x12aa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12aa50) {
            ctx->pc = 0x12AA90u;
            goto label_12aa90;
        }
    }
    ctx->pc = 0x12AA58u;
    // 0x12aa58: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AA58u;
    {
        const bool branch_taken_0x12aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa58) {
            ctx->pc = 0x12AA68u;
            goto label_12aa68;
        }
    }
    ctx->pc = 0x12AA60u;
    // 0x12aa60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AA60u;
    {
        const bool branch_taken_0x12aa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa60) {
            ctx->pc = 0x12AA68u;
            goto label_12aa68;
        }
    }
    ctx->pc = 0x12AA68u;
label_12aa68:
    // 0x12aa68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa6c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aa74: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x12aa78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aa7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aa7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aa80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AA80u;
    SET_GPR_U32(ctx, 31, 0x12AA88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AA80u, 0x12AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA88u;
label_12aa88:
    // 0x12aa88: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12AA88u;
    {
        const bool branch_taken_0x12aa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa88) {
            ctx->pc = 0x12AB00u;
            goto label_12ab00;
        }
    }
    ctx->pc = 0x12AA90u;
label_12aa90:
    // 0x12aa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aa9c: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x12aaa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aaa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aaa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AAA8u;
    SET_GPR_U32(ctx, 31, 0x12AAB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AAA8u, 0x12AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAB0u;
label_12aab0:
    // 0x12aab0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12AAB0u;
    {
        const bool branch_taken_0x12aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aab0) {
            ctx->pc = 0x12AB00u;
            goto label_12ab00;
        }
    }
    ctx->pc = 0x12AAB8u;
label_12aab8:
    // 0x12aab8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aabc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aac0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aac4: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x12aac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x12aac8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aacc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aaccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aad0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AAD0u;
    SET_GPR_U32(ctx, 31, 0x12AAD8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AAD0u, 0x12AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAD8u;
label_12aad8:
    // 0x12aad8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12AAD8u;
    {
        const bool branch_taken_0x12aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aad8) {
            ctx->pc = 0x12AB00u;
            goto label_12ab00;
        }
    }
    ctx->pc = 0x12AAE0u;
label_12aae0:
    // 0x12aae0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aae4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aae8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aaec: 0x24063c45  addiu       $a2, $zero, 0x3C45
    ctx->pc = 0x12aaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15429));
    // 0x12aaf0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aaf4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aaf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aaf8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AAF8u;
    SET_GPR_U32(ctx, 31, 0x12AB00u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AAF8u, 0x12AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB00u;
label_12ab00:
    // 0x12ab00: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12ab04: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab08: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12ab08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12ab0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12ab10: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12ab10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12ab14:
    // 0x12ab14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab18: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x12ab18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x12ab1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12ab1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ab20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12ab24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12AB24u;
    {
        const bool branch_taken_0x12ab24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab24) {
            ctx->pc = 0x12AB7Cu;
            goto label_12ab7c;
        }
    }
    ctx->pc = 0x12AB2Cu;
    // 0x12ab2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x12ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab38: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12ab3c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12ab40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12ab40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12ab44: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12ab48: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x12ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12ab4c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x12ab50: 0xc05c848  jal         func_172120
    ctx->pc = 0x12AB50u;
    SET_GPR_U32(ctx, 31, 0x12AB58u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12AB50u, 0x12AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB58u;
label_12ab58:
    // 0x12ab58: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x12ab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x12ab5c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab60: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12ab60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ab64: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x12ab64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ab68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12ab68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12ab6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12AB6Cu;
    SET_GPR_U32(ctx, 31, 0x12AB74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12AB6Cu, 0x12AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB74u;
label_12ab74:
    // 0x12ab74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12ab78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_12ab7c:
    // 0x12ab7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ab80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ab84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12AB84u;
    SET_GPR_U32(ctx, 31, 0x12AB8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12AB84u, 0x12AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB8Cu;
label_12ab8c:
    // 0x12ab8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12AB90u;
    SET_GPR_U32(ctx, 31, 0x12AB98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12AB90u, 0x12AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AB98u;
label_12ab98:
    // 0x12ab98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ab9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12ab9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12aba0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12ABA0u;
    SET_GPR_U32(ctx, 31, 0x12ABA8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12ABA0u, 0x12ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12ABACu;
    SET_GPR_U32(ctx, 31, 0x12ABB4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12ABACu, 0x12ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABB4u;
label_12abb4:
    // 0x12abb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abb8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12abb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12abbc: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x12ABBCu;
    {
        const bool branch_taken_0x12abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12abbc) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12ABC4u;
    // 0x12abc4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12ABC4u;
    SET_GPR_U32(ctx, 31, 0x12ABCCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12ABC4u, 0x12ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ABCCu;
label_12abcc:
    // 0x12abcc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x12abccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12abd0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x12abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x12abd4: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x12ABD4u;
    {
        const bool branch_taken_0x12abd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12abd4) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12ABDCu;
    // 0x12abdc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12abe0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12abe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12abe4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12abe8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12abe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12abec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12abf0: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12ABF0u;
    {
        const bool branch_taken_0x12abf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12abf0) {
            ctx->pc = 0x12ACB0u;
            goto label_12acb0;
        }
    }
    ctx->pc = 0x12ABF8u;
    // 0x12abf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12abfc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AC80u;
            goto label_12ac80;
        }
    }
    ctx->pc = 0x12AC04u;
    // 0x12ac04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ac08: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12AC08u;
    {
        const bool branch_taken_0x12ac08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ac08) {
            ctx->pc = 0x12AC50u;
            goto label_12ac50;
        }
    }
    ctx->pc = 0x12AC10u;
    // 0x12ac10: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AC10u;
    {
        const bool branch_taken_0x12ac10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac10) {
            ctx->pc = 0x12AC20u;
            goto label_12ac20;
        }
    }
    ctx->pc = 0x12AC18u;
    // 0x12ac18: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12AC18u;
    {
        const bool branch_taken_0x12ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac18) {
            ctx->pc = 0x12AC20u;
            goto label_12ac20;
        }
    }
    ctx->pc = 0x12AC20u;
label_12ac20:
    // 0x12ac20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ac24: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12ac24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ac28: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12ac2c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12ac30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12ac30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12ac34: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12ac38: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12ac3c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12ac3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ac40: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12AC40u;
    SET_GPR_U32(ctx, 31, 0x12AC48u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12AC40u, 0x12AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC48u;
label_12ac48:
    // 0x12ac48: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12AC48u;
    {
        const bool branch_taken_0x12ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac48) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AC50u;
label_12ac50:
    // 0x12ac50: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ac54: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ac58: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12ac5c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12ac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12ac60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12ac60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12ac64: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12ac64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12ac68: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12ac68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12ac6c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12ac6cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12ac70: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12AC70u;
    SET_GPR_U32(ctx, 31, 0x12AC78u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12AC70u, 0x12AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC78u;
label_12ac78:
    // 0x12ac78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12AC78u;
    {
        const bool branch_taken_0x12ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ac78) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12AC80u;
label_12ac80:
    // 0x12ac80: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12ac84: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12ac88: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12ac8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12ac90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12ac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12ac94: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12ac98: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12ac98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12ac9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12ac9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12aca0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12ACA0u;
    SET_GPR_U32(ctx, 31, 0x12ACA8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12ACA0u, 0x12ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACA8u;
label_12aca8:
    // 0x12aca8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12ACA8u;
    {
        const bool branch_taken_0x12aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aca8) {
            ctx->pc = 0x12ACD8u;
            goto label_12acd8;
        }
    }
    ctx->pc = 0x12ACB0u;
label_12acb0:
    // 0x12acb0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12acb4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12acb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12acbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12acbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12acc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12acc4: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12acc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12acc8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12acc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12accc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12acccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12acd0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12ACD0u;
    SET_GPR_U32(ctx, 31, 0x12ACD8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12ACD0u, 0x12ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACD8u;
label_12acd8:
    // 0x12acd8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12acd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12acdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12acdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ace0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12ace4: 0x3e00008  jr          $ra
    ctx->pc = 0x12ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ACE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ACECu;
}
