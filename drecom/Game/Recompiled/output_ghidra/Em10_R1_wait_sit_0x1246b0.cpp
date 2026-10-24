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

// Function: Em10_R1_wait_sit
// Address: 0x1246b0 - 0x124a70
void Em10_R1_wait_sit_0x1246b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_wait_sit_0x1246b0");
#endif

    switch (ctx->pc) {
        case 0x12474cu: goto label_12474c;
        case 0x124774u: goto label_124774;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247f4u: goto label_1247f4;
        case 0x124804u: goto label_124804;
        case 0x124810u: goto label_124810;
        case 0x124840u: goto label_124840;
        case 0x1248e4u: goto label_1248e4;
        case 0x12493cu: goto label_12493c;
        case 0x124964u: goto label_124964;
        case 0x124998u: goto label_124998;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249b4u: goto label_1249b4;
        case 0x1249c0u: goto label_1249c0;
        default: break;
    }

    ctx->pc = 0x1246b0u;

    // 0x1246b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1246b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1246b4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1246b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1246b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1246b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1246bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1246bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1246c0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1246c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1246c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1246c8: 0x24711330  addiu       $s1, $v1, 0x1330
    ctx->pc = 0x1246c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1246cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1246d0: 0x247010b0  addiu       $s0, $v1, 0x10B0
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x1246d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1246d8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1246d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1246dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1246dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1246e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1246e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1246e4: 0x108300a8  beq         $a0, $v1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1246E4u;
    {
        const bool branch_taken_0x1246e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1246e4) {
            ctx->pc = 0x124988u;
            goto label_124988;
        }
    }
    ctx->pc = 0x1246ECu;
    // 0x1246ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1246ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1246f0: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1246F0u;
    {
        const bool branch_taken_0x1246f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1246f0) {
            ctx->pc = 0x124904u;
            goto label_124904;
        }
    }
    ctx->pc = 0x1246F8u;
    // 0x1246f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1246fc: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1246FCu;
    {
        const bool branch_taken_0x1246fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1246fc) {
            ctx->pc = 0x124784u;
            goto label_124784;
        }
    }
    ctx->pc = 0x124704u;
    // 0x124704: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124704u;
    {
        const bool branch_taken_0x124704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124704) {
            ctx->pc = 0x124714u;
            goto label_124714;
        }
    }
    ctx->pc = 0x12470Cu;
    // 0x12470c: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x12470Cu;
    {
        const bool branch_taken_0x12470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12470c) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124714u;
label_124714:
    // 0x124714: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124718: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124718u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12471c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124720: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124724u;
    {
        const bool branch_taken_0x124724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124724) {
            ctx->pc = 0x124754u;
            goto label_124754;
        }
    }
    ctx->pc = 0x12472Cu;
    // 0x12472c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124730: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124734: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124738: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x124738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12473c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x12473cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124740: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124744: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124744u;
    SET_GPR_U32(ctx, 31, 0x12474Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124744u, 0x12474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12474Cu;
label_12474c:
    // 0x12474c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12474c) {
            ctx->pc = 0x124774u;
            goto label_124774;
        }
    }
    ctx->pc = 0x124754u;
label_124754:
    // 0x124754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124758: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12475c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124760: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x124760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x124764: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x124764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124768: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12476c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12476Cu;
    SET_GPR_U32(ctx, 31, 0x124774u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12476Cu, 0x124774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124774u;
label_124774:
    // 0x124774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124778: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x124778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12477c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124780: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124780u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124784:
    // 0x124784: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124788: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x124788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12478c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12478cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x124790: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x124790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x124794: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x124794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x124798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x124798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12479c: 0x0  nop
    ctx->pc = 0x12479cu;
    // NOP
    // 0x1247a0: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x1247a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x1247a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247a8: 0x0  nop
    ctx->pc = 0x1247a8u;
    // NOP
    // 0x1247ac: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1247acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1247b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247b4: 0x0  nop
    ctx->pc = 0x1247b4u;
    // NOP
    // 0x1247b8: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1247b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1247bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1247bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247c0: 0x0  nop
    ctx->pc = 0x1247c0u;
    // NOP
    // 0x1247c4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1247c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1247c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1247c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1247cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1247ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1247d0: 0x0  nop
    ctx->pc = 0x1247d0u;
    // NOP
    // 0x1247d4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1247d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1247d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1247dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1247e0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1247E0u;
    SET_GPR_U32(ctx, 31, 0x1247E8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1247E0u, 0x1247E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247E8u;
label_1247e8:
    // 0x1247e8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247ec: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1247ECu;
    SET_GPR_U32(ctx, 31, 0x1247F4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1247ECu, 0x1247F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247F4u;
label_1247f4:
    // 0x1247f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1247f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1247f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1247fc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1247FCu;
    SET_GPR_U32(ctx, 31, 0x124804u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1247FCu, 0x124804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124804u;
label_124804:
    // 0x124804: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124808: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x124808u;
    SET_GPR_U32(ctx, 31, 0x124810u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x124808u, 0x124810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124810u;
label_124810:
    // 0x124810: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124814: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124818: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x124818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x12481c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12481cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124820: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x124820u;
    {
        const bool branch_taken_0x124820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124820) {
            ctx->pc = 0x124858u;
            goto label_124858;
        }
    }
    ctx->pc = 0x124828u;
    // 0x124828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12482c: 0x244412b0  addiu       $a0, $v0, 0x12B0
    ctx->pc = 0x12482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x124830: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124834: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x124834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124838: 0xc040c9e  jal         func_103278
    ctx->pc = 0x124838u;
    SET_GPR_U32(ctx, 31, 0x124840u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x124840u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x124840u) { return; }
    ctx->pc = 0x124840u;
label_124840:
    // 0x124840: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124844: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12484c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x12484cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124850: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x124850u;
    {
        const bool branch_taken_0x124850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124850) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124858u;
label_124858:
    // 0x124858: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12485c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x12485cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124860: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124864: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124868: 0x1460007b  bnez        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x124868u;
    {
        const bool branch_taken_0x124868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124868) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124870u;
    // 0x124870: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124874: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124878: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x12487c: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x12487cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124880: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x124880u;
    {
        const bool branch_taken_0x124880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124880) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124888u;
    // 0x124888: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x124888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x12488c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x12488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124890: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124890u;
    {
        const bool branch_taken_0x124890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124890) {
            ctx->pc = 0x1248B0u;
            goto label_1248b0;
        }
    }
    ctx->pc = 0x124898u;
    // 0x124898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12489c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x12489cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1248a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1248a4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1248a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1248a8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1248A8u;
    {
        const bool branch_taken_0x1248a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248a8) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x1248B0u;
label_1248b0:
    // 0x1248b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1248b8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1248b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1248bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1248bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1248c0: 0x0  nop
    ctx->pc = 0x1248c0u;
    // NOP
    // 0x1248c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1248c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1248c8: 0x0  nop
    ctx->pc = 0x1248c8u;
    // NOP
    // 0x1248cc: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x1248CCu;
    {
        const bool branch_taken_0x1248cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1248cc) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x1248D4u;
    // 0x1248d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1248d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1248d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1248dc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1248DCu;
    SET_GPR_U32(ctx, 31, 0x1248E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1248DCu, 0x1248E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1248E4u;
    {
        const bool branch_taken_0x1248e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248e4) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x1248ECu;
    // 0x1248ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1248ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1248f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1248f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1248f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1248f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1248f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1248fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1248FCu;
    {
        const bool branch_taken_0x1248fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248fc) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124904u;
label_124904:
    // 0x124904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124908: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x124908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x12490c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x12490cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x124910: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x124910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x124914: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124914u;
    {
        const bool branch_taken_0x124914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124914) {
            ctx->pc = 0x124944u;
            goto label_124944;
        }
    }
    ctx->pc = 0x12491Cu;
    // 0x12491c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124920: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124924: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x124924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124928: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x124928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12492c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124930: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x124934: 0xc0965d0  jal         func_259740
    ctx->pc = 0x124934u;
    SET_GPR_U32(ctx, 31, 0x12493Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x124934u, 0x12493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12493Cu;
label_12493c:
    // 0x12493c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12493Cu;
    {
        const bool branch_taken_0x12493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12493c) {
            ctx->pc = 0x124964u;
            goto label_124964;
        }
    }
    ctx->pc = 0x124944u;
label_124944:
    // 0x124944: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124948: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12494c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12494cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x124950: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x124950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x124954: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124958: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x124958u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12495c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12495Cu;
    SET_GPR_U32(ctx, 31, 0x124964u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12495Cu, 0x124964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124964u;
label_124964:
    // 0x124964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124968: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x124968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x12496c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x12496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x124970: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x124970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x124974: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x124974u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x124978: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12497c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12497cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x124980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124984: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x124984u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_124988:
    // 0x124988: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12498c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12498cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x124990: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x124990u;
    SET_GPR_U32(ctx, 31, 0x124998u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x124990u, 0x124998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12499c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12499Cu;
    SET_GPR_U32(ctx, 31, 0x1249A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12499Cu, 0x1249A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249A4u;
label_1249a4:
    // 0x1249a4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1249a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1249a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1249ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1249ACu;
    SET_GPR_U32(ctx, 31, 0x1249B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1249ACu, 0x1249B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249B4u;
label_1249b4:
    // 0x1249b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1249b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249b8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1249B8u;
    SET_GPR_U32(ctx, 31, 0x1249C0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1249B8u, 0x1249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1249C0u;
label_1249c0:
    // 0x1249c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1249c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1249c8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1249C8u;
    {
        const bool branch_taken_0x1249c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249c8) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x1249D0u;
    // 0x1249d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1249d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1249d8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1249d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1249dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1249dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1249e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1249E0u;
    {
        const bool branch_taken_0x1249e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1249e0) {
            ctx->pc = 0x124A20u;
            goto label_124a20;
        }
    }
    ctx->pc = 0x1249E8u;
    // 0x1249e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1249e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1249ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1249f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1249f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1249f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1249f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1249fc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1249fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a04: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124a04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a10: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a14: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124a18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x124A18u;
    {
        const bool branch_taken_0x124a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a18) {
            ctx->pc = 0x124A50u;
            goto label_124a50;
        }
    }
    ctx->pc = 0x124A20u;
label_124a20:
    // 0x124a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a28: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124a28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a2c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x124a30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124a34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124a38: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a3c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a40: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a44: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124a48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124a4c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_124a50:
    // 0x124a50: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124A50u;
    {
        const bool branch_taken_0x124a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124a50) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124A58u;
label_124a58:
    // 0x124a58: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x124a58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x124a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124a60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124a64: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x124a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x124a68: 0x3e00008  jr          $ra
    ctx->pc = 0x124A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124A70u;
}
