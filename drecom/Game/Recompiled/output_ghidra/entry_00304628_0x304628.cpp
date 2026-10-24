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

// Function: entry_00304628
// Address: 0x304628 - 0x30469c
void entry_00304628_0x304628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00304628_0x304628");
#endif

    switch (ctx->pc) {
        case 0x304648u: goto label_304648;
        case 0x304680u: goto label_304680;
        case 0x30468cu: goto label_30468c;
        default: break;
    }

    ctx->pc = 0x304628u;

    // 0x304628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x304628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30462c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30462cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304630: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x304630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x304634: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x304634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x304638: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x304638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30463c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x30463cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x304640: 0xc0965d0  jal         func_259740
    ctx->pc = 0x304640u;
    SET_GPR_U32(ctx, 31, 0x304648u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x304640u, 0x304648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304648u;
label_304648:
    // 0x304648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x304648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30464c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x30464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x304650: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x304650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x304654: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x304654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x304658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x304658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30465c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x304660: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x304660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x304664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x304664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x304668: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x304668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30466c: 0x24040500  addiu       $a0, $zero, 0x500
    ctx->pc = 0x30466cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x304670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x304670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x304674: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x304674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x304678: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x304678u;
    SET_GPR_U32(ctx, 31, 0x304680u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x304678u, 0x304680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304680u;
label_304680:
    // 0x304680: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x304680u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x304684: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x304684u;
    SET_GPR_U32(ctx, 31, 0x30468Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x304684u, 0x30468Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30468Cu;
label_30468c:
    // 0x30468c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30468cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x304690: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x304690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x304694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304698: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x304698u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x30469cu;
}
