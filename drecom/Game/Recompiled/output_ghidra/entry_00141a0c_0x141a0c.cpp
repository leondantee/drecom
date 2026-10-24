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

// Function: entry_00141a0c
// Address: 0x141a0c - 0x141a8c
void entry_00141a0c_0x141a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141a0c_0x141a0c");
#endif

    switch (ctx->pc) {
        case 0x141a20u: goto label_141a20;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a74u: goto label_141a74;
        default: break;
    }

    ctx->pc = 0x141a0cu;

    // 0x141a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141a10: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x141a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x141a14: 0x244521b0  addiu       $a1, $v0, 0x21B0
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x141a18: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x141A18u;
    SET_GPR_U32(ctx, 31, 0x141A20u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x141A18u, 0x141A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A20u;
label_141a20:
    // 0x141a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141a24: 0xc06750c  jal         func_19D430
    ctx->pc = 0x141A24u;
    SET_GPR_U32(ctx, 31, 0x141A2Cu);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x141A24u, 0x141A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A2Cu;
label_141a2c:
    // 0x141a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141a30: 0x8c229198  lw          $v0, -0x6E68($at)
    ctx->pc = 0x141a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9198u));
    // 0x141a34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141a38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a3c: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x141a3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x141a40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a44: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141a48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141a4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a54: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141a58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a5c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141a60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x141a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x141a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a68: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141a6c: 0xc06ad78  jal         func_1AB5E0
    ctx->pc = 0x141A6Cu;
    SET_GPR_U32(ctx, 31, 0x141A74u);
    ctx->pc = 0x1AB5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB5E0u, 0x141A6Cu, 0x141A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A74u;
label_141a74:
    // 0x141a74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141a78: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x141a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x141a7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141a80: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x141a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x141a84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x141A84u;
    {
        const bool branch_taken_0x141a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a84) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x141A8Cu;
}
