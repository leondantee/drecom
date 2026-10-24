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

// Function: entry_003550e0
// Address: 0x3550e0 - 0x355100
void entry_003550e0_0x3550e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003550e0_0x3550e0");
#endif

    ctx->pc = 0x3550e0u;

    // 0x3550e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3550e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550e4: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3550e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3550e8: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x3550e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x3550ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3550ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3550f0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3550f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3550f4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x3550f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x3550f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3550f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3550fc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x3550fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x355100u;
}
