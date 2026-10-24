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

// Function: entry_00282b74
// Address: 0x282b74 - 0x282bb8
void entry_00282b74_0x282b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282b74_0x282b74");
#endif

    ctx->pc = 0x282b74u;

    // 0x282b74: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x282b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282b78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b7c: 0xa022d5f1  sb          $v0, -0x2A0F($at)
    ctx->pc = 0x282b7cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F1u, _value); } while (0);
    // 0x282b80: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x282b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x282b84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b88: 0xa022d5f3  sb          $v0, -0x2A0D($at)
    ctx->pc = 0x282b88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD5F3u, _value); } while (0);
    // 0x282b8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x282b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x282b90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b94: 0xa422d5f8  sh          $v0, -0x2A08($at)
    ctx->pc = 0x282b94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5F8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5F8u, _value); } while (0);
    // 0x282b98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282b9c: 0xa420d5fa  sh          $zero, -0x2A06($at)
    ctx->pc = 0x282b9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FAu, _value); } while (0);
    // 0x282ba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x282ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282ba4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282ba8: 0xa422d5fc  sh          $v0, -0x2A04($at)
    ctx->pc = 0x282ba8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD5FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FCu, _value); } while (0);
    // 0x282bac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x282bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x282bb0: 0xa420d5fe  sh          $zero, -0x2A02($at)
    ctx->pc = 0x282bb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD5FEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD5FEu, _value); } while (0);
    // 0x282bb4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x282bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x282bb8u;
}
