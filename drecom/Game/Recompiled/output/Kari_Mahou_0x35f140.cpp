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

// Function: Kari_Mahou
// Address: 0x35f140 - 0x35f1a4
void Kari_Mahou_0x35f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Kari_Mahou_0x35f140");
#endif

    ctx->pc = 0x35f140u;

    // 0x35f140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35f144: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f148: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x35f148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x35f14c: 0x8c30dd6c  lw          $s0, -0x2294($at)
    ctx->pc = 0x35f14cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3EDD6Cu));
    // 0x35f150: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35f150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35f154: 0x2463dce0  addiu       $v1, $v1, -0x2320
    ctx->pc = 0x35f154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x35f158: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x35f158u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x3EDCE0u));
    // 0x35f15c: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x35f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x35f160: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x35f160u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x35f164: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x35f164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f168: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x35f168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x35f16c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f16cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f170: 0x0  nop
    ctx->pc = 0x35f170u;
    // NOP
    // 0x35f174: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35f174u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35f178: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x35f178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x35f17c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f180: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x35f180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f184: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x35f184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f188: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x35f188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f18c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x35f18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f190: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35f190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35f194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f198: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x35f198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35f19c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F1A4u;
}
