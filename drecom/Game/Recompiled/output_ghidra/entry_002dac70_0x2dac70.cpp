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

// Function: entry_002dac70
// Address: 0x2dac70 - 0x2dac98
void entry_002dac70_0x2dac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dac70_0x2dac70");
#endif

    ctx->pc = 0x2dac70u;

    // 0x2dac70: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac74: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x2dac74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x2dac78: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x2dac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dac7c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x2dac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x2dac80: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2dac80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dac84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dac84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dac88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dac88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dac8c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2dac8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2dac90: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAC98u;
}
