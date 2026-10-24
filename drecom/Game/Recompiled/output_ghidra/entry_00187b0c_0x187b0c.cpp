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

// Function: entry_00187b0c
// Address: 0x187b0c - 0x187b2c
void entry_00187b0c_0x187b0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187b0c_0x187b0c");
#endif

    switch (ctx->pc) {
        case 0x187b24u: goto label_187b24;
        default: break;
    }

    ctx->pc = 0x187b0cu;

    // 0x187b0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x187b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x187b10: 0x2444ef90  addiu       $a0, $v0, -0x1070
    ctx->pc = 0x187b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963088));
    // 0x187b14: 0x264501a0  addiu       $a1, $s2, 0x1A0
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x187b18: 0x26460190  addiu       $a2, $s2, 0x190
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 400));
    // 0x187b1c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x187B1Cu;
    SET_GPR_U32(ctx, 31, 0x187B24u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x187B1Cu, 0x187B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B24u;
label_187b24:
    // 0x187b24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x187b28: 0xac200360  sw          $zero, 0x360($at)
    ctx->pc = 0x187b28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480360u, _value); } while (0);
    ctx->pc = 0x187b2cu;
}
