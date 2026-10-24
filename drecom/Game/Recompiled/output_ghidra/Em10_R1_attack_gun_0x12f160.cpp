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

// Function: Em10_R1_attack_gun
// Address: 0x12f160 - 0x12f4f4
void Em10_R1_attack_gun_0x12f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_attack_gun_0x12f160");
#endif

    switch (ctx->pc) {
        case 0x12f1c0u: goto label_12f1c0;
        case 0x12f218u: goto label_12f218;
        case 0x12f248u: goto label_12f248;
        case 0x12f278u: goto label_12f278;
        case 0x12f2a8u: goto label_12f2a8;
        case 0x12f2d0u: goto label_12f2d0;
        case 0x12f2fcu: goto label_12f2fc;
        case 0x12f314u: goto label_12f314;
        case 0x12f320u: goto label_12f320;
        case 0x12f330u: goto label_12f330;
        case 0x12f33cu: goto label_12f33c;
        case 0x12f360u: goto label_12f360;
        case 0x12f384u: goto label_12f384;
        case 0x12f398u: goto label_12f398;
        case 0x12f3dcu: goto label_12f3dc;
        case 0x12f404u: goto label_12f404;
        case 0x12f44cu: goto label_12f44c;
        case 0x12f46cu: goto label_12f46c;
        case 0x12f478u: goto label_12f478;
        case 0x12f488u: goto label_12f488;
        case 0x12f494u: goto label_12f494;
        default: break;
    }

    ctx->pc = 0x12f160u;

    // 0x12f160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12f164: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x12f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x12f168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f16c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x12f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x12f170: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f174: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12f174u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12f178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f17c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12f17cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f180: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12f180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f184: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12f184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f188: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x12F188u;
    {
        const bool branch_taken_0x12f188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f188) {
            ctx->pc = 0x12F45Cu;
            goto label_12f45c;
        }
    }
    ctx->pc = 0x12F190u;
    // 0x12f190: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12f190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f194: 0x108300a5  beq         $a0, $v1, . + 4 + (0xA5 << 2)
    ctx->pc = 0x12F194u;
    {
        const bool branch_taken_0x12f194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f194) {
            ctx->pc = 0x12F42Cu;
            goto label_12f42c;
        }
    }
    ctx->pc = 0x12F19Cu;
    // 0x12f19c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f1a0: 0x10830045  beq         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x12F1A0u;
    {
        const bool branch_taken_0x12f1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f1a0) {
            ctx->pc = 0x12F2B8u;
            goto label_12f2b8;
        }
    }
    ctx->pc = 0x12F1A8u;
    // 0x12f1a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F1A8u;
    {
        const bool branch_taken_0x12f1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1a8) {
            ctx->pc = 0x12F1B8u;
            goto label_12f1b8;
        }
    }
    ctx->pc = 0x12F1B0u;
    // 0x12f1b0: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x12F1B0u;
    {
        const bool branch_taken_0x12f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1b0) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F1B8u;
label_12f1b8:
    // 0x12f1b8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12F1B8u;
    SET_GPR_U32(ctx, 31, 0x12F1C0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12F1B8u, 0x12F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F1C0u;
label_12f1c0:
    // 0x12f1c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f1c4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12f1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12f1c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f1cc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12F1CCu;
    {
        const bool branch_taken_0x12f1cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f1cc) {
            ctx->pc = 0x12F250u;
            goto label_12f250;
        }
    }
    ctx->pc = 0x12F1D4u;
    // 0x12f1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f1d8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F1D8u;
    {
        const bool branch_taken_0x12f1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f1d8) {
            ctx->pc = 0x12F220u;
            goto label_12f220;
        }
    }
    ctx->pc = 0x12F1E0u;
    // 0x12f1e0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F1E0u;
    {
        const bool branch_taken_0x12f1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1e0) {
            ctx->pc = 0x12F1F0u;
            goto label_12f1f0;
        }
    }
    ctx->pc = 0x12F1E8u;
    // 0x12f1e8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12F1E8u;
    {
        const bool branch_taken_0x12f1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f1e8) {
            ctx->pc = 0x12F278u;
            goto label_12f278;
        }
    }
    ctx->pc = 0x12F1F0u;
label_12f1f0:
    // 0x12f1f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f1f4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f1f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f1fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f200: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f204: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12f204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12f208: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f20c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f20cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f210: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F210u;
    SET_GPR_U32(ctx, 31, 0x12F218u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F210u, 0x12F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F218u;
label_12f218:
    // 0x12f218: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F218u;
    {
        const bool branch_taken_0x12f218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f218) {
            ctx->pc = 0x12F278u;
            goto label_12f278;
        }
    }
    ctx->pc = 0x12F220u;
label_12f220:
    // 0x12f220: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f224: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f228: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f22c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f234: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12f238: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f23c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f23cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f240: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F240u;
    SET_GPR_U32(ctx, 31, 0x12F248u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F240u, 0x12F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F248u;
label_12f248:
    // 0x12f248: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F248u;
    {
        const bool branch_taken_0x12f248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f248) {
            ctx->pc = 0x12F278u;
            goto label_12f278;
        }
    }
    ctx->pc = 0x12F250u;
label_12f250:
    // 0x12f250: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f254: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f258: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f25c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f264: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12f268: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f26c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f26cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f270: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F270u;
    SET_GPR_U32(ctx, 31, 0x12F278u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F270u, 0x12F278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F278u;
label_12f278:
    // 0x12f278: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12f27c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x12f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12f280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f284: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x12f284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x12f288: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f28c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f290: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f294: 0x24063c12  addiu       $a2, $zero, 0x3C12
    ctx->pc = 0x12f294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15378));
    // 0x12f298: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f29c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f2a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F2A0u;
    SET_GPR_U32(ctx, 31, 0x12F2A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F2A0u, 0x12F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2A8u;
label_12f2a8:
    // 0x12f2a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2ac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f2acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f2b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f2b4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12f2b8:
    // 0x12f2b8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2bc: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f2c0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12f2c4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12f2c8: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12F2C8u;
    SET_GPR_U32(ctx, 31, 0x12F2D0u);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12F2C8u, 0x12F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2D0u;
label_12f2d0:
    // 0x12f2d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2d4: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x12f2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x12f2d8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x12f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x12f2dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f2e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x12f2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12f2e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f2ec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x12f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f2f0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x12f2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12f2f4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12F2F4u;
    SET_GPR_U32(ctx, 31, 0x12F2FCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12F2F4u, 0x12F2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2FCu;
label_12f2fc:
    // 0x12f2fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f300: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12f300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12f304: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f308: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f308u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f30c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F30Cu;
    SET_GPR_U32(ctx, 31, 0x12F314u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F30Cu, 0x12F314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F314u;
label_12f314:
    // 0x12f314: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f318: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F318u;
    SET_GPR_U32(ctx, 31, 0x12F320u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F318u, 0x12F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F320u;
label_12f320:
    // 0x12f320: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f324: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f324u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f328: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F328u;
    SET_GPR_U32(ctx, 31, 0x12F330u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F328u, 0x12F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F330u;
label_12f330:
    // 0x12f330: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f334: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F334u;
    SET_GPR_U32(ctx, 31, 0x12F33Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F334u, 0x12F33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F33Cu;
label_12f33c:
    // 0x12f33c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f340: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12f340u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12f344: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12f344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f348: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12f348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12f34c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x12F34Cu;
    {
        const bool branch_taken_0x12f34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f34c) {
            ctx->pc = 0x12F404u;
            goto label_12f404;
        }
    }
    ctx->pc = 0x12F354u;
    // 0x12f354: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12f354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f358: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12F358u;
    SET_GPR_U32(ctx, 31, 0x12F360u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12F358u, 0x12F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F360u;
label_12f360:
    // 0x12f360: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f364: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12f364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f368: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f36c: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x12f36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12f370: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12f374: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12f374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12f378: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12f378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x12f37c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12F37Cu;
    SET_GPR_U32(ctx, 31, 0x12F384u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12F37Cu, 0x12F384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F384u;
label_12f384:
    // 0x12f384: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12F384u;
    {
        const bool branch_taken_0x12f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f384) {
            ctx->pc = 0x12F404u;
            goto label_12f404;
        }
    }
    ctx->pc = 0x12F38Cu;
    // 0x12f38c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f390: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12F390u;
    SET_GPR_U32(ctx, 31, 0x12F398u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12F390u, 0x12F398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F398u;
label_12f398:
    // 0x12f398: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f39c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f3a0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f3a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12f3a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12f3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12f3ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f3b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12f3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f3b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f3b8: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12f3b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12f3bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f3c0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f3c4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12f3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f3c8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f3c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3cc: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12f3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12f3d0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12f3d0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3d4: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12F3D4u;
    SET_GPR_U32(ctx, 31, 0x12F3DCu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12F3D4u, 0x12F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F3DCu;
label_12f3dc:
    // 0x12f3dc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f3e0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f3e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f3e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f3f0: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x12f3f4: 0x24650570  addiu       $a1, $v1, 0x570
    ctx->pc = 0x12f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1392));
    // 0x12f3f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f3f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f3fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F3FCu;
    SET_GPR_U32(ctx, 31, 0x12F404u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F3FCu, 0x12F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F404u;
label_12f404:
    // 0x12f404: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f408: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f40c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x12F40Cu;
    {
        const bool branch_taken_0x12f40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f40c) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F414u;
    // 0x12f414: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f418: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12f418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x12f41c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f420: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12f420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f424: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x12F424u;
    {
        const bool branch_taken_0x12f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f424) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F42Cu;
label_12f42c:
    // 0x12f42c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f430: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f434: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f438: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12f43c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f440: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f444: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F444u;
    SET_GPR_U32(ctx, 31, 0x12F44Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F444u, 0x12F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F44Cu;
label_12f44c:
    // 0x12f44c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f450: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f458: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12f45c:
    // 0x12f45c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f460: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f464: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12F464u;
    SET_GPR_U32(ctx, 31, 0x12F46Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12F464u, 0x12F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F46Cu;
label_12f46c:
    // 0x12f46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f470: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12F470u;
    SET_GPR_U32(ctx, 31, 0x12F478u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12F470u, 0x12F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F478u;
label_12f478:
    // 0x12f478: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f47c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12f47cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f480: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12F480u;
    SET_GPR_U32(ctx, 31, 0x12F488u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12F480u, 0x12F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F488u;
label_12f488:
    // 0x12f488: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f48c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12F48Cu;
    SET_GPR_U32(ctx, 31, 0x12F494u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12F48Cu, 0x12F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F494u;
label_12f494:
    // 0x12f494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f498: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12f498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12f49c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F4A4u;
    // 0x12f4a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f4a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f4b0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12f4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12f4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12f4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12f4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f4c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12f4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f4cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f4d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12f4d4: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12f4d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f4d8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F4D8u;
    {
        const bool branch_taken_0x12f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f4d8) {
            ctx->pc = 0x12F4E0u;
            goto label_12f4e0;
        }
    }
    ctx->pc = 0x12F4E0u;
label_12f4e0:
    // 0x12f4e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x12f4e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f4e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f4e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12f4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F4F4u;
}
