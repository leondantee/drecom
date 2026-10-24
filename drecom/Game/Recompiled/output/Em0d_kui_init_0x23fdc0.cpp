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

// Function: Em0d_kui_init
// Address: 0x23fdc0 - 0x23fe28
void Em0d_kui_init_0x23fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_kui_init_0x23fdc0");
#endif

    ctx->pc = 0x23fdc0u;

    // 0x23fdc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23fdc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23fdc8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x23fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x23fdcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23fdccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fdd0: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x23fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x23fdd4: 0x24703b60  addiu       $s0, $v1, 0x3B60
    ctx->pc = 0x23fdd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15200));
    // 0x23fdd8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fddc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x23fddcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fde0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fde4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x23fde4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x23fde8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fdec: 0xa4600002  sh          $zero, 0x2($v1)
    ctx->pc = 0x23fdecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fdf0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fdf4: 0xa4600004  sh          $zero, 0x4($v1)
    ctx->pc = 0x23fdf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fdf8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fdfc: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x23fdfcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x23fe00: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x23fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23fe04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fe08: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23fe08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x23fe0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23fe0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23fe10: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23fe10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x23fe14: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x23fe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x23fe18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fe18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fe1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23fe1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23fe20: 0x3e00008  jr          $ra
    ctx->pc = 0x23FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FE28u;
}
