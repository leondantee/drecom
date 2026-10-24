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

// Function: Em10_R1_threat
// Address: 0x12f830 - 0x12fda0
void Em10_R1_threat_0x12f830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_threat_0x12f830");
#endif

    switch (ctx->pc) {
        case 0x12f880u: goto label_12f880;
        case 0x12f8d8u: goto label_12f8d8;
        case 0x12f908u: goto label_12f908;
        case 0x12f938u: goto label_12f938;
        case 0x12f984u: goto label_12f984;
        case 0x12fa04u: goto label_12fa04;
        case 0x12fa20u: goto label_12fa20;
        case 0x12fa38u: goto label_12fa38;
        case 0x12fa6cu: goto label_12fa6c;
        case 0x12fa84u: goto label_12fa84;
        case 0x12fa90u: goto label_12fa90;
        case 0x12faa4u: goto label_12faa4;
        case 0x12fab4u: goto label_12fab4;
        case 0x12fac0u: goto label_12fac0;
        case 0x12fad8u: goto label_12fad8;
        case 0x12fafcu: goto label_12fafc;
        case 0x12fb6cu: goto label_12fb6c;
        case 0x12fb7cu: goto label_12fb7c;
        case 0x12fc90u: goto label_12fc90;
        case 0x12fcd4u: goto label_12fcd4;
        case 0x12fce8u: goto label_12fce8;
        default: break;
    }

    ctx->pc = 0x12f830u;

    // 0x12f830: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12f834: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x12f834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x12f838: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12f838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12f83c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f844: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x12f844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x12f848: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12f848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f84c: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x12f850: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f854: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x12f854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f858: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x12f858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12f85c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f860: 0x1083005d  beq         $a0, $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x12F860u;
    {
        const bool branch_taken_0x12f860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12f860) {
            ctx->pc = 0x12F9D8u;
            goto label_12f9d8;
        }
    }
    ctx->pc = 0x12F868u;
    // 0x12f868: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F868u;
    {
        const bool branch_taken_0x12f868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f868) {
            ctx->pc = 0x12F878u;
            goto label_12f878;
        }
    }
    ctx->pc = 0x12F870u;
    // 0x12f870: 0x10000144  b           . + 4 + (0x144 << 2)
    ctx->pc = 0x12F870u;
    {
        const bool branch_taken_0x12f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f870) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12F878u;
label_12f878:
    // 0x12f878: 0xc067694  jal         func_19DA50
    ctx->pc = 0x12F878u;
    SET_GPR_U32(ctx, 31, 0x12F880u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x12F878u, 0x12F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F880u;
label_12f880:
    // 0x12f880: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12f880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12f884: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x12f884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x12f888: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f88c: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x12F88Cu;
    {
        const bool branch_taken_0x12f88c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f88c) {
            ctx->pc = 0x12F910u;
            goto label_12f910;
        }
    }
    ctx->pc = 0x12F894u;
    // 0x12f894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f898: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F898u;
    {
        const bool branch_taken_0x12f898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12f898) {
            ctx->pc = 0x12F8E0u;
            goto label_12f8e0;
        }
    }
    ctx->pc = 0x12F8A0u;
    // 0x12f8a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F8A0u;
    {
        const bool branch_taken_0x12f8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8a0) {
            ctx->pc = 0x12F8B0u;
            goto label_12f8b0;
        }
    }
    ctx->pc = 0x12F8A8u;
    // 0x12f8a8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12F8A8u;
    {
        const bool branch_taken_0x12f8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8a8) {
            ctx->pc = 0x12F8B0u;
            goto label_12f8b0;
        }
    }
    ctx->pc = 0x12F8B0u;
label_12f8b0:
    // 0x12f8b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f8b4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f8b8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f8bc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f8c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f8c4: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x12f8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12f8c8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f8cc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f8ccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f8d0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F8D0u;
    SET_GPR_U32(ctx, 31, 0x12F8D8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F8D0u, 0x12F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F8D8u;
label_12f8d8:
    // 0x12f8d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12F8D8u;
    {
        const bool branch_taken_0x12f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f8d8) {
            ctx->pc = 0x12F938u;
            goto label_12f938;
        }
    }
    ctx->pc = 0x12F8E0u;
label_12f8e0:
    // 0x12f8e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f8e4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f8e8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f8ec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f8f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f8f4: 0x24040505  addiu       $a0, $zero, 0x505
    ctx->pc = 0x12f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x12f8f8: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f8fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f8fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f900: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F900u;
    SET_GPR_U32(ctx, 31, 0x12F908u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F900u, 0x12F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F908u;
label_12f908:
    // 0x12f908: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12F908u;
    {
        const bool branch_taken_0x12f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f908) {
            ctx->pc = 0x12F938u;
            goto label_12f938;
        }
    }
    ctx->pc = 0x12F910u;
label_12f910:
    // 0x12f910: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f914: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12f914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12f918: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12f918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12f91c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12f91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12f920: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12f920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f924: 0x24040506  addiu       $a0, $zero, 0x506
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x12f928: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12f928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12f92c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12f92cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12f930: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12F930u;
    SET_GPR_U32(ctx, 31, 0x12F938u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12F930u, 0x12F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F938u;
label_12f938:
    // 0x12f938: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f93c: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12f93cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12f940: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f944: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12f948: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f94c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F94Cu;
    {
        const bool branch_taken_0x12f94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f94c) {
            ctx->pc = 0x12F960u;
            goto label_12f960;
        }
    }
    ctx->pc = 0x12F954u;
    // 0x12f954: 0x2411003d  addiu       $s1, $zero, 0x3D
    ctx->pc = 0x12f954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x12f958: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F964u;
            goto label_12f964;
        }
    }
    ctx->pc = 0x12F960u;
label_12f960:
    // 0x12f960: 0x2411003c  addiu       $s1, $zero, 0x3C
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_12f964:
    // 0x12f964: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f968: 0x36263c00  ori         $a2, $s1, 0x3C00
    ctx->pc = 0x12f968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)15360);
    // 0x12f96c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f970: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12f970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12f974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f978: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12f978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12f97c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12F97Cu;
    SET_GPR_U32(ctx, 31, 0x12F984u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12F97Cu, 0x12F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F984u;
label_12f984:
    // 0x12f984: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f988: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x12f988u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f98c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f990: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x12f990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12f994: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12f994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x12f998: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x12f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x12f99c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f9a0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F9A0u;
    {
        const bool branch_taken_0x12f9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x12f9a0) {
            ctx->pc = 0x12F9BCu;
            goto label_12f9bc;
        }
    }
    ctx->pc = 0x12F9A8u;
    // 0x12f9a8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12f9ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9b0: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x12f9b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x12f9b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F9B4u;
    {
        const bool branch_taken_0x12f9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12f9b4) {
            ctx->pc = 0x12F9C8u;
            goto label_12f9c8;
        }
    }
    ctx->pc = 0x12F9BCu;
label_12f9bc:
    // 0x12f9bc: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x12f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x12f9c0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9c4: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x12f9c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_12f9c8:
    // 0x12f9c8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9cc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12f9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12f9d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12f9d4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12f9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_12f9d8:
    // 0x12f9d8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x12f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x12f9dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x12f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x12f9e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x12f9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12f9e4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9ec: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12f9f0: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x12f9f4: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x12f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12f9f8: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x12f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x12f9fc: 0xc05c848  jal         func_172120
    ctx->pc = 0x12F9FCu;
    SET_GPR_U32(ctx, 31, 0x12FA04u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x12F9FCu, 0x12FA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA04u;
label_12fa04:
    // 0x12fa04: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x12fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x12fa08: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa0c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x12fa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa10: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x12fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa14: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x12fa14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12fa18: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x12FA18u;
    SET_GPR_U32(ctx, 31, 0x12FA20u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x12FA18u, 0x12FA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA20u;
label_12fa20:
    // 0x12fa20: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa24: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x12fa24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x12fa28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12fa30: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12FA30u;
    SET_GPR_U32(ctx, 31, 0x12FA38u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12FA30u, 0x12FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa40: 0xc4610180  lwc1        $f1, 0x180($v1)
    ctx->pc = 0x12fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa44: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x12fa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa48: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12fa48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fa4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa54: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x12fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa58: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x12fa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fa5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fa60: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12fa60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12fa64: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12FA64u;
    SET_GPR_U32(ctx, 31, 0x12FA6Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12FA64u, 0x12FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA6Cu;
label_12fa6c:
    // 0x12fa6c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12fa6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12fa70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fa78: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fa7c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12FA7Cu;
    SET_GPR_U32(ctx, 31, 0x12FA84u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FA84u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FA84u) { return; }
    ctx->pc = 0x12FA84u;
label_12fa84:
    // 0x12fa84: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa88: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12FA88u;
    SET_GPR_U32(ctx, 31, 0x12FA90u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12FA88u, 0x12FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA90u;
label_12fa90:
    // 0x12fa90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fa94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fa98: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fa9c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x12FA9Cu;
    SET_GPR_U32(ctx, 31, 0x12FAA4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x12FAA4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x12FAA4u) { return; }
    ctx->pc = 0x12FAA4u;
label_12faa4:
    // 0x12faa4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12faa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12faa8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12faac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12FAACu;
    SET_GPR_U32(ctx, 31, 0x12FAB4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12FAACu, 0x12FAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAB4u;
label_12fab4:
    // 0x12fab4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fab8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12FAB8u;
    SET_GPR_U32(ctx, 31, 0x12FAC0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12FAB8u, 0x12FAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAC0u;
label_12fac0:
    // 0x12fac0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fac4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12fac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fac8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12facc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fad0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12FAD0u;
    SET_GPR_U32(ctx, 31, 0x12FAD8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12FAD0u, 0x12FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAD8u;
label_12fad8:
    // 0x12fad8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x12fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fadc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x12fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fae0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x12fae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fae4: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x12fae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fae8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x12fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12faec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12faecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12faf0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x12faf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12faf4: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x12FAF4u;
    SET_GPR_U32(ctx, 31, 0x12FAFCu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x12FAF4u, 0x12FAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAFCu;
label_12fafc:
    // 0x12fafc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12fafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x12fb00: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x12fb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fb04: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x12fb08: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x12fb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x12fb0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x12fb0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12fb10: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x12fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x12fb14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12fb18: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x12fb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb1c: 0x0  nop
    ctx->pc = 0x12fb1cu;
    // NOP
    // 0x12fb20: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x12FB20u;
    {
        const bool branch_taken_0x12fb20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fb20) {
            ctx->pc = 0x12FBBCu;
            goto label_12fbbc;
        }
    }
    ctx->pc = 0x12FB28u;
    // 0x12fb28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb2c: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x12fb2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x12fb30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12fb34: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x12fb34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fb38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x12fb3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12fb40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x12fb40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x12fb44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x12fb44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x12fb48: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x12fb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x12fb4c: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x12FB4Cu;
    {
        const bool branch_taken_0x12fb4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fb4c) {
            ctx->pc = 0x12FBBCu;
            goto label_12fbbc;
        }
    }
    ctx->pc = 0x12FB54u;
    // 0x12fb54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb58: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x12fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fb5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fb60: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12fb64: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x12FB64u;
    SET_GPR_U32(ctx, 31, 0x12FB6Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x12FB64u, 0x12FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB6Cu;
label_12fb6c:
    // 0x12fb6c: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x12fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fb70: 0xc7ad0058  lwc1        $f13, 0x58($sp)
    ctx->pc = 0x12fb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12fb74: 0xc0455e6  jal         func_115798
    ctx->pc = 0x12FB74u;
    SET_GPR_U32(ctx, 31, 0x12FB7Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x12FB74u, 0x12FB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FB7Cu;
label_12fb7c:
    // 0x12fb7c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb80: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x12fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x12fb84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x12fb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fb88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb8c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fb90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x12fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fb94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fb98: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fb9c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fba0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fba4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fba8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fba8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fbac: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbb0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fbb4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x12FBB4u;
    {
        const bool branch_taken_0x12fbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fbb4) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FBBCu;
label_12fbbc:
    // 0x12fbbc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbc0: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fbc4: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x12fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x12fbc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fbc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fbcc: 0x0  nop
    ctx->pc = 0x12fbccu;
    // NOP
    // 0x12fbd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fbd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fbd4: 0x0  nop
    ctx->pc = 0x12fbd4u;
    // NOP
    // 0x12fbd8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x12FBD8u;
    {
        const bool branch_taken_0x12fbd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fbd8) {
            ctx->pc = 0x12FC28u;
            goto label_12fc28;
        }
    }
    ctx->pc = 0x12FBE0u;
    // 0x12fbe0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12fbe4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x12fbe8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12fbec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fbf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fbf4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fbf8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fbfc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc00: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fc00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fc04: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc08: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fc08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fc0c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc10: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fc10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fc14: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fc1c: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12fc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fc20: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x12FC20u;
    {
        const bool branch_taken_0x12fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fc20) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FC28u;
label_12fc28:
    // 0x12fc28: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc2c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x12fc2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x12fc30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fc34: 0xa483127a  sh          $v1, 0x127A($a0)
    ctx->pc = 0x12fc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x12fc38: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc3c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x12fc3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x12fc40: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x12FC40u;
    {
        const bool branch_taken_0x12fc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fc40) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FC48u;
    // 0x12fc48: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc4c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x12fc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fc50: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x12fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x12fc54: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x12fc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x12fc58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12fc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12fc5c: 0x0  nop
    ctx->pc = 0x12fc5cu;
    // NOP
    // 0x12fc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12fc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fc64: 0x0  nop
    ctx->pc = 0x12fc64u;
    // NOP
    // 0x12fc68: 0x45000034  bc1f        . + 4 + (0x34 << 2)
    ctx->pc = 0x12FC68u;
    {
        const bool branch_taken_0x12fc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12fc68) {
            ctx->pc = 0x12FD3Cu;
            goto label_12fd3c;
        }
    }
    ctx->pc = 0x12FC70u;
    // 0x12fc70: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc74: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x12fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fc78: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x12fc7c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12fc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12fc80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12fc84: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12fc88: 0xc05cc90  jal         func_173240
    ctx->pc = 0x12FC88u;
    SET_GPR_U32(ctx, 31, 0x12FC90u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x12FC88u, 0x12FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FC90u;
label_12fc90:
    // 0x12fc90: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x12fc90u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12fc94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fc98: 0x1243000b  beq         $s2, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x12FC98u;
    {
        const bool branch_taken_0x12fc98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fc98) {
            ctx->pc = 0x12FCC8u;
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FCA0u;
    // 0x12fca0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fca4: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FCA4u;
    {
        const bool branch_taken_0x12fca4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fca4) {
            ctx->pc = 0x12FCC8u;
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FCACu;
    // 0x12fcac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fcb0: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCB0u;
    {
        const bool branch_taken_0x12fcb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fcb0) {
            ctx->pc = 0x12FCC8u;
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FCB8u;
    // 0x12fcb8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FCB8u;
    {
        const bool branch_taken_0x12fcb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcb8) {
            ctx->pc = 0x12FCC8u;
            goto label_12fcc8;
        }
    }
    ctx->pc = 0x12FCC0u;
    // 0x12fcc0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FCC0u;
    {
        const bool branch_taken_0x12fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fcc0) {
            ctx->pc = 0x12FD3Cu;
            goto label_12fd3c;
        }
    }
    ctx->pc = 0x12FCC8u;
label_12fcc8:
    // 0x12fcc8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fccc: 0xc05cdd8  jal         func_173760
    ctx->pc = 0x12FCCCu;
    SET_GPR_U32(ctx, 31, 0x12FCD4u);
    ctx->pc = 0x173760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173760u, 0x12FCCCu, 0x12FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCD4u;
label_12fcd4:
    // 0x12fcd4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x12FCD4u;
    {
        const bool branch_taken_0x12fcd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fcd4) {
            ctx->pc = 0x12FD3Cu;
            goto label_12fd3c;
        }
    }
    ctx->pc = 0x12FCDCu;
    // 0x12fcdc: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fce0: 0xc04d8bc  jal         func_1362F0
    ctx->pc = 0x12FCE0u;
    SET_GPR_U32(ctx, 31, 0x12FCE8u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x12FCE0u, 0x12FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE8u;
label_12fce8:
    // 0x12fce8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12FCE8u;
    {
        const bool branch_taken_0x12fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fce8) {
            ctx->pc = 0x12FD3Cu;
            goto label_12fd3c;
        }
    }
    ctx->pc = 0x12FCF0u;
    // 0x12fcf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fcf4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fcf8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fcfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12fd00: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd04: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fd04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd0c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd10: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd14: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fd14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd18: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd1c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fd20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x12fd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd24: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x12fd28: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12fd2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x12fd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x12fd30: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x12fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x12fd34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12FD34u;
    {
        const bool branch_taken_0x12fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd34) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FD3Cu;
label_12fd3c:
    // 0x12fd3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12fd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fd40: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12fd44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd48: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12fd4c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd50: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12fd50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12fd54: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd58: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12fd58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd5c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd60: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12fd60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fd64: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12fd68: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12fd6c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x12fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x12fd70: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x12fd70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x12fd74: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x12fd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x12fd78: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12fd78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12fd7c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x12FD7Cu;
    {
        const bool branch_taken_0x12fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fd7c) {
            ctx->pc = 0x12FD84u;
            goto label_12fd84;
        }
    }
    ctx->pc = 0x12FD84u;
label_12fd84:
    // 0x12fd84: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x12fd84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fd88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12fd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fd8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12fd8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fd90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12fd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd94: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x12fd94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12fd98: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FDA0u;
}
