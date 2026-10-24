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

// Function: Em0f_R1_step
// Address: 0x30d630 - 0x30d900
void Em0f_R1_step_0x30d630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0f_R1_step_0x30d630");
#endif

    switch (ctx->pc) {
        case 0x30d688u: goto label_30d688;
        case 0x30d728u: goto label_30d728;
        case 0x30d750u: goto label_30d750;
        case 0x30d778u: goto label_30d778;
        case 0x30d798u: goto label_30d798;
        case 0x30d7a4u: goto label_30d7a4;
        case 0x30d7b4u: goto label_30d7b4;
        case 0x30d7c0u: goto label_30d7c0;
        case 0x30d844u: goto label_30d844;
        default: break;
    }

    ctx->pc = 0x30d630u;

    // 0x30d630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d634: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x30d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x30d638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30d638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30d63c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x30d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x30d640: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d644: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x30d644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d648: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x30d648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30d64c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d650: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x30D650u;
    {
        const bool branch_taken_0x30d650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d650) {
            ctx->pc = 0x30D788u;
            goto label_30d788;
        }
    }
    ctx->pc = 0x30D658u;
    // 0x30d658: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D658u;
    {
        const bool branch_taken_0x30d658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d658) {
            ctx->pc = 0x30D668u;
            goto label_30d668;
        }
    }
    ctx->pc = 0x30D660u;
    // 0x30d660: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x30D660u;
    {
        const bool branch_taken_0x30d660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d660) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D668u;
label_30d668:
    // 0x30d668: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d66c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d674: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x30d674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x30d678: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30d678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d67c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x30d680: 0xc05cc90  jal         func_173240
    ctx->pc = 0x30D680u;
    SET_GPR_U32(ctx, 31, 0x30D688u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x30D680u, 0x30D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D688u;
label_30d688:
    // 0x30d688: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x30d688u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x30d68c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d690: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d694: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x30d698: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x30d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x30d69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D69Cu;
    {
        const bool branch_taken_0x30d69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d69c) {
            ctx->pc = 0x30D6ACu;
            goto label_30d6ac;
        }
    }
    ctx->pc = 0x30D6A4u;
    // 0x30d6a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6a8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x30d6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
label_30d6ac:
    // 0x30d6ac: 0x32020004  andi        $v0, $s0, 0x4
    ctx->pc = 0x30d6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4);
    // 0x30d6b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30D6B0u;
    {
        const bool branch_taken_0x30d6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6b0) {
            ctx->pc = 0x30D6D0u;
            goto label_30d6d0;
        }
    }
    ctx->pc = 0x30D6B8u;
    // 0x30d6b8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x30d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x30d6bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30D6BCu;
    {
        const bool branch_taken_0x30d6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d6bc) {
            ctx->pc = 0x30D6D0u;
            goto label_30d6d0;
        }
    }
    ctx->pc = 0x30D6C4u;
    // 0x30d6c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d6c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6cc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x30d6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_30d6d0:
    // 0x30d6d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d6d4: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x30d6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x30d6d8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x30d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30d6dc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30d6dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x30d6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d6e4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x30D6E4u;
    {
        const bool branch_taken_0x30d6e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d6e4) {
            ctx->pc = 0x30D758u;
            goto label_30d758;
        }
    }
    ctx->pc = 0x30D6ECu;
    // 0x30d6ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d6f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30D6F0u;
    {
        const bool branch_taken_0x30d6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d6f0) {
            ctx->pc = 0x30D730u;
            goto label_30d730;
        }
    }
    ctx->pc = 0x30D6F8u;
    // 0x30d6f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D6F8u;
    {
        const bool branch_taken_0x30d6f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d6f8) {
            ctx->pc = 0x30D708u;
            goto label_30d708;
        }
    }
    ctx->pc = 0x30D700u;
    // 0x30d700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x30D700u;
    {
        const bool branch_taken_0x30d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d700) {
            ctx->pc = 0x30D778u;
            goto label_30d778;
        }
    }
    ctx->pc = 0x30D708u;
label_30d708:
    // 0x30d708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d70c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d710: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d714: 0x24061405  addiu       $a2, $zero, 0x1405
    ctx->pc = 0x30d714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5125));
    // 0x30d718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d71c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d71cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d720: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D720u;
    SET_GPR_U32(ctx, 31, 0x30D728u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D720u, 0x30D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D728u;
label_30d728:
    // 0x30d728: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x30D728u;
    {
        const bool branch_taken_0x30d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d728) {
            ctx->pc = 0x30D778u;
            goto label_30d778;
        }
    }
    ctx->pc = 0x30D730u;
label_30d730:
    // 0x30d730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d734: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d738: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d73c: 0x24061406  addiu       $a2, $zero, 0x1406
    ctx->pc = 0x30d73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5126));
    // 0x30d740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D748u;
    SET_GPR_U32(ctx, 31, 0x30D750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D748u, 0x30D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D750u;
label_30d750:
    // 0x30d750: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30D750u;
    {
        const bool branch_taken_0x30d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d750) {
            ctx->pc = 0x30D778u;
            goto label_30d778;
        }
    }
    ctx->pc = 0x30D758u;
label_30d758:
    // 0x30d758: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d75c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d760: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x30d760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x30d764: 0x24061407  addiu       $a2, $zero, 0x1407
    ctx->pc = 0x30d764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5127));
    // 0x30d768: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d76c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30d76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30d770: 0xc0965d0  jal         func_259740
    ctx->pc = 0x30D770u;
    SET_GPR_U32(ctx, 31, 0x30D778u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x30D770u, 0x30D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D778u;
label_30d778:
    // 0x30d778: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d77c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x30d77cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x30d780: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30d784: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x30d784u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_30d788:
    // 0x30d788: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d78c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d78cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d790: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x30D790u;
    SET_GPR_U32(ctx, 31, 0x30D798u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x30D790u, 0x30D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D798u;
label_30d798:
    // 0x30d798: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d79c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x30D79Cu;
    SET_GPR_U32(ctx, 31, 0x30D7A4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x30D79Cu, 0x30D7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7A4u;
label_30d7a4:
    // 0x30d7a4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x30d7a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30d7ac: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x30D7ACu;
    SET_GPR_U32(ctx, 31, 0x30D7B4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x30D7ACu, 0x30D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7B4u;
label_30d7b4:
    // 0x30d7b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7b8: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x30D7B8u;
    SET_GPR_U32(ctx, 31, 0x30D7C0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x30D7B8u, 0x30D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7C0u;
label_30d7c0:
    // 0x30d7c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7c4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x30d7c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x30d7c8: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x30D7C8u;
    {
        const bool branch_taken_0x30d7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d7c8) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D7D0u;
    // 0x30d7d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d7d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d7dc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x30d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d7e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d7e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d7f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d7fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d800: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d804: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30d804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x30d808: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x30d808u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x30d80c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x30D80Cu;
    {
        const bool branch_taken_0x30d80c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30d80c) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D814u;
    // 0x30d814: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30d818: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30d818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30d81c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30d81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30d820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d824: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30d824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30d828: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30d828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d82c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30d830: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30d834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30d838: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30d838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30d83c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30D83Cu;
    SET_GPR_U32(ctx, 31, 0x30D844u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30D83Cu, 0x30D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D844u;
label_30d844:
    // 0x30d844: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x30D844u;
    {
        const bool branch_taken_0x30d844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d844) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D84Cu;
    // 0x30d84c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d850: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x30d850u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x30d854: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x30d854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d858: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x30d858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x30d85c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d860: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x30D860u;
    {
        const bool branch_taken_0x30d860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d860) {
            ctx->pc = 0x30D8BCu;
            goto label_30d8bc;
        }
    }
    ctx->pc = 0x30D868u;
    // 0x30d868: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30d868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d86c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D86Cu;
    {
        const bool branch_taken_0x30d86c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x30d86c) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D874u;
    // 0x30d874: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D874u;
    {
        const bool branch_taken_0x30d874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d874) {
            ctx->pc = 0x30D884u;
            goto label_30d884;
        }
    }
    ctx->pc = 0x30D87Cu;
    // 0x30d87c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x30D87Cu;
    {
        const bool branch_taken_0x30d87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d87c) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D884u;
label_30d884:
    // 0x30d884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d88c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d890: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x30d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30d894: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d898: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d89c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8a0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8a8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d8b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30D8B4u;
    {
        const bool branch_taken_0x30d8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d8b4) {
            ctx->pc = 0x30D8ECu;
            goto label_30d8ec;
        }
    }
    ctx->pc = 0x30D8BCu;
label_30d8bc:
    // 0x30d8bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d8c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8c4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30d8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d8c8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x30d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30d8cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8d0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30d8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8d8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8e0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30d8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30d8e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d8e8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30d8ec:
    // 0x30d8ec: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x30d8ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d8f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30d8f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d8f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30d8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30d8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D900u;
}
