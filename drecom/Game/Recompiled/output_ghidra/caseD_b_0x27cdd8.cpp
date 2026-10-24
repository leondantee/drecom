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

// Function: caseD_b
// Address: 0x27cdd8 - 0x27cdf0
void caseD_b_0x27cdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x27cdd8");
#endif

    ctx->pc = 0x27cdd8u;

    // 0x27cdd8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27cddc: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27cddcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27cde0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cde4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27cde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27cde8: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27cde8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27cdec: 0x0  nop
    ctx->pc = 0x27cdecu;
    // NOP
    ctx->pc = 0x27cdf0u;
}
