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

// Function: Em10_pl_hang_neck_move
// Address: 0x13b260 - 0x13b2f0
void Em10_pl_hang_neck_move_0x13b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_pl_hang_neck_move_0x13b260");
#endif

    ctx->pc = 0x13b260u;

    // 0x13b260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b264: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b268: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x13b268u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x13b26c: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x13b26cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x13b270: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x13b270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x13b274: 0x2470dbc0  addiu       $s0, $v1, -0x2440
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x13b278: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x13b278u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b27c: 0x948305f0  lhu         $v1, 0x5F0($a0)
    ctx->pc = 0x13b27cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1520)));
    // 0x13b280: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13b284: 0xa48305f0  sh          $v1, 0x5F0($a0)
    ctx->pc = 0x13b284u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1520), (uint16_t)GPR_U32(ctx, 3));
    // 0x13b288: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13b288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b28c: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b290: 0xe46005cc  swc1        $f0, 0x5CC($v1)
    ctx->pc = 0x13b290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1484), bits); }
    // 0x13b294: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b298: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b29c: 0xe46005d0  swc1        $f0, 0x5D0($v1)
    ctx->pc = 0x13b29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1488), bits); }
    // 0x13b2a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b2a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b2a4: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b2a8: 0xe46005d4  swc1        $f0, 0x5D4($v1)
    ctx->pc = 0x13b2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1492), bits); }
    // 0x13b2ac: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x13b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b2b0: 0x94830780  lhu         $v1, 0x780($a0)
    ctx->pc = 0x13b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1920)));
    // 0x13b2b4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x13b2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x13b2b8: 0xa4830780  sh          $v1, 0x780($a0)
    ctx->pc = 0x13b2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1920), (uint16_t)GPR_U32(ctx, 3));
    // 0x13b2bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x13b2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b2c0: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b2c4: 0xe460075c  swc1        $f0, 0x75C($v1)
    ctx->pc = 0x13b2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1884), bits); }
    // 0x13b2c8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x13b2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b2cc: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b2d0: 0xe4600760  swc1        $f0, 0x760($v1)
    ctx->pc = 0x13b2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1888), bits); }
    // 0x13b2d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13b2d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b2d8: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x13b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDE90u));
    // 0x13b2dc: 0xe4600764  swc1        $f0, 0x764($v1)
    ctx->pc = 0x13b2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1892), bits); }
    // 0x13b2e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b2e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b2e4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13b2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B2F0u;
}
