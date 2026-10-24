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

// Function: entry_0015e3c0
// Address: 0x15e3c0 - 0x15e408
void entry_0015e3c0_0x15e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e3c0_0x15e3c0");
#endif

    switch (ctx->pc) {
        case 0x15e3f4u: goto label_15e3f4;
        default: break;
    }

    ctx->pc = 0x15e3c0u;

    // 0x15e3c0: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x15e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x15e3c4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x15e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x15e3c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15e3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15e3cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x15e3ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15e3d0: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x15e3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x15e3d4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15e3d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15e3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15e3dc: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x15e3dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15e3e0: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15e3e4: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x15e3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15e3e8: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x15e3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15e3ec: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x15E3ECu;
    SET_GPR_U32(ctx, 31, 0x15E3F4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x15E3ECu, 0x15E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3F4u;
label_15e3f4:
    // 0x15e3f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15e3f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e3f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e3f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e3fc: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x15e3fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15e400: 0x3e00008  jr          $ra
    ctx->pc = 0x15E400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E408u;
}
