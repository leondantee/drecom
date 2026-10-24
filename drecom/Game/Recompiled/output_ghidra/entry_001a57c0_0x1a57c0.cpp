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

// Function: entry_001a57c0
// Address: 0x1a57c0 - 0x1a5804
void entry_001a57c0_0x1a57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a57c0_0x1a57c0");
#endif

    ctx->pc = 0x1a57c0u;

    // 0x1a57c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57c4: 0xac203cf0  sw          $zero, 0x3CF0($at)
    ctx->pc = 0x1a57c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF0u, _value); } while (0);
    // 0x1a57c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a57c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a57cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57d0: 0xac223ce0  sw          $v0, 0x3CE0($at)
    ctx->pc = 0x1a57d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE0u, _value); } while (0);
    // 0x1a57d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a57d8: 0xac203cd0  sw          $zero, 0x3CD0($at)
    ctx->pc = 0x1a57d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD0u, _value); } while (0);
    // 0x1a57dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a57e0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1a57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a57e4: 0x92020312  lbu         $v0, 0x312($s0)
    ctx->pc = 0x1a57e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 786)));
    // 0x1a57e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a57e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a57ec: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a57ecu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a57f0: 0x0  nop
    ctx->pc = 0x1a57f0u;
    // NOP
    // 0x1a57f4: 0x0  nop
    ctx->pc = 0x1a57f4u;
    // NOP
    // 0x1a57f8: 0x1012  mflo        $v0
    ctx->pc = 0x1a57f8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a57fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a57fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a5800: 0xac223cc0  sw          $v0, 0x3CC0($at)
    ctx->pc = 0x1a5800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC0u, _value); } while (0);
    ctx->pc = 0x1a5804u;
}
