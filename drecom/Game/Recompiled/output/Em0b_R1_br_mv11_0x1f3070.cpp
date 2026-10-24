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

// Function: Em0b_R1_br_mv11
// Address: 0x1f3070 - 0x1f3300
void Em0b_R1_br_mv11_0x1f3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_br_mv11_0x1f3070");
#endif

    switch (ctx->pc) {
        case 0x1f30b8u: goto label_1f30b8;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f3214u: goto label_1f3214;
        case 0x1f3238u: goto label_1f3238;
        case 0x1f3260u: goto label_1f3260;
        case 0x1f32ccu: goto label_1f32cc;
        default: break;
    }

    ctx->pc = 0x1f3070u;

    // 0x1f3070: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f3070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f3074: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x1f3074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f3078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f3078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f307c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f3080: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1f3080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1f3084: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3088: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1f3088u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f308c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1f308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1f3090: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1f3090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1f3094: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F3094u;
    {
        const bool branch_taken_0x1f3094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3094) {
            ctx->pc = 0x1F31C8u;
            goto label_1f31c8;
        }
    }
    ctx->pc = 0x1F309Cu;
    // 0x1f309c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f309cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f30a0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f30a4: 0x84630078  lh          $v1, 0x78($v1)
    ctx->pc = 0x1f30a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x1f30a8: 0x14600047  bnez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F30A8u;
    {
        const bool branch_taken_0x1f30a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f30a8) {
            ctx->pc = 0x1F31C8u;
            goto label_1f31c8;
        }
    }
    ctx->pc = 0x1F30B0u;
    // 0x1f30b0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F30B0u;
    SET_GPR_U32(ctx, 31, 0x1F30B8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F30B0u, 0x1F30B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30B8u;
label_1f30b8:
    // 0x1f30b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f30b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f30bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f30bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f30c0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F30C0u;
    SET_GPR_U32(ctx, 31, 0x1F30C8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F30C0u, 0x1F30C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f30c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f30cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1f30ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1f30d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f30d4: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f30d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f30d8: 0x30633000  andi        $v1, $v1, 0x3000
    ctx->pc = 0x1f30d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1f30dc: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x1f30dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x1f30e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1f30e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f30e4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f30e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f30e8: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x1f30e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f30ec: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1f30ecu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x1f30f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f30f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f30f8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1f30f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f30fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f30fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3100: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3104: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f3104u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f3108: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f3108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f310c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f3110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3114: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1f3114u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f3118: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1f3118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1f311c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f311cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3120: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f3120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f3124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f3124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3128: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f312c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f3130: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1f3130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1f3134: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f3134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f3138: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1f3138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f313c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1f313cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f3140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f3140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f3144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3148: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1f3148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f314c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3150: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1f3150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3154: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3158: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1f3158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f315c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f315cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3160: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f3160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f3164: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3168: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f316c: 0x8c700068  lw          $s0, 0x68($v1)
    ctx->pc = 0x1f316cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f3170: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F3170u;
    {
        const bool branch_taken_0x1f3170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3170) {
            ctx->pc = 0x1F31C8u;
            goto label_1f31c8;
        }
    }
    ctx->pc = 0x1F3178u;
    // 0x1f3178: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f317c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f317cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3180: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f3180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f3184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1f3184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f3188: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1f3188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f318c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1f318cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1f3190: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1f3190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1f3194: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3194u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3198: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1f3198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f319c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f31a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1f31a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f31a4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f31a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f31a8: 0x24639d00  addiu       $v1, $v1, -0x6300
    ctx->pc = 0x1f31a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1f31ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f31acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f31b0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1f31b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1f31b4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1f31b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f31b8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f31b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f31bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f31bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f31c0: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1f31c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1f31c4: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1f31c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
label_1f31c8:
    // 0x1f31c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f31c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f31cc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f31ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f31d0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1f31d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1f31d4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1F31D4u;
    {
        const bool branch_taken_0x1f31d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f31d4) {
            ctx->pc = 0x1F3280u;
            goto label_1f3280;
        }
    }
    ctx->pc = 0x1F31DCu;
    // 0x1f31dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f31e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31e4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f31e8: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1f31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1f31ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f31f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f31f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f31f8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f31f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f31fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f31fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3200: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f3200u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f3204: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3208: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f3208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f320c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F320Cu;
    SET_GPR_U32(ctx, 31, 0x1F3214u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F320Cu, 0x1F3214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3214u;
label_1f3214:
    // 0x1f3214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3218: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f3218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1f321c: 0x2442008c  addiu       $v0, $v0, 0x8C
    ctx->pc = 0x1f321cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1f3220: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f3220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3224: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f3224u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f3228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f322c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1f322cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3230: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3230u;
    SET_GPR_U32(ctx, 31, 0x1F3238u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3230u, 0x1F3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3238u;
label_1f3238:
    // 0x1f3238: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f323c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1f323cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1f3240: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1f3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1f3244: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1f3244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f3248: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1f3248u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1f324c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3250: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3254: 0xa443005c  sh          $v1, 0x5C($v0)
    ctx->pc = 0x1f3254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3258: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3258u;
    SET_GPR_U32(ctx, 31, 0x1F3260u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3258u, 0x1F3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3260u;
label_1f3260:
    // 0x1f3260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f3260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3264: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x1f3264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1f3268: 0x246304b0  addiu       $v1, $v1, 0x4B0
    ctx->pc = 0x1f3268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x1f326c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f326cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f3270: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f3270u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f3274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3278: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f327c: 0xa4640076  sh          $a0, 0x76($v1)
    ctx->pc = 0x1f327cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 118), (uint16_t)GPR_U32(ctx, 4));
label_1f3280:
    // 0x1f3280: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f3280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3284: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f3288: 0x9063007a  lbu         $v1, 0x7A($v1)
    ctx->pc = 0x1f3288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x1f328c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F328Cu;
    {
        const bool branch_taken_0x1f328c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f328c) {
            ctx->pc = 0x1F32E8u;
            goto label_1f32e8;
        }
    }
    ctx->pc = 0x1F3294u;
    // 0x1f3294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f329c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1f329cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f32a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f32a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32a8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1f32a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f32ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32b0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x1f32b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f32b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32b8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1f32b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f32bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f32c4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F32C4u;
    SET_GPR_U32(ctx, 31, 0x1F32CCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F32C4u, 0x1F32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F32CCu;
label_1f32cc:
    // 0x1f32cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f32ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f32d0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f32d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1f32d4: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x1f32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
    // 0x1f32d8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1f32d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1f32dc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1f32dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1f32e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f32e4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1f32e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_1f32e8:
    // 0x1f32e8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1f32e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f32ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f32ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f32f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f32f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f32f4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1f32f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f32f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F32F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F32F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3300u;
}
