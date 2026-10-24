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

// Function: entry_0015dfd8
// Address: 0x15dfd8 - 0x15e020
void entry_0015dfd8_0x15dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dfd8_0x15dfd8");
#endif

    switch (ctx->pc) {
        case 0x15e00cu: goto label_15e00c;
        default: break;
    }

    ctx->pc = 0x15dfd8u;

    // 0x15dfd8: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15dfdc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15dfe0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15dfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15dfe4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15dfe4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15dfe8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15dfe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15dfec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15dfecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15dff0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15dff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15dff4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15dff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15dff8: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15dff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15dffc: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e000: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e004: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E004u;
    SET_GPR_U32(ctx, 31, 0x15E00Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E004u, 0x15E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E00Cu;
label_15e00c:
    // 0x15e00c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e00cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e014: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15e014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e018: 0x3e00008  jr          $ra
    ctx->pc = 0x15E018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E020u;
}
