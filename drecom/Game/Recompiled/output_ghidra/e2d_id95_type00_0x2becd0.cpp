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

// Function: e2d_id95_type00
// Address: 0x2becd0 - 0x2bed1c
void e2d_id95_type00_0x2becd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id95_type00_0x2becd0");
#endif

    switch (ctx->pc) {
        case 0x2bece4u: goto label_2bece4;
        default: break;
    }

    ctx->pc = 0x2becd0u;

    // 0x2becd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2becd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2becd4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2becd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2becd8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2becd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2becdc: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BECDCu;
    SET_GPR_U32(ctx, 31, 0x2BECE4u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BECDCu, 0x2BECE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECE4u;
label_2bece4:
    // 0x2bece4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bece4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bece8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bece8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2becec: 0x0  nop
    ctx->pc = 0x2bececu;
    // NOP
    // 0x2becf0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2becf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2becf4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2becf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2becf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2becf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2becfc: 0x0  nop
    ctx->pc = 0x2becfcu;
    // NOP
    // 0x2bed00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bed00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bed04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bed04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bed08: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bed08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bed0c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bed0cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bed10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bed14: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED1Cu;
}
