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

// Function: caseD_a
// Address: 0x18788c - 0x1878ac
void caseD_a_0x18788c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x18788c");
#endif

    switch (ctx->pc) {
        case 0x187898u: goto label_187898;
        default: break;
    }

    ctx->pc = 0x18788cu;

    // 0x18788c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x18788cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x187890: 0xc061014  jal         func_184050
    ctx->pc = 0x187890u;
    SET_GPR_U32(ctx, 31, 0x187898u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187890u, 0x187898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187898u;
label_187898:
    // 0x187898: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x187898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x18789c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18789cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1878a0: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1878a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x1878a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1878a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1878a8: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1878a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    ctx->pc = 0x1878acu;
}
