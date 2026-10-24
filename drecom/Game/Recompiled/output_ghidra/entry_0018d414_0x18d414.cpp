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

// Function: entry_0018d414
// Address: 0x18d414 - 0x18d48c
void entry_0018d414_0x18d414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d414_0x18d414");
#endif

    switch (ctx->pc) {
        case 0x18d468u: goto label_18d468;
        default: break;
    }

    ctx->pc = 0x18d414u;

    // 0x18d414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18d414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d418: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d41c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d420: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d42c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d430: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x18d430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d434: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x18d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x18d438: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18d43c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x18d43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x18d440: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18d444: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x18d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x18d448: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x18d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x18d44c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18d450: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x18d450u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x18d454: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x18d454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d458: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x18d458u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d45c: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x18d45cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x18d460: 0xc06352c  jal         func_18D4B0
    ctx->pc = 0x18D460u;
    SET_GPR_U32(ctx, 31, 0x18D468u);
    ctx->pc = 0x18D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D4B0u, 0x18D460u, 0x18D468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D468u;
label_18d468:
    // 0x18d468: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18d468u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18d46c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18d470: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18d470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18d474: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18D474u;
    {
        const bool branch_taken_0x18d474 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x18d474) {
            ctx->pc = 0x18D48Cu;
            return;
        }
    }
    ctx->pc = 0x18D47Cu;
    // 0x18d47c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d480: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x18d480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    // 0x18d484: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x18d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x18d488: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x18d488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    ctx->pc = 0x18d48cu;
}
