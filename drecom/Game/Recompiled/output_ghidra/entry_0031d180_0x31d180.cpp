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

// Function: entry_0031d180
// Address: 0x31d180 - 0x31d258
void entry_0031d180_0x31d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d180_0x31d180");
#endif

    switch (ctx->pc) {
        case 0x31d1b4u: goto label_31d1b4;
        case 0x31d1c0u: goto label_31d1c0;
        case 0x31d1f4u: goto label_31d1f4;
        case 0x31d200u: goto label_31d200;
        case 0x31d238u: goto label_31d238;
        case 0x31d244u: goto label_31d244;
        default: break;
    }

    ctx->pc = 0x31d180u;

    // 0x31d180: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d184: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d188: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d18c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d190: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d194: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d198: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d19c: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d19cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d1a0: 0x24042d03  addiu       $a0, $zero, 0x2D03
    ctx->pc = 0x31d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11523));
    // 0x31d1a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d1a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d1a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d1ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D1ACu;
    SET_GPR_U32(ctx, 31, 0x31D1B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D1ACu, 0x31D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1B4u;
label_31d1b4:
    // 0x31d1b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d1b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d1b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D1B8u;
    SET_GPR_U32(ctx, 31, 0x31D1C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D1B8u, 0x31D1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1C0u;
label_31d1c0:
    // 0x31d1c0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d1c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d1c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d1cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d1d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d1d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d1dc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d1dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d1e0: 0x2404490c  addiu       $a0, $zero, 0x490C
    ctx->pc = 0x31d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18700));
    // 0x31d1e4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d1e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d1e8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d1ec: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D1ECu;
    SET_GPR_U32(ctx, 31, 0x31D1F4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D1ECu, 0x31D1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D1F4u;
label_31d1f4:
    // 0x31d1f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d1f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d1f8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D1F8u;
    SET_GPR_U32(ctx, 31, 0x31D200u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D1F8u, 0x31D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D200u;
label_31d200:
    // 0x31d200: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x31d200u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d204: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d208: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31d20c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31d20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31d210: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31d210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31d214: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31d214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31d218: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31d21c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31d21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31d220: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31d220u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31d224: 0x2404490d  addiu       $a0, $zero, 0x490D
    ctx->pc = 0x31d224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18701));
    // 0x31d228: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31d228u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31d22c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31d230: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31D230u;
    SET_GPR_U32(ctx, 31, 0x31D238u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31D230u, 0x31D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D238u;
label_31d238:
    // 0x31d238: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31d238u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d23c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31D23Cu;
    SET_GPR_U32(ctx, 31, 0x31D244u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31D23Cu, 0x31D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D244u;
label_31d244:
    // 0x31d244: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x31d244u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31d248: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d24c: 0xac5012a4  sw          $s0, 0x12A4($v0)
    ctx->pc = 0x31d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4772), GPR_U32(ctx, 16));
    // 0x31d250: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d254: 0xac5112a8  sw          $s1, 0x12A8($v0)
    ctx->pc = 0x31d254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4776), GPR_U32(ctx, 17));
    ctx->pc = 0x31d258u;
}
