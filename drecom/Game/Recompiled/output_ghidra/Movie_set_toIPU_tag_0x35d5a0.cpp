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

// Function: Movie_set_toIPU_tag
// Address: 0x35d5a0 - 0x35d648
void Movie_set_toIPU_tag_0x35d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Movie_set_toIPU_tag_0x35d5a0");
#endif

    switch (ctx->pc) {
        case 0x35d624u: goto label_35d624;
        default: break;
    }

    ctx->pc = 0x35d5a0u;

    // 0x35d5a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35d5a4: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x35d5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x35d5a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35d5ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35d5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35d5b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d5b4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x35d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x35d5b8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x35d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x35d5bc: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x35d5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x35d5c0: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x35d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x35d5c4: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x35d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d5c8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x35d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x35d5cc: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x35d5ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35d5d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35d5d4: 0x2893c  dsll32      $s1, $v0, 4
    ctx->pc = 0x35d5d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 4));
    // 0x35d5d8: 0x11893e  dsrl32      $s1, $s1, 4
    ctx->pc = 0x35d5d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 4));
    // 0x35d5dc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x35d5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x35d5e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x35d5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x35d5e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x35d5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d5e8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x35d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35d5ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x35d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d5f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x35d5f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x35d5f4: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x35d5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
    // 0x35d5f8: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x35d5f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x35d5fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x35d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d600: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x35d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x35d604: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35d608: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x35d608u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x35d60c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35d610: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x35d610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x35d614: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x35d614u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x35d618: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x35d618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35d61c: 0xc0476f8  jal         func_11DBE0
    ctx->pc = 0x35D61Cu;
    SET_GPR_U32(ctx, 31, 0x35D624u);
    ctx->pc = 0x11DBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DBE0u, 0x35D61Cu, 0x35D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D624u;
label_35d624:
    // 0x35d624: 0x2421825  or          $v1, $s2, $v0
    ctx->pc = 0x35d624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x35d628: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x35d628u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x35d62c: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x35d62cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35d630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35d634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d63c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x35d63cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35d640: 0x3e00008  jr          $ra
    ctx->pc = 0x35D640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D648u;
}
