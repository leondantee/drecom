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

// Function: entry_0018751c
// Address: 0x18751c - 0x187544
void entry_0018751c_0x18751c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018751c_0x18751c");
#endif

    switch (ctx->pc) {
        case 0x187530u: goto label_187530;
        default: break;
    }

    ctx->pc = 0x18751cu;

    // 0x18751c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x18751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187520: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x187524: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x187524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187528: 0xc061014  jal         func_184050
    ctx->pc = 0x187528u;
    SET_GPR_U32(ctx, 31, 0x187530u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187528u, 0x187530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187530u;
label_187530:
    // 0x187530: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x187530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187534: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187538: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187538u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x18753c: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x18753Cu;
    {
        const bool branch_taken_0x18753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18753c) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187544u;
}
