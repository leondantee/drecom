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

// Function: entry_00187800
// Address: 0x187800 - 0x187834
void entry_00187800_0x187800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187800_0x187800");
#endif

    switch (ctx->pc) {
        case 0x187818u: goto label_187818;
        default: break;
    }

    ctx->pc = 0x187800u;

    // 0x187800: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x187800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x187804: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x187808: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x187808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x18780c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18780cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x187810: 0xc061014  jal         func_184050
    ctx->pc = 0x187810u;
    SET_GPR_U32(ctx, 31, 0x187818u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187810u, 0x187818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187818u;
label_187818:
    // 0x187818: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18781c: 0x8c230350  lw          $v1, 0x350($at)
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x480350u));
    // 0x187820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x187824: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187828: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x18782c: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x18782Cu;
    {
        const bool branch_taken_0x18782c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18782c) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187834u;
}
