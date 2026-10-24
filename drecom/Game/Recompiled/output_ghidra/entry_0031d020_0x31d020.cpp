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

// Function: entry_0031d020
// Address: 0x31d020 - 0x31d180
void entry_0031d020_0x31d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d020_0x31d020");
#endif

    switch (ctx->pc) {
        case 0x31d054u: goto label_31d054;
        case 0x31d060u: goto label_31d060;
        case 0x31d094u: goto label_31d094;
        case 0x31d0a0u: goto label_31d0a0;
        case 0x31d0d8u: goto label_31d0d8;
        case 0x31d0e4u: goto label_31d0e4;
        case 0x31d11cu: goto label_31d11c;
        case 0x31d128u: goto label_31d128;
        case 0x31d15cu: goto label_31d15c;
        case 0x31d168u: goto label_31d168;
        default: break;
    }

    ctx->pc = 0x31d020u;

    // 0x31d020: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d024: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d028: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d02c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d030: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d03c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d03cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d040: 0x24042d02  addiu       $a0, $zero, 0x2D02
    ctx->pc = 0x31d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11522));
    // 0x31d044: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d044u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d048: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d04c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D04Cu;
    SET_GPR_U32(ctx, 31, 0x31D054u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D04Cu, 0x31D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D054u;
label_31d054:
    // 0x31d054: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d058: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D058u;
    SET_GPR_U32(ctx, 31, 0x31D060u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D058u, 0x31D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D060u;
label_31d060:
    // 0x31d060: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d064: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d068: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d06c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d070: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d07c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d07cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d080: 0x2404490a  addiu       $a0, $zero, 0x490A
    ctx->pc = 0x31d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18698));
    // 0x31d084: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d088: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d08c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D08Cu;
    SET_GPR_U32(ctx, 31, 0x31D094u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D08Cu, 0x31D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D094u;
label_31d094:
    // 0x31d094: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d094u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d098: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D098u;
    SET_GPR_U32(ctx, 31, 0x31D0A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D098u, 0x31D0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0A0u;
label_31d0a0:
    // 0x31d0a0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31d0a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0a4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d0a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d0ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d0b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d0b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d0b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d0bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d0c0: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d0c4: 0x2404490b  addiu       $a0, $zero, 0x490B
    ctx->pc = 0x31d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18699));
    // 0x31d0c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d0c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d0cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d0d0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D0D0u;
    SET_GPR_U32(ctx, 31, 0x31D0D8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D0D0u, 0x31D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0D8u;
label_31d0d8:
    // 0x31d0d8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d0d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0dc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D0DCu;
    SET_GPR_U32(ctx, 31, 0x31D0E4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D0DCu, 0x31D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D0E4u;
label_31d0e4:
    // 0x31d0e4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31d0e4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d0e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d0ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d0f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d0f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d0fc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d104: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d104u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d108: 0x2404490e  addiu       $a0, $zero, 0x490E
    ctx->pc = 0x31d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18702));
    // 0x31d10c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d10cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d110: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d114: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D114u;
    SET_GPR_U32(ctx, 31, 0x31D11Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D114u, 0x31D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D11Cu;
label_31d11c:
    // 0x31d11c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d11cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d120: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D120u;
    SET_GPR_U32(ctx, 31, 0x31D128u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D120u, 0x31D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D128u;
label_31d128:
    // 0x31d128: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d12c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d130: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d134: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d138: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d13c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d140: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d144: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d144u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d148: 0x2404490f  addiu       $a0, $zero, 0x490F
    ctx->pc = 0x31d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18703));
    // 0x31d14c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d14cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d150: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d154: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D154u;
    SET_GPR_U32(ctx, 31, 0x31D15Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D154u, 0x31D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D15Cu;
label_31d15c:
    // 0x31d15c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d15cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d160: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D160u;
    SET_GPR_U32(ctx, 31, 0x31D168u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D160u, 0x31D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D168u;
label_31d168:
    // 0x31d168: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d16c: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
    // 0x31d170: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d174: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
    // 0x31d178: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x31D178u;
    {
        const bool branch_taken_0x31d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d178) {
            ctx->pc = 0x31D258u;
            return;
        }
    }
    ctx->pc = 0x31D180u;
}
