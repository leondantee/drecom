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

// Function: Om87_R1_dm01
// Address: 0x362760 - 0x3628ec
void Om87_R1_dm01_0x362760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om87_R1_dm01_0x362760");
#endif

    switch (ctx->pc) {
        case 0x3627b8u: goto label_3627b8;
        case 0x3627f0u: goto label_3627f0;
        case 0x362810u: goto label_362810;
        case 0x362894u: goto label_362894;
        case 0x3628a0u: goto label_3628a0;
        default: break;
    }

    ctx->pc = 0x362760u;

    // 0x362760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x362764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x362764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x362768: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x362768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x36276c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36276cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x362770: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x362770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
    // 0x362774: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x362774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x362778: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x362778u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AACF0u));
    // 0x36277c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x36277cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x362780: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x362780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362784: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x362784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x362788: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x362788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x36278c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36278cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362790: 0x10830032  beq         $a0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x362790u;
    {
        const bool branch_taken_0x362790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x362790) {
            ctx->pc = 0x36285Cu;
            goto label_36285c;
        }
    }
    ctx->pc = 0x362798u;
    // 0x362798: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x362798u;
    {
        const bool branch_taken_0x362798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x362798) {
            ctx->pc = 0x3627A8u;
            goto label_3627a8;
        }
    }
    ctx->pc = 0x3627A0u;
    // 0x3627a0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3627A0u;
    {
        const bool branch_taken_0x3627a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3627a0) {
            ctx->pc = 0x3628DCu;
            goto label_3628dc;
        }
    }
    ctx->pc = 0x3627A8u;
label_3627a8:
    // 0x3627a8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3627a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627ac: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x3627acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3627b0: 0xc0d85c4  jal         func_361710
    ctx->pc = 0x3627B0u;
    SET_GPR_U32(ctx, 31, 0x3627B8u);
    ctx->pc = 0x361710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361710u, 0x3627B0u, 0x3627B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627B8u;
label_3627b8:
    // 0x3627b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3627b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627bc: 0x8c640368  lw          $a0, 0x368($v1)
    ctx->pc = 0x3627bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x3627c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3627c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3627c4: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3627C4u;
    {
        const bool branch_taken_0x3627c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3627c4) {
            ctx->pc = 0x362818u;
            goto label_362818;
        }
    }
    ctx->pc = 0x3627CCu;
    // 0x3627cc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x3627ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x3627d0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3627d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3627d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3627d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3627d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3627d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627dc: 0x2404042a  addiu       $a0, $zero, 0x42A
    ctx->pc = 0x3627dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1066));
    // 0x3627e0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x3627e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3627e4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3627e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3627e8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x3627E8u;
    SET_GPR_U32(ctx, 31, 0x3627F0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x3627E8u, 0x3627F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627F0u;
label_3627f0:
    // 0x3627f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3627f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3627f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3627f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3627f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3627fc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3627fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x362800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x362804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x362808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x362808u;
    SET_GPR_U32(ctx, 31, 0x362810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x362808u, 0x362810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362810u;
label_362810:
    // 0x362810: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x362810u;
    {
        const bool branch_taken_0x362810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362810) {
            ctx->pc = 0x36284Cu;
            goto label_36284c;
        }
    }
    ctx->pc = 0x362818u;
label_362818:
    // 0x362818: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x362818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36281c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36281cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362820: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x362820u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x362824: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x362824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362828: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x362828u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36282c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36282cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362830: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x362830u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362834: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x362834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362838: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x362838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36283c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36283cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362840: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x362840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x362844: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x362844u;
    {
        const bool branch_taken_0x362844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362844) {
            ctx->pc = 0x3628DCu;
            goto label_3628dc;
        }
    }
    ctx->pc = 0x36284Cu;
label_36284c:
    // 0x36284c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362850: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x362850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x362854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x362854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x362858: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x362858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_36285c:
    // 0x36285c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x36285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362860: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x362860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x362864: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x362864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x362868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x362868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36286c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36286Cu;
    {
        const bool branch_taken_0x36286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36286c) {
            ctx->pc = 0x362888u;
            goto label_362888;
        }
    }
    ctx->pc = 0x362874u;
    // 0x362874: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362878: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x362878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x36287c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x36287cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x362880: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x362880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x362884: 0xac82133c  sw          $v0, 0x133C($a0)
    ctx->pc = 0x362884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4924), GPR_U32(ctx, 2));
label_362888:
    // 0x362888: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36288c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36288Cu;
    SET_GPR_U32(ctx, 31, 0x362894u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36288Cu, 0x362894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362894u;
label_362894:
    // 0x362894: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x362894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x362898: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x362898u;
    SET_GPR_U32(ctx, 31, 0x3628A0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x362898u, 0x3628A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628A0u;
label_3628a0:
    // 0x3628a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628a4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3628a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3628a8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3628A8u;
    {
        const bool branch_taken_0x3628a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3628a8) {
            ctx->pc = 0x3628DCu;
            goto label_3628dc;
        }
    }
    ctx->pc = 0x3628B0u;
    // 0x3628b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3628b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3628b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3628b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3628bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628c0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3628c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3628c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3628d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3628d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3628d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3628d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3628d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3628dc:
    // 0x3628dc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3628dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3628e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3628e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3628e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3628E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3628E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3628ECu;
}
