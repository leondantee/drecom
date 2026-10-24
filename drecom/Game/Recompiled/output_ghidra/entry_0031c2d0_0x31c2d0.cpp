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

// Function: entry_0031c2d0
// Address: 0x31c2d0 - 0x31c354
void entry_0031c2d0_0x31c2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c2d0_0x31c2d0");
#endif

    switch (ctx->pc) {
        case 0x31c304u: goto label_31c304;
        case 0x31c310u: goto label_31c310;
        case 0x31c348u: goto label_31c348;
        default: break;
    }

    ctx->pc = 0x31c2d0u;

    // 0x31c2d0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c2d4: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x31c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31c2d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31c2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c2dc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c2dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31c2e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31c2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c2e4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31c2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31c2e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c2ec: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31c2ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31c2f0: 0x24046107  addiu       $a0, $zero, 0x6107
    ctx->pc = 0x31c2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24839));
    // 0x31c2f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c2f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c2f8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2fc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C2FCu;
    SET_GPR_U32(ctx, 31, 0x31C304u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C2FCu, 0x31C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C304u;
label_31c304:
    // 0x31c304: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c304u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c308: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C308u;
    SET_GPR_U32(ctx, 31, 0x31C310u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C308u, 0x31C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C310u;
label_31c310:
    // 0x31c310: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c314: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x31c314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c318: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31c318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c31c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x31c31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x31c320: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c324: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x31c324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x31c328: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x31c328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x31c32c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x31c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x31c330: 0x24046207  addiu       $a0, $zero, 0x6207
    ctx->pc = 0x31c330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25095));
    // 0x31c334: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c334u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c338: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c33c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x31c33cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c340: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C340u;
    SET_GPR_U32(ctx, 31, 0x31C348u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C340u, 0x31C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C348u;
label_31c348:
    // 0x31c348: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c348u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c34c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C34Cu;
    SET_GPR_U32(ctx, 31, 0x31C354u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C34Cu, 0x31C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C354u;
}
