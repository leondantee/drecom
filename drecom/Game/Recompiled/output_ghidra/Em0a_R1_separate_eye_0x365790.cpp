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

// Function: Em0a_R1_separate_eye
// Address: 0x365790 - 0x365914
void Em0a_R1_separate_eye_0x365790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_separate_eye_0x365790");
#endif

    switch (ctx->pc) {
        case 0x3657f0u: goto label_3657f0;
        case 0x3657f8u: goto label_3657f8;
        case 0x365850u: goto label_365850;
        case 0x36585cu: goto label_36585c;
        case 0x36586cu: goto label_36586c;
        case 0x365878u: goto label_365878;
        default: break;
    }

    ctx->pc = 0x365790u;

    // 0x365790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365794: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x365794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x365798: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36579c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x36579cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3657a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3657a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657a4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x3657a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3657a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3657a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657ac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3657acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3657b0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3657b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3657b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3657b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3657b8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3657B8u;
    {
        const bool branch_taken_0x3657b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3657b8) {
            ctx->pc = 0x365820u;
            goto label_365820;
        }
    }
    ctx->pc = 0x3657C0u;
    // 0x3657c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3657C0u;
    {
        const bool branch_taken_0x3657c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3657c0) {
            ctx->pc = 0x3657D0u;
            goto label_3657d0;
        }
    }
    ctx->pc = 0x3657C8u;
    // 0x3657c8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x3657C8u;
    {
        const bool branch_taken_0x3657c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3657c8) {
            ctx->pc = 0x365900u;
            goto label_365900;
        }
    }
    ctx->pc = 0x3657D0u;
label_3657d0:
    // 0x3657d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3657d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657d4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3657d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3657d8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3657d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3657dc: 0x24061e01  addiu       $a2, $zero, 0x1E01
    ctx->pc = 0x3657dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x3657e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3657e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3657e4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3657e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3657e8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3657E8u;
    SET_GPR_U32(ctx, 31, 0x3657F0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3657E8u, 0x3657F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657F0u;
label_3657f0:
    // 0x3657f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3657F0u;
    SET_GPR_U32(ctx, 31, 0x3657F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3657F0u, 0x3657F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3657F8u;
label_3657f8:
    // 0x3657f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3657f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3657fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3657fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x365800: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x365800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x365804: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x365804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x365808: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36580c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x36580cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x365810: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365814: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x365814u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x365818: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x365818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x36581c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x36581cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_365820:
    // 0x365820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365824: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36582c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365830u;
    {
        const bool branch_taken_0x365830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365830) {
            ctx->pc = 0x365840u;
            goto label_365840;
        }
    }
    ctx->pc = 0x365838u;
    // 0x365838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36583c: 0x0  nop
    ctx->pc = 0x36583cu;
    // NOP
label_365840:
    // 0x365840: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365844: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365844u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365848: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365848u;
    SET_GPR_U32(ctx, 31, 0x365850u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365848u, 0x365850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365850u;
label_365850:
    // 0x365850: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x365850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365854: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365854u;
    SET_GPR_U32(ctx, 31, 0x36585Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365854u, 0x36585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36585Cu;
label_36585c:
    // 0x36585c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36585cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365864: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365864u;
    SET_GPR_U32(ctx, 31, 0x36586Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365864u, 0x36586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36586Cu;
label_36586c:
    // 0x36586c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36586cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365870: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x365870u;
    SET_GPR_U32(ctx, 31, 0x365878u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x365870u, 0x365878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365878u;
label_365878:
    // 0x365878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36587c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x36587cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x365880: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x365880u;
    {
        const bool branch_taken_0x365880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365880) {
            ctx->pc = 0x365900u;
            goto label_365900;
        }
    }
    ctx->pc = 0x365888u;
    // 0x365888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x365888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36588c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x36588cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x365890: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x365890u;
    {
        const bool branch_taken_0x365890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x365890) {
            ctx->pc = 0x3658D0u;
            goto label_3658d0;
        }
    }
    ctx->pc = 0x365898u;
    // 0x365898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36589c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x36589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3658a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658a4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3658a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3658a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3658acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3658b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3658bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3658c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3658c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3658C8u;
    {
        const bool branch_taken_0x3658c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3658c8) {
            ctx->pc = 0x365900u;
            goto label_365900;
        }
    }
    ctx->pc = 0x3658D0u;
label_3658d0:
    // 0x3658d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3658d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3658d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3658dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3658e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3658e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3658e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3658ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3658f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3658f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3658f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3658fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365900:
    // 0x365900: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365904: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365908: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x365908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36590c: 0x3e00008  jr          $ra
    ctx->pc = 0x36590Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36590Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365914u;
}
