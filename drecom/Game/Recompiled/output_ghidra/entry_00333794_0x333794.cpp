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

// Function: entry_00333794
// Address: 0x333794 - 0x3337c0
void entry_00333794_0x333794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00333794_0x333794");
#endif

    switch (ctx->pc) {
        case 0x3337b8u: goto label_3337b8;
        default: break;
    }

    ctx->pc = 0x333794u;

    // 0x333794: 0x171400  sll         $v0, $s7, 16
    ctx->pc = 0x333794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 16));
    // 0x333798: 0x34420096  ori         $v0, $v0, 0x96
    ctx->pc = 0x333798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)150);
    // 0x33379c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x33379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x3337a0: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3337a4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x3337a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3337a8: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x3337a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x3337ac: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x3337acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3337b0: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x3337B0u;
    SET_GPR_U32(ctx, 31, 0x3337B8u);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x3337B0u, 0x3337B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337B8u;
label_3337b8:
    // 0x3337b8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x3337b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x3337bc: 0xac202798  sw          $zero, 0x2798($at)
    ctx->pc = 0x3337bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x892798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x892798u, _value); } while (0);
    ctx->pc = 0x3337c0u;
}
