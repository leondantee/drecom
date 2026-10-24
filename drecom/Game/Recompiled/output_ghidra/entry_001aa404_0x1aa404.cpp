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

// Function: entry_001aa404
// Address: 0x1aa404 - 0x1aa44c
void entry_001aa404_0x1aa404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa404_0x1aa404");
#endif

    ctx->pc = 0x1aa404u;

    // 0x1aa404: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1aa404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aa408: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aa408u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa410: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aa410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aa414: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1aa414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa418: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x1aa418u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aa41c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa420: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1aa424: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1aa424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1aa428: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1aa428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa42c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1aa42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa430: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1aa430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1aa434: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x1aa434u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa438: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa43c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa440: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1aa444: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA44Cu;
}
