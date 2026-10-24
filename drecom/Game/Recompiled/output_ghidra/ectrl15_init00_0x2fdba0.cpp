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

// Function: ectrl15_init00
// Address: 0x2fdba0 - 0x2fdbcc
void ectrl15_init00_0x2fdba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl15_init00_0x2fdba0");
#endif

    ctx->pc = 0x2fdba0u;

    // 0x2fdba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fdba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fdba4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2fdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2fdba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fdba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fdbac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2fdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdbb0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2fdbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2fdbb4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x2fdbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2fdbb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2fdbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fdbbc: 0xa06400e2  sb          $a0, 0xE2($v1)
    ctx->pc = 0x2fdbbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 226), (uint8_t)GPR_U32(ctx, 4));
    // 0x2fdbc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2fdbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fdbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDBCCu;
}
