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

// Function: entry_003773bc
// Address: 0x3773bc - 0x3773e4
void entry_003773bc_0x3773bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003773bc_0x3773bc");
#endif

    ctx->pc = 0x3773bcu;

    // 0x3773bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773c0: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x3773c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3773c4: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x3773c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x3773c8: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x3773c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x3773cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773d0: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x3773d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x3773d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3773d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3773d8: 0x8c220398  lw          $v0, 0x398($at)
    ctx->pc = 0x3773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0398u));
    // 0x3773dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3773dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3773e0: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x3773e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    ctx->pc = 0x3773e4u;
}
