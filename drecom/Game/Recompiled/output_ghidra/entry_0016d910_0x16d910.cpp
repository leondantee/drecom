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

// Function: entry_0016d910
// Address: 0x16d910 - 0x16d960
void entry_0016d910_0x16d910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d910_0x16d910");
#endif

    ctx->pc = 0x16d910u;

    // 0x16d910: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x16d910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d914: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d918: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x16d918u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x16d91c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d920: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x16d920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x16d924: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x16d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x16d928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d92c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x16d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x16d930: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d934: 0x8c22bb30  lw          $v0, -0x44D0($at)
    ctx->pc = 0x16d934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB30u));
    // 0x16d938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16d93c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16d93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16d940: 0xac22bb30  sw          $v0, -0x44D0($at)
    ctx->pc = 0x16d940u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BB30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BB30u, _value); } while (0);
    // 0x16d944: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d948: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x16d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x16d94c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d950: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x16d950u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x16d954: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x16d954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d958: 0xc05b668  jal         func_16D9A0
    ctx->pc = 0x16D958u;
    SET_GPR_U32(ctx, 31, 0x16D960u);
    ctx->pc = 0x16D9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D9A0u, 0x16D958u, 0x16D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D960u;
}
