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

// Function: entry_0031c248
// Address: 0x31c248 - 0x31c2d0
void entry_0031c248_0x31c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c248_0x31c248");
#endif

    switch (ctx->pc) {
        case 0x31c27cu: goto label_31c27c;
        case 0x31c288u: goto label_31c288;
        case 0x31c2bcu: goto label_31c2bc;
        case 0x31c2c8u: goto label_31c2c8;
        default: break;
    }

    ctx->pc = 0x31c248u;

    // 0x31c248: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c24c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x31c24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31c250: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x31c250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31c254: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31c258: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x31c258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c25c: 0x101438  dsll        $v0, $s0, 16
    ctx->pc = 0x31c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << 16);
    // 0x31c260: 0x3451ffff  ori         $s1, $v0, 0xFFFF
    ctx->pc = 0x31c260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31c264: 0x713824  and         $a3, $v1, $s1
    ctx->pc = 0x31c264u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x31c268: 0x24046102  addiu       $a0, $zero, 0x6102
    ctx->pc = 0x31c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24834));
    // 0x31c26c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c26cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c270: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c274: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C274u;
    SET_GPR_U32(ctx, 31, 0x31C27Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C274u, 0x31C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C27Cu;
label_31c27c:
    // 0x31c27c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c27cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c280: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C280u;
    SET_GPR_U32(ctx, 31, 0x31C288u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C280u, 0x31C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C288u;
label_31c288:
    // 0x31c288: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c28c: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x31c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x31c290: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x31c290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31c294: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x31c294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x31c298: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x31c298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31c29c: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x31c29cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x31c2a0: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x31c2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x31c2a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x31c2a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31c2a8: 0x24046202  addiu       $a0, $zero, 0x6202
    ctx->pc = 0x31c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25090));
    // 0x31c2ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31c2acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31c2b0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x31c2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x31c2b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x31C2B4u;
    SET_GPR_U32(ctx, 31, 0x31C2BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x31C2B4u, 0x31C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2BCu;
label_31c2bc:
    // 0x31c2bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x31c2bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x31c2c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x31C2C0u;
    SET_GPR_U32(ctx, 31, 0x31C2C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x31C2C0u, 0x31C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C2C8u;
label_31c2c8:
    // 0x31c2c8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x31C2C8u;
    {
        const bool branch_taken_0x31c2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c2c8) {
            ctx->pc = 0x31C354u;
            return;
        }
    }
    ctx->pc = 0x31C2D0u;
}
