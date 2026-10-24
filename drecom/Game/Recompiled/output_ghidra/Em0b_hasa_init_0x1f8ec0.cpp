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

// Function: Em0b_hasa_init
// Address: 0x1f8ec0 - 0x1f8f40
void Em0b_hasa_init_0x1f8ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_hasa_init_0x1f8ec0");
#endif

    ctx->pc = 0x1f8ec0u;

    // 0x1f8ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8ec4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f8ec8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1f8ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1f8ecc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8ed0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1f8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1f8ed4: 0x24703520  addiu       $s0, $v1, 0x3520
    ctx->pc = 0x1f8ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
    // 0x1f8ed8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8ed8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8edc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8ee0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1f8ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1f8ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8ee8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8eec: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f8eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f8ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8ef4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8ef8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f8ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f8efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f8efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8f00: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f04: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f8f08: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f0c: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x1f8f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8f10: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f14: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x1f8f14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f8f18: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f1c: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x1f8f1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8f20: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f24: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x1f8f24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8f28: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f8f2c: 0xa460002e  sh          $zero, 0x2E($v1)
    ctx->pc = 0x1f8f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 46), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f8f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f8f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8f34: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1f8f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f8f38: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8F40u;
}
