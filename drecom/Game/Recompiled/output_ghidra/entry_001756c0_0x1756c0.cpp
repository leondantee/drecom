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

// Function: entry_001756c0
// Address: 0x1756c0 - 0x1756e4
void entry_001756c0_0x1756c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001756c0_0x1756c0");
#endif

    ctx->pc = 0x1756c0u;

    // 0x1756c0: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1756c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1756c4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756c8: 0xa022cc94  sb          $v0, -0x336C($at)
    ctx->pc = 0x1756c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC94u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC94u, _value); } while (0);
    // 0x1756cc: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x1756ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x1756d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756d4: 0xa022cc95  sb          $v0, -0x336B($at)
    ctx->pc = 0x1756d4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1756d8: 0x8622000e  lh          $v0, 0xE($s1)
    ctx->pc = 0x1756d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1756dc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1756dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1756e0: 0xa422cc92  sh          $v0, -0x336E($at)
    ctx->pc = 0x1756e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47CC92u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47CC92u, _value); } while (0);
    ctx->pc = 0x1756e4u;
}
