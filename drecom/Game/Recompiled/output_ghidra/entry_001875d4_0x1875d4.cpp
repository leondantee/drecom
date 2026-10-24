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

// Function: entry_001875d4
// Address: 0x1875d4 - 0x187608
void entry_001875d4_0x1875d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001875d4_0x1875d4");
#endif

    switch (ctx->pc) {
        case 0x1875ecu: goto label_1875ec;
        default: break;
    }

    ctx->pc = 0x1875d4u;

    // 0x1875d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1875d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1875d8: 0x8c22efa8  lw          $v0, -0x1058($at)
    ctx->pc = 0x1875d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x1875dc: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x1875dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x1875e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1875e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1875e4: 0xc061014  jal         func_184050
    ctx->pc = 0x1875E4u;
    SET_GPR_U32(ctx, 31, 0x1875ECu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1875E4u, 0x1875ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1875ECu;
label_1875ec:
    // 0x1875ec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1875f0: 0x8c230350  lw          $v1, 0x350($at)
    ctx->pc = 0x1875f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x480350u));
    // 0x1875f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1875f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1875f8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1875f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1875fc: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1875fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187600: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x187600u;
    {
        const bool branch_taken_0x187600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187600) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187608u;
}
