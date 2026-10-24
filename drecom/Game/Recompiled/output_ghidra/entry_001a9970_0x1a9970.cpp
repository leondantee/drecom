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

// Function: entry_001a9970
// Address: 0x1a9970 - 0x1a99b8
void entry_001a9970_0x1a9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9970_0x1a9970");
#endif

    ctx->pc = 0x1a9970u;

    // 0x1a9970: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1a9970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9974: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1a9974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1a9978: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1a9978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1a997c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a997cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a9980: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1a9980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1a9984: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a9988: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x1a9988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x1a998c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1a998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x1a9990: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a9990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a9994: 0xaca3020c  sw          $v1, 0x20C($a1)
    ctx->pc = 0x1a9994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 524), GPR_U32(ctx, 3));
    // 0x1a9998: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1a9998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1a999c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1a99a0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1a99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1a99a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1a99a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a99a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a99a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a99ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1a99b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A99B8u;
}
