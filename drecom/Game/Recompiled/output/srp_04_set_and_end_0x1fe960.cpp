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

// Function: srp_04_set_and_end
// Address: 0x1fe960 - 0x1fe984
void srp_04_set_and_end_0x1fe960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_04_set_and_end_0x1fe960");
#endif

    ctx->pc = 0x1fe960u;

    // 0x1fe960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe964: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1fe964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1fe968: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1fe968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe96c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x1fe96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x1fe970: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x1fe970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x1fe974: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x1fe974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x1fe978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fe978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fe97c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE984u;
}
