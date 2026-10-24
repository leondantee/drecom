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

// Function: Om8bSetEffLight2
// Address: 0x33f940 - 0x33f960
void Om8bSetEffLight2_0x33f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8bSetEffLight2_0x33f940");
#endif

    ctx->pc = 0x33f940u;

    // 0x33f940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f944: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33f948: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x33f948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x33f94c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x33f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x33f950: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33f950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f954: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x33f954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33f958: 0x3e00008  jr          $ra
    ctx->pc = 0x33F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F960u;
}
