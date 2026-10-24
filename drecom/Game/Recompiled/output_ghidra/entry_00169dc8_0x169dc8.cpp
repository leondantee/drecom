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

// Function: entry_00169dc8
// Address: 0x169dc8 - 0x169e20
void entry_00169dc8_0x169dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169dc8_0x169dc8");
#endif

    switch (ctx->pc) {
        case 0x169e04u: goto label_169e04;
        default: break;
    }

    ctx->pc = 0x169dc8u;

    // 0x169dc8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x169dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169dcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169dd0: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x169dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x169dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169dd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x169dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169ddc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x169ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x169de0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x169de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x169de4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169de8: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x169de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x169dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169df0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x169df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169df4: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x169df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x169df8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x169df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169dfc: 0xc05a794  jal         func_169E50
    ctx->pc = 0x169DFCu;
    SET_GPR_U32(ctx, 31, 0x169E04u);
    ctx->pc = 0x169E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E50u, 0x169DFCu, 0x169E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169E04u;
label_169e04:
    // 0x169e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x169e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x169e08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169e0c: 0x8c23bb30  lw          $v1, -0x44D0($at)
    ctx->pc = 0x169e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169e10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x169e14: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169e18: 0xac23bb30  sw          $v1, -0x44D0($at)
    ctx->pc = 0x169e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x169e1c: 0x0  nop
    ctx->pc = 0x169e1cu;
    // NOP
    ctx->pc = 0x169e20u;
}
