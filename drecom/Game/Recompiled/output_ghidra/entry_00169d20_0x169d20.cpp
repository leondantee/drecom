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

// Function: entry_00169d20
// Address: 0x169d20 - 0x169d70
void entry_00169d20_0x169d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169d20_0x169d20");
#endif

    ctx->pc = 0x169d20u;

    // 0x169d20: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x169d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d28: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169d2c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x169d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x169d30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x169d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x169d34: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x169d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x169d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x169d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x169d3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x169d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x169d40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d44: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x169d44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x169d48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x169d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169d4c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x169d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x169d50: 0xac22bb30  sw          $v0, -0x44D0($at)
    ctx->pc = 0x169d50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x169d54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d58: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x169d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x169d5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x169d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169d60: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x169d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x169d64: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x169d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x169d68: 0xc05a794  jal         func_169E50
    ctx->pc = 0x169D68u;
    SET_GPR_U32(ctx, 31, 0x169D70u);
    ctx->pc = 0x169E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E50u, 0x169D68u, 0x169D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D70u;
}
