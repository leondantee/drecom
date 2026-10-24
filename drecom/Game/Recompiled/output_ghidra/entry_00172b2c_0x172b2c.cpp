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

// Function: entry_00172b2c
// Address: 0x172b2c - 0x172b60
void entry_00172b2c_0x172b2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172b2c_0x172b2c");
#endif

    ctx->pc = 0x172b2cu;

    // 0x172b2c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x172b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b30: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172b34: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x172b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172b38: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x172b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x172b40: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x172b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x172b44: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x172b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172b48: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x172b4c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x172b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x172b50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x172b50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172b54: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x172b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x172b58: 0x3e00008  jr          $ra
    ctx->pc = 0x172B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172B60u;
}
