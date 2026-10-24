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

// Function: entry_00314dd4
// Address: 0x314dd4 - 0x314e4c
void entry_00314dd4_0x314dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00314dd4_0x314dd4");
#endif

    switch (ctx->pc) {
        case 0x314e2cu: goto label_314e2c;
        default: break;
    }

    ctx->pc = 0x314dd4u;

    // 0x314dd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x314dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314dd8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x314dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x314ddc: 0x3c024108  lui         $v0, 0x4108
    ctx->pc = 0x314ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16648 << 16));
    // 0x314de0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314de4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x314de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314de8: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x314de8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314dec: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x314decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
    // 0x314df0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314df4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x314df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314df8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x314df8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314dfc: 0x3c024258  lui         $v0, 0x4258
    ctx->pc = 0x314dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16984 << 16));
    // 0x314e00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314e04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x314e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314e08: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x314e08u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314e0c: 0x3c0241e8  lui         $v0, 0x41E8
    ctx->pc = 0x314e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16872 << 16));
    // 0x314e10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x314e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x314e14: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x314e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314e18: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x314e18u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x314e1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x314e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x314e20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x314e20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x314e24: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x314E24u;
    SET_GPR_U32(ctx, 31, 0x314E2Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x314E24u, 0x314E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E2Cu;
label_314e2c:
    // 0x314e2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x314e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x314e30: 0x8c24013c  lw          $a0, 0x13C($at)
    ctx->pc = 0x314e30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x314e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x314e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x314e38: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x314e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x314e3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x314E3Cu;
    {
        const bool branch_taken_0x314e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314e3c) {
            ctx->pc = 0x314E4Cu;
            return;
        }
    }
    ctx->pc = 0x314E44u;
    // 0x314e44: 0xc0c50e4  jal         func_314390
    ctx->pc = 0x314E44u;
    SET_GPR_U32(ctx, 31, 0x314E4Cu);
    ctx->pc = 0x314390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x314390u, 0x314E44u, 0x314E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314E4Cu;
}
