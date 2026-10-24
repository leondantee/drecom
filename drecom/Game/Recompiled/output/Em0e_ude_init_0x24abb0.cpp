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

// Function: Em0e_ude_init
// Address: 0x24abb0 - 0x24ac34
void Em0e_ude_init_0x24abb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_ude_init_0x24abb0");
#endif

    ctx->pc = 0x24abb0u;

    // 0x24abb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24abb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24abb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24abb8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x24abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x24abbc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x24abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24abc0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x24abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x24abc4: 0x24700fa0  addiu       $s0, $v1, 0xFA0
    ctx->pc = 0x24abc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x24abc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24abc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abcc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24abd0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x24abd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x24abd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24abd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abd8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24abdc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x24abdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24abe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24abe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24abe4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24abe8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x24abe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x24abec: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24abf0: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x24abf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x24abf4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24abf8: 0xa060001d  sb          $zero, 0x1D($v1)
    ctx->pc = 0x24abf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x24abfc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ac00: 0xa060001e  sb          $zero, 0x1E($v1)
    ctx->pc = 0x24ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 30), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ac04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ac08: 0xa060001f  sb          $zero, 0x1F($v1)
    ctx->pc = 0x24ac08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 31), (uint8_t)GPR_U32(ctx, 0));
    // 0x24ac0c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ac10: 0xa4600018  sh          $zero, 0x18($v1)
    ctx->pc = 0x24ac10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x24ac14: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ac18: 0xa460001a  sh          $zero, 0x1A($v1)
    ctx->pc = 0x24ac18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x24ac1c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24ac20: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x24ac20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x24ac24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ac24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ac28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x24ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24ac2c: 0x3e00008  jr          $ra
    ctx->pc = 0x24AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AC34u;
}
