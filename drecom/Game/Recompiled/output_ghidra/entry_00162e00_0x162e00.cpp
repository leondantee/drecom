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

// Function: entry_00162e00
// Address: 0x162e00 - 0x162e3c
void entry_00162e00_0x162e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162e00_0x162e00");
#endif

    switch (ctx->pc) {
        case 0x162e14u: goto label_162e14;
        case 0x162e38u: goto label_162e38;
        default: break;
    }

    ctx->pc = 0x162e00u;

    // 0x162e00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x162e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162e04: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x162e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x162e08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x162e08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x162e0c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x162E0Cu;
    SET_GPR_U32(ctx, 31, 0x162E14u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x162E0Cu, 0x162E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E14u;
label_162e14:
    // 0x162e14: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x162e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162e18: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x162e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162e1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x162e1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162e20: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x162e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162e24: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x162e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162e28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x162e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x162e2c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x162e2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x162e30: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x162E30u;
    SET_GPR_U32(ctx, 31, 0x162E38u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x162E30u, 0x162E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162E38u;
label_162e38:
    // 0x162e38: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x162e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->pc = 0x162e3cu;
}
