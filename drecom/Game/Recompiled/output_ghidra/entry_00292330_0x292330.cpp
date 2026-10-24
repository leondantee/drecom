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

// Function: entry_00292330
// Address: 0x292330 - 0x292354
void entry_00292330_0x292330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292330_0x292330");
#endif

    ctx->pc = 0x292330u;

    // 0x292330: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x292330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x292334: 0xac20008c  sw          $zero, 0x8C($at)
    ctx->pc = 0x292334u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D008Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D008Cu, _value); } while (0);
    // 0x292338: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x292338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x29233c: 0x8c22c294  lw          $v0, -0x3D6C($at)
    ctx->pc = 0x29233cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FC294u));
    // 0x292340: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292340u;
    {
        const bool branch_taken_0x292340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292340) {
            ctx->pc = 0x292354u;
            return;
        }
    }
    ctx->pc = 0x292348u;
    // 0x292348: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x292348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29234c: 0xc0d7558  jal         func_35D560
    ctx->pc = 0x29234Cu;
    SET_GPR_U32(ctx, 31, 0x292354u);
    ctx->pc = 0x35D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D560u, 0x29234Cu, 0x292354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292354u;
}
