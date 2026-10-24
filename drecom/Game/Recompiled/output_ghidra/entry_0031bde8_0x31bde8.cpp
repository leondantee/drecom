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

// Function: entry_0031bde8
// Address: 0x31bde8 - 0x31bf34
void entry_0031bde8_0x31bde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031bde8_0x31bde8");
#endif

    switch (ctx->pc) {
        case 0x31be58u: goto label_31be58;
        case 0x31be64u: goto label_31be64;
        case 0x31be98u: goto label_31be98;
        case 0x31bea4u: goto label_31bea4;
        case 0x31bed8u: goto label_31bed8;
        case 0x31bee4u: goto label_31bee4;
        case 0x31bf18u: goto label_31bf18;
        case 0x31bf28u: goto label_31bf28;
        default: break;
    }

    ctx->pc = 0x31bde8u;

    // 0x31bde8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31bdec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bdf0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31bdf4: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x31bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x31bdf8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x31bdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31bdfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31be00: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31be00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31be04: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x31be04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x31be08: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x31be08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31be0c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31be10: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x31be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31be14: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x31be14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x31be18: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31be1c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x31be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x31be20: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x31be20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x31be24: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31be24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31be28: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x31be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31be2c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x31be2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31be30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31be30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31be34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31be34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31be38: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x31be38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x31be3c: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x31be3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31be40: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31be40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31be44: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31be44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31be48: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31be48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31be4c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31be4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31be50: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BE50u;
    SET_GPR_U32(ctx, 31, 0x31BE58u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BE50u, 0x31BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE58u;
label_31be58:
    // 0x31be58: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31be58u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31be5c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BE5Cu;
    SET_GPR_U32(ctx, 31, 0x31BE64u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BE5Cu, 0x31BE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE64u;
label_31be64:
    // 0x31be64: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31be64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31be68: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x31be68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31be6c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x31be6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31be70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x31be70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x31be74: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x31be74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31be78: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x31be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x31be7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31be80: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x31be80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31be84: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31be88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31be88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31be8c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31be8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31be90: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BE90u;
    SET_GPR_U32(ctx, 31, 0x31BE98u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BE90u, 0x31BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BE98u;
label_31be98:
    // 0x31be98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31be98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31be9c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BE9Cu;
    SET_GPR_U32(ctx, 31, 0x31BEA4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BE9Cu, 0x31BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEA4u;
label_31bea4:
    // 0x31bea4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bea8: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x31bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x31beac: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31beacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31beb0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31beb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31beb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31beb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31beb8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31beb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31bebc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31bebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31bec0: 0xc23824  and         $a3, $a2, $v0
    ctx->pc = 0x31bec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x31bec4: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
    // 0x31bec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31becc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31bed0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BED0u;
    SET_GPR_U32(ctx, 31, 0x31BED8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BED0u, 0x31BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BED8u;
label_31bed8:
    // 0x31bed8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31bed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bedc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BEDCu;
    SET_GPR_U32(ctx, 31, 0x31BEE4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BEDCu, 0x31BEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BEE4u;
label_31bee4:
    // 0x31bee4: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x31bee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31bee8: 0x8ce40130  lw          $a0, 0x130($a3)
    ctx->pc = 0x31bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x31beec: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x31beecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31bef0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x31bef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x31bef4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31bef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31bef8: 0x48438  dsll        $s0, $a0, 16
    ctx->pc = 0x31bef8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << 16);
    // 0x31befc: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x31befcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x31bf00: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x31bf00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x31bf04: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
    // 0x31bf08: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31bf08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31bf0c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31bf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31bf10: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31BF10u;
    SET_GPR_U32(ctx, 31, 0x31BF18u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31BF10u, 0x31BF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF18u;
label_31bf18:
    // 0x31bf18: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x31bf18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bf1c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x31bf1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x31bf20: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31BF20u;
    SET_GPR_U32(ctx, 31, 0x31BF28u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31BF20u, 0x31BF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31BF28u;
label_31bf28:
    // 0x31bf28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x31bf28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31bf2c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x31BF2Cu;
    {
        const bool branch_taken_0x31bf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bf2c) {
            ctx->pc = 0x31C080u;
            return;
        }
    }
    ctx->pc = 0x31BF34u;
}
