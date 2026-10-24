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

// Function: entry_00292410
// Address: 0x292410 - 0x29243c
void entry_00292410_0x292410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292410_0x292410");
#endif

    ctx->pc = 0x292410u;

    // 0x292410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x292410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x292414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292418: 0xa022dbc0  sb          $v0, -0x2440($at)
    ctx->pc = 0x292418u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x29241c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29241cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292420: 0xa020dbc1  sb          $zero, -0x243F($at)
    ctx->pc = 0x292420u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x292424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292428: 0xa020dbc2  sb          $zero, -0x243E($at)
    ctx->pc = 0x292428u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x29242c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x29242cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292430: 0xa020dbc3  sb          $zero, -0x243D($at)
    ctx->pc = 0x292430u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x292434: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x292438: 0xac20dbc4  sw          $zero, -0x243C($at)
    ctx->pc = 0x292438u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    ctx->pc = 0x29243cu;
}
