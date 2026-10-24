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

// Function: entry_0026c978
// Address: 0x26c978 - 0x26c9b4
void entry_0026c978_0x26c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c978_0x26c978");
#endif

    switch (ctx->pc) {
        case 0x26c98cu: goto label_26c98c;
        default: break;
    }

    ctx->pc = 0x26c978u;

    // 0x26c978: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c97c: 0x8c22fd50  lw          $v0, -0x2B0($at)
    ctx->pc = 0x26c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61FD50u));
    // 0x26c980: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x26c984: 0xc09c398  jal         func_270E60
    ctx->pc = 0x26C984u;
    SET_GPR_U32(ctx, 31, 0x26C98Cu);
    ctx->pc = 0x270E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E60u, 0x26C984u, 0x26C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C98Cu;
label_26c98c:
    // 0x26c98c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c990: 0xac22fd50  sw          $v0, -0x2B0($at)
    ctx->pc = 0x26c990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61FD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61FD50u, _value); } while (0);
    // 0x26c994: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26c998: 0x8c23fd50  lw          $v1, -0x2B0($at)
    ctx->pc = 0x26c998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FD50u));
    // 0x26c99c: 0x4610005  bgez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C99Cu;
    {
        const bool branch_taken_0x26c99c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x26c99c) {
            ctx->pc = 0x26C9B4u;
            return;
        }
    }
    ctx->pc = 0x26C9A4u;
    // 0x26c9a4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c9a8: 0xac801b60  sw          $zero, 0x1B60($a0)
    ctx->pc = 0x26c9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 0));
    // 0x26c9ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26C9ACu;
    {
        const bool branch_taken_0x26c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c9ac) {
            ctx->pc = 0x26C9D0u;
            return;
        }
    }
    ctx->pc = 0x26C9B4u;
}
