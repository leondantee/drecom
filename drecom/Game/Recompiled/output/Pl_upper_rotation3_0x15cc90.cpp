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

// Function: Pl_upper_rotation3
// Address: 0x15cc90 - 0x15cce8
void Pl_upper_rotation3_0x15cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_upper_rotation3_0x15cc90");
#endif

    ctx->pc = 0x15cc90u;

    // 0x15cc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15cc94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cc98: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x15cc98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15cc9c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x15cc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15cca0: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x15cca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x15cca4: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x15cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x15cca8: 0x94830140  lhu         $v1, 0x140($a0)
    ctx->pc = 0x15cca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x15ccac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x15ccacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x15ccb0: 0xa4830140  sh          $v1, 0x140($a0)
    ctx->pc = 0x15ccb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x15ccb4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x15ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ccb8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x15ccbc: 0xe460011c  swc1        $f0, 0x11C($v1)
    ctx->pc = 0x15ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 284), bits); }
    // 0x15ccc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ccc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ccc4: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x15ccc8: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x15ccc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x15cccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ccccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ccd0: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x15ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x15ccd4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x15ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x15ccd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ccd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ccdc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15ccdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x15CCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CCE8u;
}
