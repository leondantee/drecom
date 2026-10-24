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

// Function: entry_00155db0
// Address: 0x155db0 - 0x155dc4
void entry_00155db0_0x155db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155db0_0x155db0");
#endif

    ctx->pc = 0x155db0u;

    // 0x155db0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x155db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x155db4: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x155db4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x155db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x155db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x155dbc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x155dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x155dc0: 0xa0224f10  sb          $v0, 0x4F10($at)
    ctx->pc = 0x155dc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F4F10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F10u, _value); } while (0);
    ctx->pc = 0x155dc4u;
}
