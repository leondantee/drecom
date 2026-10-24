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

// Function: Pl_damage_em1d_01
// Address: 0x371890 - 0x371ae4
void Pl_damage_em1d_01_0x371890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_damage_em1d_01_0x371890");
#endif

    switch (ctx->pc) {
        case 0x37191cu: goto label_37191c;
        case 0x37194cu: goto label_37194c;
        case 0x371978u: goto label_371978;
        case 0x371990u: goto label_371990;
        case 0x3719b8u: goto label_3719b8;
        case 0x3719ccu: goto label_3719cc;
        case 0x3719d8u: goto label_3719d8;
        case 0x371a64u: goto label_371a64;
        case 0x371a8cu: goto label_371a8c;
        case 0x371aa0u: goto label_371aa0;
        case 0x371ab4u: goto label_371ab4;
        case 0x371ac0u: goto label_371ac0;
        default: break;
    }

    ctx->pc = 0x371890u;

    // 0x371890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x371890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x371894: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x371894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x371898: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37189c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3718a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3718a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3718a4: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x3718a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x3718a8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x3718a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x3718ac: 0x24710080  addiu       $s1, $v1, 0x80
    ctx->pc = 0x3718acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x3718b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3718b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3718b4: 0x8c701210  lw          $s0, 0x1210($v1)
    ctx->pc = 0x3718b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x3718b8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x3718b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x3718bc: 0x24720fa0  addiu       $s2, $v1, 0xFA0
    ctx->pc = 0x3718bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x3718c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3718c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3718c4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3718c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3718c8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3718c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3718cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3718ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3718d0: 0x1083006a  beq         $a0, $v1, . + 4 + (0x6A << 2)
    ctx->pc = 0x3718D0u;
    {
        const bool branch_taken_0x3718d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3718d0) {
            ctx->pc = 0x371A7Cu;
            goto label_371a7c;
        }
    }
    ctx->pc = 0x3718D8u;
    // 0x3718d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3718d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3718dc: 0x1083005a  beq         $a0, $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x3718DCu;
    {
        const bool branch_taken_0x3718dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3718dc) {
            ctx->pc = 0x371A48u;
            goto label_371a48;
        }
    }
    ctx->pc = 0x3718E4u;
    // 0x3718e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3718e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3718e8: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3718E8u;
    {
        const bool branch_taken_0x3718e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3718e8) {
            ctx->pc = 0x371954u;
            goto label_371954;
        }
    }
    ctx->pc = 0x3718F0u;
    // 0x3718f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3718F0u;
    {
        const bool branch_taken_0x3718f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3718f0) {
            ctx->pc = 0x371900u;
            goto label_371900;
        }
    }
    ctx->pc = 0x3718F8u;
    // 0x3718f8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x3718F8u;
    {
        const bool branch_taken_0x3718f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3718f8) {
            ctx->pc = 0x371AC8u;
            goto label_371ac8;
        }
    }
    ctx->pc = 0x371900u;
label_371900:
    // 0x371900: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371904: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371908: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x371908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x37190c: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x37190cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371910: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371914: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371914u;
    SET_GPR_U32(ctx, 31, 0x37191Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371914u, 0x37191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37191Cu;
label_37191c:
    // 0x37191c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371920: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371924: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371924u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37192c: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x37192cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x371930: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x371930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x371934: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x371934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x371938: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37193c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x37193cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x371940: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x371940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x371944: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x371944u;
    SET_GPR_U32(ctx, 31, 0x37194Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x371944u, 0x37194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37194Cu;
label_37194c:
    // 0x37194c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x37194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371950: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x371950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_371954:
    // 0x371954: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371958: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37195c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x37195cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x371960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x371960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x371964: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x371964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x371968: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x371968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37196c: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x37196cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x371970: 0xc058f50  jal         func_163D40
    ctx->pc = 0x371970u;
    SET_GPR_U32(ctx, 31, 0x371978u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x371970u, 0x371978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371978u;
label_371978:
    // 0x371978: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37197c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x371980: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371984: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371984u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371988: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x371988u;
    SET_GPR_U32(ctx, 31, 0x371990u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x371988u, 0x371990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371990u;
label_371990:
    // 0x371990: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371994: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x371994u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x371998: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x371998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37199c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37199Cu;
    {
        const bool branch_taken_0x37199c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37199c) {
            ctx->pc = 0x3719B8u;
            goto label_3719b8;
        }
    }
    ctx->pc = 0x3719A4u;
    // 0x3719a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3719a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719ac: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x3719acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3719b0: 0xc05cd58  jal         func_173560
    ctx->pc = 0x3719B0u;
    SET_GPR_U32(ctx, 31, 0x3719B8u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x3719B0u, 0x3719B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719B8u;
label_3719b8:
    // 0x3719b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3719b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3719bc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719c0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3719c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3719c4: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x3719C4u;
    SET_GPR_U32(ctx, 31, 0x3719CCu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x3719C4u, 0x3719CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719CCu;
label_3719cc:
    // 0x3719cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3719ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719d0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3719D0u;
    SET_GPR_U32(ctx, 31, 0x3719D8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3719D0u, 0x3719D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3719D8u;
label_3719d8:
    // 0x3719d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3719dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3719e0: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x3719E0u;
    {
        const bool branch_taken_0x3719e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3719e0) {
            ctx->pc = 0x371AC8u;
            goto label_371ac8;
        }
    }
    ctx->pc = 0x3719E8u;
    // 0x3719e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3719e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3719f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3719f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3719f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3719f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3719f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3719fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3719fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x371a00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x371a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a08: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a10: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x371a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371a14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a18: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x371a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x371a1c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x371a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x371a20: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a24: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x371a24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x371a28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a2c: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x371a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371a30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a34: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x371a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x371a38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a3c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x371a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x371a40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x371A40u;
    {
        const bool branch_taken_0x371a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371a40) {
            ctx->pc = 0x371AC8u;
            goto label_371ac8;
        }
    }
    ctx->pc = 0x371A48u;
label_371a48:
    // 0x371a48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a4c: 0x8e050360  lw          $a1, 0x360($s0)
    ctx->pc = 0x371a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x371a50: 0x24060f01  addiu       $a2, $zero, 0xF01
    ctx->pc = 0x371a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3841));
    // 0x371a54: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x371a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x371a58: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x371a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x371a5c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x371A5Cu;
    SET_GPR_U32(ctx, 31, 0x371A64u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x371A5Cu, 0x371A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A64u;
label_371a64:
    // 0x371a64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x371a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x371a68: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a6c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x371a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x371a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x371a74: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a78: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x371a78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
label_371a7c:
    // 0x371a7c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a80: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371a80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371a84: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x371A84u;
    SET_GPR_U32(ctx, 31, 0x371A8Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x371A84u, 0x371A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371A8Cu;
label_371a8c:
    // 0x371a8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x371a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371a94: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x371a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371a98: 0xc05cd58  jal         func_173560
    ctx->pc = 0x371A98u;
    SET_GPR_U32(ctx, 31, 0x371AA0u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x371A98u, 0x371AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AA0u;
label_371aa0:
    // 0x371aa0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371aa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371aa4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x371aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371aac: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x371AACu;
    SET_GPR_U32(ctx, 31, 0x371AB4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x371AACu, 0x371AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AB4u;
label_371ab4:
    // 0x371ab4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x371ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371ab8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371AB8u;
    SET_GPR_U32(ctx, 31, 0x371AC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371AB8u, 0x371AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371AC0u;
label_371ac0:
    // 0x371ac0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x371ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x371ac4: 0x0  nop
    ctx->pc = 0x371ac4u;
    // NOP
label_371ac8:
    // 0x371ac8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x371ac8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371acc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371accu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371ad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371ad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x371ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x371adc: 0x3e00008  jr          $ra
    ctx->pc = 0x371ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371AE4u;
}
