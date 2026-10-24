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

// Function: entry_0033a5d0
// Address: 0x33a5d0 - 0x33a5f0
void entry_0033a5d0_0x33a5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a5d0_0x33a5d0");
#endif

    ctx->pc = 0x33a5d0u;

    // 0x33a5d0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a5d4: 0x8c225440  lw          $v0, 0x5440($at)
    ctx->pc = 0x33a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895440u));
    // 0x33a5d8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x33a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33a5dc: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a5e0: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a5e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a5e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x33a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33a5e8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x33a5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33a5ec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33a5ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x33a5f0u;
}
