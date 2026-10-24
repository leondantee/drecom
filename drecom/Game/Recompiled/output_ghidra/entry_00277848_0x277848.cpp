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

// Function: entry_00277848
// Address: 0x277848 - 0x27787c
void entry_00277848_0x277848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277848_0x277848");
#endif

    ctx->pc = 0x277848u;

    // 0x277848: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x277848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27784c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27784cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277850: 0xa023d4b1  sb          $v1, -0x2B4F($at)
    ctx->pc = 0x277850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B1u, _value); } while (0);
    // 0x277854: 0x24030091  addiu       $v1, $zero, 0x91
    ctx->pc = 0x277854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x277858: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27785c: 0xa023d4b3  sb          $v1, -0x2B4D($at)
    ctx->pc = 0x27785cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD4B3u, _value); } while (0);
    // 0x277860: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x277864: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277868: 0xa423d4b8  sh          $v1, -0x2B48($at)
    ctx->pc = 0x277868u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5CD4B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4B8u, _value); } while (0);
    // 0x27786c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27786cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x277870: 0xa420d4ba  sh          $zero, -0x2B46($at)
    ctx->pc = 0x277870u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CD4BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD4BAu, _value); } while (0);
    // 0x277874: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277878: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x277878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x27787cu;
}
