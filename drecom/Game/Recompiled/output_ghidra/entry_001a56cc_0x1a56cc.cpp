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

// Function: entry_001a56cc
// Address: 0x1a56cc - 0x1a5710
void entry_001a56cc_0x1a56cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a56cc_0x1a56cc");
#endif

    ctx->pc = 0x1a56ccu;

    // 0x1a56cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56d0: 0xac203cf8  sw          $zero, 0x3CF8($at)
    ctx->pc = 0x1a56d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CF8u, _value); } while (0);
    // 0x1a56d4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a56d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56dc: 0xac223ce8  sw          $v0, 0x3CE8($at)
    ctx->pc = 0x1a56dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CE8u, _value); } while (0);
    // 0x1a56e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a56e4: 0xac203cd8  sw          $zero, 0x3CD8($at)
    ctx->pc = 0x1a56e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D3CD8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CD8u, _value); } while (0);
    // 0x1a56e8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a56e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a56ec: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a56ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a56f0: 0x92020311  lbu         $v0, 0x311($s0)
    ctx->pc = 0x1a56f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 785)));
    // 0x1a56f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1a56f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a56f8: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x1a56f8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1a56fc: 0x0  nop
    ctx->pc = 0x1a56fcu;
    // NOP
    // 0x1a5700: 0x0  nop
    ctx->pc = 0x1a5700u;
    // NOP
    // 0x1a5704: 0x1012  mflo        $v0
    ctx->pc = 0x1a5704u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1a5708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a5708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a570c: 0xac223cc8  sw          $v0, 0x3CC8($at)
    ctx->pc = 0x1a570cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3CC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D3CC8u, _value); } while (0);
    ctx->pc = 0x1a5710u;
}
