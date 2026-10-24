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

// Function: entry_001fc4b0
// Address: 0x1fc4b0 - 0x1fc4e4
void entry_001fc4b0_0x1fc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc4b0_0x1fc4b0");
#endif

    ctx->pc = 0x1fc4b0u;

    // 0x1fc4b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1fc4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc4b4: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x1fc4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x1fc4b8: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x1fc4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x1fc4bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1fc4bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fc4c0: 0xc4800338  lwc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fc4c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fc4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fc4c8: 0xe4800338  swc1        $f0, 0x338($a0)
    ctx->pc = 0x1fc4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 824), bits); }
    // 0x1fc4cc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1fc4ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fc4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fc4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc4d8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1fc4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fc4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4E4u;
}
