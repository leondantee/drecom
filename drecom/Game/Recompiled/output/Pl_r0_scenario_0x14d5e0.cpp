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

// Function: Pl_r0_scenario
// Address: 0x14d5e0 - 0x14d75c
void Pl_r0_scenario_0x14d5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r0_scenario_0x14d5e0");
#endif

    switch (ctx->pc) {
        case 0x14d6c4u: goto label_14d6c4;
        case 0x14d6fcu: goto label_14d6fc;
        case 0x14d71cu: goto label_14d71c;
        case 0x14d728u: goto label_14d728;
        case 0x14d73cu: goto label_14d73c;
        case 0x14d748u: goto label_14d748;
        default: break;
    }

    ctx->pc = 0x14d5e0u;

    // 0x14d5e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d5e4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x14d5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x14d5e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14d5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14d5ec: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x14d5f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d5f4: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14d5f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d5f8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x14d5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x14d5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d600: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x14D600u;
    {
        const bool branch_taken_0x14d600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x14d600) {
            ctx->pc = 0x14D70Cu;
            goto label_14d70c;
        }
    }
    ctx->pc = 0x14D608u;
    // 0x14d608: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D608u;
    {
        const bool branch_taken_0x14d608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d608) {
            ctx->pc = 0x14D618u;
            goto label_14d618;
        }
    }
    ctx->pc = 0x14D610u;
    // 0x14d610: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x14D610u;
    {
        const bool branch_taken_0x14d610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d610) {
            ctx->pc = 0x14D748u;
            goto label_14d748;
        }
    }
    ctx->pc = 0x14D618u;
label_14d618:
    // 0x14d618: 0xa3808098  sb          $zero, -0x7F68($gp)
    ctx->pc = 0x14d618u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d61c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d620: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d624: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x14d624u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14d628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d62c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d630: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14d634: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D638u;
    {
        const bool branch_taken_0x14d638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d638) {
            ctx->pc = 0x14D64Cu;
            goto label_14d64c;
        }
    }
    ctx->pc = 0x14D640u;
    // 0x14d640: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d644: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x14d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14d648: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d648u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
label_14d64c:
    // 0x14d64c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d650: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d654: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14d658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d65c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D65Cu;
    {
        const bool branch_taken_0x14d65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d65c) {
            ctx->pc = 0x14D670u;
            goto label_14d670;
        }
    }
    ctx->pc = 0x14D664u;
    // 0x14d664: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d668: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x14d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x14d66c: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d66cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
label_14d670:
    // 0x14d670: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d674: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14d678: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x14d67c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14d680: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14D680u;
    {
        const bool branch_taken_0x14d680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d680) {
            ctx->pc = 0x14D6CCu;
            goto label_14d6cc;
        }
    }
    ctx->pc = 0x14D688u;
    // 0x14d688: 0x93828098  lbu         $v0, -0x7F68($gp)
    ctx->pc = 0x14d688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d68c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x14d68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x14d690: 0xa3828098  sb          $v0, -0x7F68($gp)
    ctx->pc = 0x14d690u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934680), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d694: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d698: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x14d698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d69c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6a0: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x14d6a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x14d6a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d6a8: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14d6ac: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x14d6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d6b0: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x14d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x14d6b4: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x14d6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x14d6b8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d6bc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D6BCu;
    SET_GPR_U32(ctx, 31, 0x14D6C4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D6BCu, 0x14D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6C4u;
label_14d6c4:
    // 0x14d6c4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14D6C4u;
    {
        const bool branch_taken_0x14d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d6c4) {
            ctx->pc = 0x14D6FCu;
            goto label_14d6fc;
        }
    }
    ctx->pc = 0x14D6CCu;
label_14d6cc:
    // 0x14d6cc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x14d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d6d8: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x14d6d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x14d6dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d6e0: 0x101200  sll         $v0, $s0, 8
    ctx->pc = 0x14d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x14d6e4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x14d6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14d6e8: 0x8ca50368  lw          $a1, 0x368($a1)
    ctx->pc = 0x14d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 872)));
    // 0x14d6ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14d6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d6f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x14d6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14d6f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x14D6F4u;
    SET_GPR_U32(ctx, 31, 0x14D6FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x14D6F4u, 0x14D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6FCu;
label_14d6fc:
    // 0x14d6fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d700: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x14d700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x14d704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d708: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14d708u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_14d70c:
    // 0x14d70c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d710: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14d710u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d714: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14D714u;
    SET_GPR_U32(ctx, 31, 0x14D71Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14D714u, 0x14D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D71Cu;
label_14d71c:
    // 0x14d71c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d720: 0xc05cd10  jal         func_173440
    ctx->pc = 0x14D720u;
    SET_GPR_U32(ctx, 31, 0x14D728u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x14D720u, 0x14D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D728u;
label_14d728:
    // 0x14d728: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14d728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14d72c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14d72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d730: 0x93858098  lbu         $a1, -0x7F68($gp)
    ctx->pc = 0x14d730u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x14d734: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14D734u;
    SET_GPR_U32(ctx, 31, 0x14D73Cu);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14D734u, 0x14D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D73Cu;
label_14d73c:
    // 0x14d73c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d73cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d740: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D740u;
    SET_GPR_U32(ctx, 31, 0x14D748u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D740u, 0x14D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D748u;
label_14d748:
    // 0x14d748: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x14d748u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d750: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14d750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14d754: 0x3e00008  jr          $ra
    ctx->pc = 0x14D754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D75Cu;
}
