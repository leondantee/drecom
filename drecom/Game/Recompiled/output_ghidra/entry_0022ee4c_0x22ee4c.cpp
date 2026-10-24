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

// Function: entry_0022ee4c
// Address: 0x22ee4c - 0x22ee98
void entry_0022ee4c_0x22ee4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ee4c_0x22ee4c");
#endif

    ctx->pc = 0x22ee4cu;

    // 0x22ee4c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x22ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee50: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x22ee54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22ee58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee5c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22ee5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22ee60: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x22ee60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ee64: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x22ee64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ee68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22ee68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22ee6c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22ee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22ee70: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee74: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x22ee74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22ee78: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x22ee78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22ee7c: 0x8c470368  lw          $a3, 0x368($v0)
    ctx->pc = 0x22ee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x22ee80: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x22ee80u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x22ee84: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x22ee84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x22ee88: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22ee88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ee8c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x22ee8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x22ee90: 0xc0965d0  jal         func_259740
    ctx->pc = 0x22EE90u;
    SET_GPR_U32(ctx, 31, 0x22EE98u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x22EE90u, 0x22EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EE98u;
}
