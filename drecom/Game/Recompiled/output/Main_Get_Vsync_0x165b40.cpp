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

// Function: Main_Get_Vsync
// Address: 0x165b40 - 0x165b5c
void Main_Get_Vsync_0x165b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Main_Get_Vsync_0x165b40");
#endif

    ctx->pc = 0x165b40u;

    // 0x165b40: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165b44: 0x8c235890  lw          $v1, 0x5890($at)
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F5890u));
    // 0x165b48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x165b4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x165b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x165b50: 0xac235890  sw          $v1, 0x5890($at)
    ctx->pc = 0x165b50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F5890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F5890u, _value); } while (0);
    // 0x165b54: 0x3e00008  jr          $ra
    ctx->pc = 0x165B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165B5Cu;
}
