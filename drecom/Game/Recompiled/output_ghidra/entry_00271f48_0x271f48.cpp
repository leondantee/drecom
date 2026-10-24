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

// Function: entry_00271f48
// Address: 0x271f48 - 0x271f78
void entry_00271f48_0x271f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00271f48_0x271f48");
#endif

    ctx->pc = 0x271f48u;

    // 0x271f48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x271f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271f4c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f50: 0xa023d411  sb          $v1, -0x2BEF($at)
    ctx->pc = 0x271f50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD411u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD411u, _value); } while (0);
    // 0x271f54: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x271f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x271f58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f5c: 0xa023d413  sb          $v1, -0x2BED($at)
    ctx->pc = 0x271f5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD413u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD413u, _value); } while (0);
    // 0x271f60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x271f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x271f64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f68: 0xa423d418  sh          $v1, -0x2BE8($at)
    ctx->pc = 0x271f68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD418u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD418u, _value); } while (0);
    // 0x271f6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x271f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x271f70: 0xa420d41a  sh          $zero, -0x2BE6($at)
    ctx->pc = 0x271f70u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD41Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD41Au, _value); } while (0);
    // 0x271f74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x271f78u;
}
