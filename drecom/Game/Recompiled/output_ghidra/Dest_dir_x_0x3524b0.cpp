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

// Function: Dest_dir_x
// Address: 0x3524b0 - 0x352528
void Dest_dir_x_0x3524b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Dest_dir_x_0x3524b0");
#endif

    switch (ctx->pc) {
        case 0x3524d4u: goto label_3524d4;
        case 0x352500u: goto label_352500;
        case 0x352518u: goto label_352518;
        default: break;
    }

    ctx->pc = 0x3524b0u;

    // 0x3524b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3524b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3524b4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3524b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3524b8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3524b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3524bc: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3524bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3524c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3524c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3524c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3524c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3524c8: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x3524c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3524cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x3524CCu;
    SET_GPR_U32(ctx, 31, 0x3524D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x3524CCu, 0x3524D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3524D4u;
label_3524d4:
    // 0x3524d4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3524d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3524d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3524d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3524dc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x3524dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3524e0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3524e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3524e4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3524e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3524e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3524e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3524ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x3524ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3524f0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3524f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x3524f4: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x3524f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3524f8: 0xc045630  jal         func_1158C0
    ctx->pc = 0x3524F8u;
    SET_GPR_U32(ctx, 31, 0x352500u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x3524F8u, 0x352500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352500u;
label_352500:
    // 0x352500: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x352500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x352504: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x352504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352508: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x352508u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x35250c: 0xc7ad002c  lwc1        $f13, 0x2C($sp)
    ctx->pc = 0x35250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352510: 0xc0455e6  jal         func_115798
    ctx->pc = 0x352510u;
    SET_GPR_U32(ctx, 31, 0x352518u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x352510u, 0x352518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352518u;
label_352518:
    // 0x352518: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x352518u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35251c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x35251cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x352520: 0x3e00008  jr          $ra
    ctx->pc = 0x352520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x352520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x352528u;
}
