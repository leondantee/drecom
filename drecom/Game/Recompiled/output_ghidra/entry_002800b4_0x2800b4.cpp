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

// Function: entry_002800b4
// Address: 0x2800b4 - 0x2800dc
void entry_002800b4_0x2800b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002800b4_0x2800b4");
#endif

    switch (ctx->pc) {
        case 0x2800bcu: goto label_2800bc;
        default: break;
    }

    ctx->pc = 0x2800b4u;

    // 0x2800b4: 0xc0a1244  jal         func_284910
    ctx->pc = 0x2800B4u;
    SET_GPR_U32(ctx, 31, 0x2800BCu);
    ctx->pc = 0x284910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284910u, 0x2800B4u, 0x2800BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800BCu;
label_2800bc:
    // 0x2800bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2800bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2800c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800c4: 0xa022d4b1  sb          $v0, -0x2B4F($at)
    ctx->pc = 0x2800c4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x2800c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800cc: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x2800ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x2800d0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x2800d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2800d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2800d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2800d8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x2800d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    ctx->pc = 0x2800dcu;
}
