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

// Function: entry_00331610
// Address: 0x331610 - 0x3316b4
void entry_00331610_0x331610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331610_0x331610");
#endif

    switch (ctx->pc) {
        case 0x3316a0u: goto label_3316a0;
        default: break;
    }

    ctx->pc = 0x331610u;

    // 0x331610: 0x2a470002  slti        $a3, $s2, 0x2
    ctx->pc = 0x331610u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x331614: 0x14e0ff1b  bnez        $a3, . + 4 + (-0xE5 << 2)
    ctx->pc = 0x331614u;
    {
        const bool branch_taken_0x331614 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x331614) {
            ctx->pc = 0x331284u;
            return;
        }
    }
    ctx->pc = 0x33161Cu;
    // 0x33161c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x33161cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x331620: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x331620u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x331624: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x331624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x331628: 0x34631009  ori         $v1, $v1, 0x1009
    ctx->pc = 0x331628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4105);
    // 0x33162c: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x33162cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x331630: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x331630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x331634: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x331634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x331638: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x331638u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x33163c: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x33163cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
    // 0x331640: 0x3467000a  ori         $a3, $v1, 0xA
    ctx->pc = 0x331640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
    // 0x331644: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x331644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x331648: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x331648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33164c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33164cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x331650: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x331650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x331654: 0xe31025  or          $v0, $a3, $v1
    ctx->pc = 0x331654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x331658: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x331658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33165c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x33165cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x331660: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x331660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x331664: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x331664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x331668: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x331668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x33166c: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x33166cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x331670: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331674: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x331674u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x331678: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x331678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33167c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33167cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x331680: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x331680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x331684: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x331684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331688: 0xfe860008  sd          $a2, 0x8($s4)
    ctx->pc = 0x331688u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 6));
    // 0x33168c: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x33168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x331690: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x331690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x331694: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x331694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x331698: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x331698u;
    SET_GPR_U32(ctx, 31, 0x3316A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x331698u, 0x3316A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3316A0u;
label_3316a0:
    // 0x3316a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x3316a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3316a4: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x3316a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3316a8: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x3316a8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x3316ac: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x3316ACu;
    {
        const bool branch_taken_0x3316ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3316ac) {
            ctx->pc = 0x331C48u;
            return;
        }
    }
    ctx->pc = 0x3316B4u;
}
