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

// Function: entry_001723b4
// Address: 0x1723b4 - 0x1723e0
void entry_001723b4_0x1723b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001723b4_0x1723b4");
#endif

    ctx->pc = 0x1723b4u;

    // 0x1723b4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1723b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1723b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1723bc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1723bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1723c0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1723c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1723c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1723c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1723c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1723cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1723ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1723d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1723d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1723d4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1723d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1723d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1723D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1723D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1723E0u;
}
