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

// Function: entry_0024fc8c
// Address: 0x24fc8c - 0x24fe2c
void entry_0024fc8c_0x24fc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024fc8c_0x24fc8c");
#endif

    switch (ctx->pc) {
        case 0x24fd70u: goto label_24fd70;
        case 0x24fd94u: goto label_24fd94;
        case 0x24fdd0u: goto label_24fdd0;
        case 0x24fddcu: goto label_24fddc;
        case 0x24fe18u: goto label_24fe18;
        case 0x24fe24u: goto label_24fe24;
        default: break;
    }

    ctx->pc = 0x24fc8cu;

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
            return;
        }
    }
    ctx->pc = 0x24FE2Cu;
}
