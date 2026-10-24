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

// Function: Em10_R1_dm_blow_front
// Address: 0x131390 - 0x131760
void Em10_R1_dm_blow_front_0x131390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_blow_front_0x131390");
#endif

    switch (ctx->pc) {
        case 0x1313f0u: goto label_1313f0;
        case 0x131448u: goto label_131448;
        case 0x131478u: goto label_131478;
        case 0x1314a8u: goto label_1314a8;
        case 0x1314f8u: goto label_1314f8;
        case 0x131518u: goto label_131518;
        case 0x131524u: goto label_131524;
        case 0x131534u: goto label_131534;
        case 0x13154cu: goto label_13154c;
        case 0x1315b4u: goto label_1315b4;
        case 0x1315e4u: goto label_1315e4;
        case 0x131640u: goto label_131640;
        case 0x131668u: goto label_131668;
        case 0x131690u: goto label_131690;
        case 0x1316b8u: goto label_1316b8;
        case 0x1316d8u: goto label_1316d8;
        case 0x1316e4u: goto label_1316e4;
        case 0x1316f4u: goto label_1316f4;
        case 0x131700u: goto label_131700;
        default: break;
    }

    ctx->pc = 0x131390u;

    // 0x131390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131394: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x131394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x131398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13139c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13139cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1313a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1313a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1313a4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1313a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1313a8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1313a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1313ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1313acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1313b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1313b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1313b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1313b8: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1313B8u;
    {
        const bool branch_taken_0x1313b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1313b8) {
            ctx->pc = 0x1316C8u;
            goto label_1316c8;
        }
    }
    ctx->pc = 0x1313C0u;
    // 0x1313c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1313c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1313c4: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x1313C4u;
    {
        const bool branch_taken_0x1313c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1313c4) {
            ctx->pc = 0x1315DCu;
            goto label_1315dc;
        }
    }
    ctx->pc = 0x1313CCu;
    // 0x1313cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1313ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1313d0: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1313D0u;
    {
        const bool branch_taken_0x1313d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1313d0) {
            ctx->pc = 0x131508u;
            goto label_131508;
        }
    }
    ctx->pc = 0x1313D8u;
    // 0x1313d8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1313D8u;
    {
        const bool branch_taken_0x1313d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313d8) {
            ctx->pc = 0x1313E8u;
            goto label_1313e8;
        }
    }
    ctx->pc = 0x1313E0u;
    // 0x1313e0: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1313E0u;
    {
        const bool branch_taken_0x1313e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1313e0) {
            ctx->pc = 0x13174Cu;
            goto label_13174c;
        }
    }
    ctx->pc = 0x1313E8u;
label_1313e8:
    // 0x1313e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1313E8u;
    SET_GPR_U32(ctx, 31, 0x1313F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1313E8u, 0x1313F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1313F0u;
label_1313f0:
    // 0x1313f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1313f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1313f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1313f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1313f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1313fc: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1313FCu;
    {
        const bool branch_taken_0x1313fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1313fc) {
            ctx->pc = 0x131480u;
            goto label_131480;
        }
    }
    ctx->pc = 0x131404u;
    // 0x131404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131408: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x131408u;
    {
        const bool branch_taken_0x131408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131408) {
            ctx->pc = 0x131450u;
            goto label_131450;
        }
    }
    ctx->pc = 0x131410u;
    // 0x131410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131410u;
    {
        const bool branch_taken_0x131410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131410) {
            ctx->pc = 0x131420u;
            goto label_131420;
        }
    }
    ctx->pc = 0x131418u;
    // 0x131418: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131418u;
    {
        const bool branch_taken_0x131418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131418) {
            ctx->pc = 0x131420u;
            goto label_131420;
        }
    }
    ctx->pc = 0x131420u;
label_131420:
    // 0x131420: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131424: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131428: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13142c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13142cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131430: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131434: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131438: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13143c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13143cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131440: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131440u;
    SET_GPR_U32(ctx, 31, 0x131448u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131440u, 0x131448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131448u;
label_131448:
    // 0x131448: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131448u;
    {
        const bool branch_taken_0x131448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131448) {
            ctx->pc = 0x1314A8u;
            goto label_1314a8;
        }
    }
    ctx->pc = 0x131450u;
label_131450:
    // 0x131450: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131454: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131458: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13145c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131460: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131464: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131468: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13146c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13146cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131470: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131470u;
    SET_GPR_U32(ctx, 31, 0x131478u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131470u, 0x131478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131478u;
label_131478:
    // 0x131478: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131478u;
    {
        const bool branch_taken_0x131478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131478) {
            ctx->pc = 0x1314A8u;
            goto label_1314a8;
        }
    }
    ctx->pc = 0x131480u;
label_131480:
    // 0x131480: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131484: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131488: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13148c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131490: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131494: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x131498: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13149c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13149cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1314a0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1314A0u;
    SET_GPR_U32(ctx, 31, 0x1314A8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1314A0u, 0x1314A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314A8u;
label_1314a8:
    // 0x1314a8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1314a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1314ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1314acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1314b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314b4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1314b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1314b8: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1314b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1314bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1314bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1314c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314c4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1314c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1314c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314cc: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1314ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314d4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1314d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1314d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1314d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314dc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1314dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1314e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1314e4: 0x2406031c  addiu       $a2, $zero, 0x31C
    ctx->pc = 0x1314e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    // 0x1314e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1314e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1314ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1314ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1314f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1314F0u;
    SET_GPR_U32(ctx, 31, 0x1314F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1314F0u, 0x1314F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1314F8u;
label_1314f8:
    // 0x1314f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1314fc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1314fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131500: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131504: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_131508:
    // 0x131508: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13150c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13150cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131510: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131510u;
    SET_GPR_U32(ctx, 31, 0x131518u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131510u, 0x131518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131518u;
label_131518:
    // 0x131518: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13151c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13151Cu;
    SET_GPR_U32(ctx, 31, 0x131524u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13151Cu, 0x131524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131524u;
label_131524:
    // 0x131524: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131528: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13152c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13152Cu;
    SET_GPR_U32(ctx, 31, 0x131534u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13152Cu, 0x131534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131534u;
label_131534:
    // 0x131534: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131538: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13153c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x131540: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x131540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x131544: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x131544u;
    SET_GPR_U32(ctx, 31, 0x13154Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x131544u, 0x13154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13154Cu;
label_13154c:
    // 0x13154c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x131550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131554: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131558: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13155c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13155cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131560: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x131560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x131564: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x131568: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13156c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13156cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131570: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131574: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x131574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131578: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x131578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13157c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13157cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x131580: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131584: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x131584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131588: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13158c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13158cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131590: 0x0  nop
    ctx->pc = 0x131590u;
    // NOP
    // 0x131594: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131594u;
    {
        const bool branch_taken_0x131594 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131594) {
            ctx->pc = 0x1315A8u;
            goto label_1315a8;
        }
    }
    ctx->pc = 0x13159Cu;
    // 0x13159c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1315a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1315a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315a4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1315a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1315a8:
    // 0x1315a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1315a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1315ACu;
    SET_GPR_U32(ctx, 31, 0x1315B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1315ACu, 0x1315B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315B4u;
label_1315b4:
    // 0x1315b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1315b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1315b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1315bc: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1315BCu;
    {
        const bool branch_taken_0x1315bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315bc) {
            ctx->pc = 0x13174Cu;
            goto label_13174c;
        }
    }
    ctx->pc = 0x1315C4u;
    // 0x1315c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1315c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1315c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1315c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1315cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1315ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1315d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1315d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1315d4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1315D4u;
    {
        const bool branch_taken_0x1315d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1315d4) {
            ctx->pc = 0x13174Cu;
            goto label_13174c;
        }
    }
    ctx->pc = 0x1315DCu;
label_1315dc:
    // 0x1315dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1315DCu;
    SET_GPR_U32(ctx, 31, 0x1315E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1315DCu, 0x1315E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1315E4u;
label_1315e4:
    // 0x1315e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1315e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1315e8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1315e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1315ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1315ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1315f0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1315F0u;
    {
        const bool branch_taken_0x1315f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1315f0) {
            ctx->pc = 0x131698u;
            goto label_131698;
        }
    }
    ctx->pc = 0x1315F8u;
    // 0x1315f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1315f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1315fc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1315FCu;
    {
        const bool branch_taken_0x1315fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1315fc) {
            ctx->pc = 0x131670u;
            goto label_131670;
        }
    }
    ctx->pc = 0x131604u;
    // 0x131604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131608: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131608u;
    {
        const bool branch_taken_0x131608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x131608) {
            ctx->pc = 0x131648u;
            goto label_131648;
        }
    }
    ctx->pc = 0x131610u;
    // 0x131610: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131610u;
    {
        const bool branch_taken_0x131610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131610) {
            ctx->pc = 0x131620u;
            goto label_131620;
        }
    }
    ctx->pc = 0x131618u;
    // 0x131618: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x131618u;
    {
        const bool branch_taken_0x131618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131618) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131620u;
label_131620:
    // 0x131620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131624: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131628: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13162c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x13162cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x131630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131634: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131638: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131638u;
    SET_GPR_U32(ctx, 31, 0x131640u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131638u, 0x131640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131640u;
label_131640:
    // 0x131640: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x131640u;
    {
        const bool branch_taken_0x131640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131640) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131648u;
label_131648:
    // 0x131648: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13164c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13164cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131650: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131654: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x131654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x131658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13165c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13165cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131660: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131660u;
    SET_GPR_U32(ctx, 31, 0x131668u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131660u, 0x131668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131668u;
label_131668:
    // 0x131668: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x131668u;
    {
        const bool branch_taken_0x131668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131668) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131670u;
label_131670:
    // 0x131670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131674: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131678: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13167c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x13167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x131680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131688: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131688u;
    SET_GPR_U32(ctx, 31, 0x131690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131688u, 0x131690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131690u;
label_131690:
    // 0x131690: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131690u;
    {
        const bool branch_taken_0x131690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131690) {
            ctx->pc = 0x1316B8u;
            goto label_1316b8;
        }
    }
    ctx->pc = 0x131698u;
label_131698:
    // 0x131698: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13169c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13169cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1316a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1316a4: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1316a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1316a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1316a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1316ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1316acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1316b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1316B0u;
    SET_GPR_U32(ctx, 31, 0x1316B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1316B0u, 0x1316B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316B8u;
label_1316b8:
    // 0x1316b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1316b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316bc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1316bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1316c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1316c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1316c4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1316c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1316c8:
    // 0x1316c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316cc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1316ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1316d0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1316D0u;
    SET_GPR_U32(ctx, 31, 0x1316D8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1316D0u, 0x1316D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316D8u;
label_1316d8:
    // 0x1316d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316dc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1316DCu;
    SET_GPR_U32(ctx, 31, 0x1316E4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1316DCu, 0x1316E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316E4u;
label_1316e4:
    // 0x1316e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1316e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1316ec: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1316ECu;
    SET_GPR_U32(ctx, 31, 0x1316F4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1316ECu, 0x1316F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1316F4u;
label_1316f4:
    // 0x1316f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1316f8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1316F8u;
    SET_GPR_U32(ctx, 31, 0x131700u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1316F8u, 0x131700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131700u;
label_131700:
    // 0x131700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131704: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131708: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131708u;
    {
        const bool branch_taken_0x131708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131708) {
            ctx->pc = 0x13174Cu;
            goto label_13174c;
        }
    }
    ctx->pc = 0x131710u;
    // 0x131710: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x13171c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x13171cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131720: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131724: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131724u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131728: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13172c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x13172cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131730: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131734: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13173c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x13173cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131740: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131744: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131744u;
    {
        const bool branch_taken_0x131744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131744) {
            ctx->pc = 0x13174Cu;
            goto label_13174c;
        }
    }
    ctx->pc = 0x13174Cu;
label_13174c:
    // 0x13174c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x13174cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131754: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131754u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131758: 0x3e00008  jr          $ra
    ctx->pc = 0x131758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131760u;
}
