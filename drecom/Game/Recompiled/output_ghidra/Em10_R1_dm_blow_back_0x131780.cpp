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

// Function: Em10_R1_dm_blow_back
// Address: 0x131780 - 0x131b50
void Em10_R1_dm_blow_back_0x131780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_dm_blow_back_0x131780");
#endif

    switch (ctx->pc) {
        case 0x1317e0u: goto label_1317e0;
        case 0x131838u: goto label_131838;
        case 0x131868u: goto label_131868;
        case 0x131898u: goto label_131898;
        case 0x1318c8u: goto label_1318c8;
        case 0x131908u: goto label_131908;
        case 0x131914u: goto label_131914;
        case 0x131924u: goto label_131924;
        case 0x13193cu: goto label_13193c;
        case 0x1319a4u: goto label_1319a4;
        case 0x1319d4u: goto label_1319d4;
        case 0x131a30u: goto label_131a30;
        case 0x131a58u: goto label_131a58;
        case 0x131a80u: goto label_131a80;
        case 0x131aa8u: goto label_131aa8;
        case 0x131ac8u: goto label_131ac8;
        case 0x131ad4u: goto label_131ad4;
        case 0x131ae4u: goto label_131ae4;
        case 0x131af0u: goto label_131af0;
        default: break;
    }

    ctx->pc = 0x131780u;

    // 0x131780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x131784: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x131784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x131788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13178c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x13178cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x131790: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131794: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x131794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x131798: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13179c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x13179cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1317a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1317a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1317a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1317a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1317a8: 0x108300c3  beq         $a0, $v1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1317A8u;
    {
        const bool branch_taken_0x1317a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1317a8) {
            ctx->pc = 0x131AB8u;
            goto label_131ab8;
        }
    }
    ctx->pc = 0x1317B0u;
    // 0x1317b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1317b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1317b4: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x1317B4u;
    {
        const bool branch_taken_0x1317b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1317b4) {
            ctx->pc = 0x1319CCu;
            goto label_1319cc;
        }
    }
    ctx->pc = 0x1317BCu;
    // 0x1317bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1317bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1317c0: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1317C0u;
    {
        const bool branch_taken_0x1317c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1317c0) {
            ctx->pc = 0x1318F8u;
            goto label_1318f8;
        }
    }
    ctx->pc = 0x1317C8u;
    // 0x1317c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1317C8u;
    {
        const bool branch_taken_0x1317c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317c8) {
            ctx->pc = 0x1317D8u;
            goto label_1317d8;
        }
    }
    ctx->pc = 0x1317D0u;
    // 0x1317d0: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x1317D0u;
    {
        const bool branch_taken_0x1317d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317d0) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x1317D8u;
label_1317d8:
    // 0x1317d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1317D8u;
    SET_GPR_U32(ctx, 31, 0x1317E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1317D8u, 0x1317E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317E0u;
label_1317e0:
    // 0x1317e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1317e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1317e4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1317e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1317e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1317e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1317ec: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1317ECu;
    {
        const bool branch_taken_0x1317ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1317ec) {
            ctx->pc = 0x131870u;
            goto label_131870;
        }
    }
    ctx->pc = 0x1317F4u;
    // 0x1317f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1317f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1317f8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1317F8u;
    {
        const bool branch_taken_0x1317f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1317f8) {
            ctx->pc = 0x131840u;
            goto label_131840;
        }
    }
    ctx->pc = 0x131800u;
    // 0x131800: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131800u;
    {
        const bool branch_taken_0x131800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131800) {
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x131808u;
    // 0x131808: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131808u;
    {
        const bool branch_taken_0x131808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131808) {
            ctx->pc = 0x131810u;
            goto label_131810;
        }
    }
    ctx->pc = 0x131810u;
label_131810:
    // 0x131810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131814: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131818: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13181c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13181cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131820: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131824: 0x24040507  addiu       $a0, $zero, 0x507
    ctx->pc = 0x131824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x131828: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13182c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13182cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131830: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131830u;
    SET_GPR_U32(ctx, 31, 0x131838u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131830u, 0x131838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131838u;
label_131838:
    // 0x131838: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x131838u;
    {
        const bool branch_taken_0x131838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131838) {
            ctx->pc = 0x131898u;
            goto label_131898;
        }
    }
    ctx->pc = 0x131840u;
label_131840:
    // 0x131840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131844: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131848: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13184c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13184cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131850: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131854: 0x24040508  addiu       $a0, $zero, 0x508
    ctx->pc = 0x131854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    // 0x131858: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13185c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13185cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131860: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131860u;
    SET_GPR_U32(ctx, 31, 0x131868u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131860u, 0x131868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131868u;
label_131868:
    // 0x131868: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x131868u;
    {
        const bool branch_taken_0x131868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131868) {
            ctx->pc = 0x131898u;
            goto label_131898;
        }
    }
    ctx->pc = 0x131870u;
label_131870:
    // 0x131870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131874: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x131874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x131878: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x131878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x13187c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x13187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x131880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x131880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x131884: 0x24040509  addiu       $a0, $zero, 0x509
    ctx->pc = 0x131884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1289));
    // 0x131888: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x131888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x13188c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x13188cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131890: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x131890u;
    SET_GPR_U32(ctx, 31, 0x131898u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x131890u, 0x131898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131898u;
label_131898:
    // 0x131898: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13189c: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x13189cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1318a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318a4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1318a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1318a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1318acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1318b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1318b4: 0x2406031e  addiu       $a2, $zero, 0x31E
    ctx->pc = 0x1318b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 798));
    // 0x1318b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1318b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1318bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1318bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1318c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1318C0u;
    SET_GPR_U32(ctx, 31, 0x1318C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1318C0u, 0x1318C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1318C8u;
label_1318c8:
    // 0x1318c8: 0x3c02c2b4  lui         $v0, 0xC2B4
    ctx->pc = 0x1318c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49844 << 16));
    // 0x1318cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1318ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1318d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318d4: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1318d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1318d8: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1318d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1318dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1318dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1318e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1318e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318e4: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1318e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1318e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1318ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1318f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1318f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1318f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1318f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1318f8:
    // 0x1318f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1318f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1318fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1318fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131900: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131900u;
    SET_GPR_U32(ctx, 31, 0x131908u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131900u, 0x131908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131908u;
label_131908:
    // 0x131908: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13190c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x13190Cu;
    SET_GPR_U32(ctx, 31, 0x131914u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x13190Cu, 0x131914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131914u;
label_131914:
    // 0x131914: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131918: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13191c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x13191Cu;
    SET_GPR_U32(ctx, 31, 0x131924u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x13191Cu, 0x131924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131924u;
label_131924:
    // 0x131924: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131928: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13192c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x13192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x131930: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x131930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x131934: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x131934u;
    SET_GPR_U32(ctx, 31, 0x13193Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x131934u, 0x13193Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13193Cu;
label_13193c:
    // 0x13193c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13193cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x131940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131944: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131948: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13194c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13194cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x131950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x131954: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x131958: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13195c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x13195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131960: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131964: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x131964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131968: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x131968u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x13196c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x13196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x131970: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131974: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x131974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131978: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x131978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13197c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13197cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131980: 0x0  nop
    ctx->pc = 0x131980u;
    // NOP
    // 0x131984: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x131984u;
    {
        const bool branch_taken_0x131984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131984) {
            ctx->pc = 0x131998u;
            goto label_131998;
        }
    }
    ctx->pc = 0x13198Cu;
    // 0x13198c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x13198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131994: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x131994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_131998:
    // 0x131998: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13199c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13199Cu;
    SET_GPR_U32(ctx, 31, 0x1319A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13199Cu, 0x1319A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319A4u;
label_1319a4:
    // 0x1319a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1319a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1319a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1319a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1319ac: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x1319ACu;
    {
        const bool branch_taken_0x1319ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319ac) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x1319B4u;
    // 0x1319b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1319b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1319b8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1319b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1319bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1319bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1319c0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1319c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1319c4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1319C4u;
    {
        const bool branch_taken_0x1319c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319c4) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x1319CCu;
label_1319cc:
    // 0x1319cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1319CCu;
    SET_GPR_U32(ctx, 31, 0x1319D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1319CCu, 0x1319D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319D4u;
label_1319d4:
    // 0x1319d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1319d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1319d8: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1319d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1319dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1319dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1319e0: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1319E0u;
    {
        const bool branch_taken_0x1319e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319e0) {
            ctx->pc = 0x131A88u;
            goto label_131a88;
        }
    }
    ctx->pc = 0x1319E8u;
    // 0x1319e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1319e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1319ec: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1319ECu;
    {
        const bool branch_taken_0x1319ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319ec) {
            ctx->pc = 0x131A60u;
            goto label_131a60;
        }
    }
    ctx->pc = 0x1319F4u;
    // 0x1319f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1319f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1319f8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1319F8u;
    {
        const bool branch_taken_0x1319f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1319f8) {
            ctx->pc = 0x131A38u;
            goto label_131a38;
        }
    }
    ctx->pc = 0x131A00u;
    // 0x131a00: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x131A00u;
    {
        const bool branch_taken_0x131a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a00) {
            ctx->pc = 0x131A10u;
            goto label_131a10;
        }
    }
    ctx->pc = 0x131A08u;
    // 0x131a08: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x131A08u;
    {
        const bool branch_taken_0x131a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a08) {
            ctx->pc = 0x131AA8u;
            goto label_131aa8;
        }
    }
    ctx->pc = 0x131A10u;
label_131a10:
    // 0x131a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a1c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x131a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131a28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131A28u;
    SET_GPR_U32(ctx, 31, 0x131A30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131A28u, 0x131A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A30u;
label_131a30:
    // 0x131a30: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x131A30u;
    {
        const bool branch_taken_0x131a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a30) {
            ctx->pc = 0x131AA8u;
            goto label_131aa8;
        }
    }
    ctx->pc = 0x131A38u;
label_131a38:
    // 0x131a38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a44: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x131a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x131a48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131a50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131A50u;
    SET_GPR_U32(ctx, 31, 0x131A58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131A50u, 0x131A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A58u;
label_131a58:
    // 0x131a58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x131A58u;
    {
        const bool branch_taken_0x131a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a58) {
            ctx->pc = 0x131AA8u;
            goto label_131aa8;
        }
    }
    ctx->pc = 0x131A60u;
label_131a60:
    // 0x131a60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a6c: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x131a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x131a70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131a78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131A78u;
    SET_GPR_U32(ctx, 31, 0x131A80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131A78u, 0x131A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A80u;
label_131a80:
    // 0x131a80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131A80u;
    {
        const bool branch_taken_0x131a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a80) {
            ctx->pc = 0x131AA8u;
            goto label_131aa8;
        }
    }
    ctx->pc = 0x131A88u;
label_131a88:
    // 0x131a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a90: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a94: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x131a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x131a98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a9c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131aa0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131AA0u;
    SET_GPR_U32(ctx, 31, 0x131AA8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131AA0u, 0x131AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AA8u;
label_131aa8:
    // 0x131aa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131aac: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x131aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x131ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x131ab4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_131ab8:
    // 0x131ab8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131ac0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131AC0u;
    SET_GPR_U32(ctx, 31, 0x131AC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131AC0u, 0x131AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AC8u;
label_131ac8:
    // 0x131ac8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131acc: 0xc05cd10  jal         func_173440
    ctx->pc = 0x131ACCu;
    SET_GPR_U32(ctx, 31, 0x131AD4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131ACCu, 0x131AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AD4u;
label_131ad4:
    // 0x131ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x131ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x131adc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131ADCu;
    SET_GPR_U32(ctx, 31, 0x131AE4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131ADCu, 0x131AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AE4u;
label_131ae4:
    // 0x131ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131ae8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x131AE8u;
    SET_GPR_U32(ctx, 31, 0x131AF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x131AE8u, 0x131AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131AF0u;
label_131af0:
    // 0x131af0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131af4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x131af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x131af8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x131AF8u;
    {
        const bool branch_taken_0x131af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x131af8) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x131B00u;
    // 0x131b00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x131b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b08: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x131b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x131b0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x131b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131b10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b14: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x131b14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x131b18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b1c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x131b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b20: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b24: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x131b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x131b28: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x131b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131b2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x131b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x131b30: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x131b30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x131b34: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x131B34u;
    {
        const bool branch_taken_0x131b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b34) {
            ctx->pc = 0x131B3Cu;
            goto label_131b3c;
        }
    }
    ctx->pc = 0x131B3Cu;
label_131b3c:
    // 0x131b3c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x131b3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131b40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131b44: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131b48: 0x3e00008  jr          $ra
    ctx->pc = 0x131B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B50u;
}
