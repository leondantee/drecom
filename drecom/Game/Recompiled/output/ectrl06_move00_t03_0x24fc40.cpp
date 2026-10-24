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

// Function: ectrl06_move00_t03
// Address: 0x24fc40 - 0x24fff4
void ectrl06_move00_t03_0x24fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl06_move00_t03_0x24fc40");
#endif

    switch (ctx->pc) {
        case 0x24fd70u: goto label_24fd70;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fdd0u: goto label_24fdd0;
        case 0x24fddcu: goto label_24fddc;
        case 0x24fe18u: goto label_24fe18;
        case 0x24fe24u: goto label_24fe24;
        case 0x24ff24u: goto label_24ff24;
        case 0x24ff50u: goto label_24ff50;
        case 0x24ff8cu: goto label_24ff8c;
        case 0x24ff98u: goto label_24ff98;
        case 0x24ffd4u: goto label_24ffd4;
        case 0x24ffe0u: goto label_24ffe0;
        default: break;
    }

    ctx->pc = 0x24fc40u;

    // 0x24fc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24fc44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x24fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x24fc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24fc4c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x24fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x24fc50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24fc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fc54: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x24fc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x24fc58: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x24fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x24fc5c: 0x10830073  beq         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x24FC5Cu;
    {
        const bool branch_taken_0x24fc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24fc5c) {
            ctx->pc = 0x24FE2Cu;
            goto label_24fe2c;
        }
    }
    ctx->pc = 0x24FC64u;
    // 0x24fc64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24fc68: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24FC68u;
    {
        const bool branch_taken_0x24fc68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24fc68) {
            ctx->pc = 0x24FC8Cu;
            goto label_24fc8c;
        }
    }
    ctx->pc = 0x24FC70u;
    // 0x24fc70: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x24fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fc74: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24FC74u;
    {
        const bool branch_taken_0x24fc74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24fc74) {
            ctx->pc = 0x24FC8Cu;
            goto label_24fc8c;
        }
    }
    ctx->pc = 0x24FC7Cu;
    // 0x24fc7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24FC7Cu;
    {
        const bool branch_taken_0x24fc7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fc7c) {
            ctx->pc = 0x24FC8Cu;
            goto label_24fc8c;
        }
    }
    ctx->pc = 0x24FC84u;
    // 0x24fc84: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x24FC84u;
    {
        const bool branch_taken_0x24fc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fc84) {
            ctx->pc = 0x24FFE0u;
            goto label_24ffe0;
        }
    }
    ctx->pc = 0x24FC8Cu;
label_24fc8c:
    // 0x24fc8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fc90: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fc94: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fc98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fc98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fc9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fca0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fca4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fcac: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fcb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fcb4: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fcb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fcbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fcc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fcc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fcc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fcd0: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24fcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fcd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fcd8: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24fcdc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fce0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fce4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fce8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fcec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fcf0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fcf4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fcf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fcf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fcfc: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24fd00: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fd04: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fd08: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fd0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fd0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fd10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fd14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fd18: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24fd18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fd1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fd20: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fd24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fd28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fd28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fd2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fd30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fd34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fd34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fd38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fd3c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fd40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fd44: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fd48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fd48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fd4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fd50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fd54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fd58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fd5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fd60: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24fd60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fd64: 0x24040702  addiu       $a0, $zero, 0x702
    ctx->pc = 0x24fd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x24fd68: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24FD68u;
    SET_GPR_U32(ctx, 31, 0x24FD70u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24FD68u, 0x24FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD70u;
label_24fd70:
    // 0x24fd70: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24fd70u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fd74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fd78: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24fd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24fd7c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24fd7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fd80: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24fd84: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24fd84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24fd88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24fd88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24fd8c: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24FD8Cu;
    SET_GPR_U32(ctx, 31, 0x24FD94u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24FD8Cu, 0x24FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FD94u;
label_24fd94:
    // 0x24fd94: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fd98: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fd9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fda0: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fda4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fda8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fdac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fdacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fdb0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fdb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fdb8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24fdb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fdbc: 0x24041605  addiu       $a0, $zero, 0x1605
    ctx->pc = 0x24fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    // 0x24fdc0: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24fdc4: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24fdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24fdc8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FDC8u;
    SET_GPR_U32(ctx, 31, 0x24FDD0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FDC8u, 0x24FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDD0u;
label_24fdd0:
    // 0x24fdd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24fdd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fdd4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FDD4u;
    SET_GPR_U32(ctx, 31, 0x24FDDCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FDD4u, 0x24FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FDDCu;
label_24fddc:
    // 0x24fddc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24fddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fde0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fde4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fde8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fdec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fdf0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fdf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fdf4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fdf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fdfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fe00: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24fe00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fe04: 0x24042804  addiu       $a0, $zero, 0x2804
    ctx->pc = 0x24fe04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10244));
    // 0x24fe08: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24fe0c: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24fe10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FE10u;
    SET_GPR_U32(ctx, 31, 0x24FE18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FE10u, 0x24FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE18u;
label_24fe18:
    // 0x24fe18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24fe18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24fe1c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FE1Cu;
    SET_GPR_U32(ctx, 31, 0x24FE24u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FE1Cu, 0x24FE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FE24u;
label_24fe24:
    // 0x24fe24: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x24FE24u;
    {
        const bool branch_taken_0x24fe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fe24) {
            ctx->pc = 0x24FFE0u;
            goto label_24ffe0;
        }
    }
    ctx->pc = 0x24FE2Cu;
label_24fe2c:
    // 0x24fe2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fe30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24fe34: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x24fe34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x24fe38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fe3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24fe40: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fe44: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fe48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fe48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fe4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fe50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fe50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fe54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fe54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fe58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fe5c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fe5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fe60: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fe60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fe64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fe68: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x24fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x24fe6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fe6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fe70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fe74: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fe74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fe78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fe7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fe80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fe84: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x24fe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fe88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fe8c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24fe90: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fe90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fe94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fe94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fe98: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fe98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fe9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fea0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fea4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fea8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24feac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24feb0: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x24feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x24feb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24feb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24feb8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24feb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24febc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24febcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fec0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fec4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24fec8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fecc: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24fed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fed4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fed8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fedc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24fee0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24fee4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24fee8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24feec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24feecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24fef0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x24fef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24fef4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24fef8: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24fefc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24fefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ff00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ff00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ff04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ff04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ff08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ff0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ff0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ff10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ff14: 0x823825  or          $a3, $a0, $v0
    ctx->pc = 0x24ff14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x24ff18: 0x24040702  addiu       $a0, $zero, 0x702
    ctx->pc = 0x24ff18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
    // 0x24ff1c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x24FF1Cu;
    SET_GPR_U32(ctx, 31, 0x24FF24u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x24FF1Cu, 0x24FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF24u;
label_24ff24:
    // 0x24ff24: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x24ff24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ff28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ff2c: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x24ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x24ff30: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24ff30u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ff34: 0x26020310  addiu       $v0, $s0, 0x310
    ctx->pc = 0x24ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x24ff38: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x24ff38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x24ff3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24ff40: 0xa2020270  sb          $v0, 0x270($s0)
    ctx->pc = 0x24ff40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 624), (uint8_t)GPR_U32(ctx, 2));
    // 0x24ff44: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24ff44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24ff48: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x24FF48u;
    SET_GPR_U32(ctx, 31, 0x24FF50u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x24FF48u, 0x24FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF50u;
label_24ff50:
    // 0x24ff50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ff54: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ff58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ff5c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ff60: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ff60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ff64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ff64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ff68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ff68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ff6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ff6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ff70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ff74: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ff74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ff78: 0x24041605  addiu       $a0, $zero, 0x1605
    ctx->pc = 0x24ff78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5637));
    // 0x24ff7c: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24ff80: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24ff84: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FF84u;
    SET_GPR_U32(ctx, 31, 0x24FF8Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FF84u, 0x24FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF8Cu;
label_24ff8c:
    // 0x24ff8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ff8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ff90: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FF90u;
    SET_GPR_U32(ctx, 31, 0x24FF98u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FF90u, 0x24FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FF98u;
label_24ff98:
    // 0x24ff98: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24ff98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ff9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x24ff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ffa0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24ffa4: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x24ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24ffa8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x24ffa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x24ffac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x24ffacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x24ffb0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24ffb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24ffb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x24ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x24ffb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x24ffb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x24ffbc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x24ffbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24ffc0: 0x24042804  addiu       $a0, $zero, 0x2804
    ctx->pc = 0x24ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10244));
    // 0x24ffc4: 0x24a500b0  addiu       $a1, $a1, 0xB0
    ctx->pc = 0x24ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x24ffc8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x24ffc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x24ffcc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x24FFCCu;
    SET_GPR_U32(ctx, 31, 0x24FFD4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x24FFCCu, 0x24FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFD4u;
label_24ffd4:
    // 0x24ffd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24ffd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24ffd8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x24FFD8u;
    SET_GPR_U32(ctx, 31, 0x24FFE0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x24FFD8u, 0x24FFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24FFE0u;
label_24ffe0:
    // 0x24ffe0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x24ffe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ffe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ffe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ffe8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24ffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24ffec: 0x3e00008  jr          $ra
    ctx->pc = 0x24FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FFF4u;
}
