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

// Function: caseD_4
// Address: 0x1876b0 - 0x1876d8
void caseD_4_0x1876b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1876b0");
#endif

    switch (ctx->pc) {
        case 0x1876bcu: goto label_1876bc;
        default: break;
    }

    ctx->pc = 0x1876b0u;

    // 0x1876b0: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1876b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1876b4: 0xc061014  jal         func_184050
    ctx->pc = 0x1876B4u;
    SET_GPR_U32(ctx, 31, 0x1876BCu);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x1876B4u, 0x1876BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1876BCu;
label_1876bc:
    // 0x1876bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1876c0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1876c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1876c4: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x1876c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x1876c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1876c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1876cc: 0xae030168  sw          $v1, 0x168($s0)
    ctx->pc = 0x1876ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 3));
    // 0x1876d0: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x1876D0u;
    {
        const bool branch_taken_0x1876d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1876d0) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x1876D8u;
}
