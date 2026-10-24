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

// Function: entry_00187544
// Address: 0x187544 - 0x18756c
void entry_00187544_0x187544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187544_0x187544");
#endif

    switch (ctx->pc) {
        case 0x187558u: goto label_187558;
        default: break;
    }

    ctx->pc = 0x187544u;

    // 0x187544: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x187544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x187548: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x187548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x18754c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x18754cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x187550: 0xc061014  jal         func_184050
    ctx->pc = 0x187550u;
    SET_GPR_U32(ctx, 31, 0x187558u);
    ctx->pc = 0x184050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184050u, 0x187550u, 0x187558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187558u;
label_187558:
    // 0x187558: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x187558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18755c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187560: 0xac230350  sw          $v1, 0x350($at)
    ctx->pc = 0x187560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480350u, _value); } while (0);
    // 0x187564: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x187564u;
    {
        const bool branch_taken_0x187564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187564) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x18756Cu;
}
