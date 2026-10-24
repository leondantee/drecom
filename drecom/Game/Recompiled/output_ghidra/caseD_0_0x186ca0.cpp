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

// Function: caseD_0
// Address: 0x186ca0 - 0x186cac
void caseD_0_0x186ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x186ca0");
#endif

    ctx->pc = 0x186ca0u;

    // 0x186ca0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x186ca4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x186ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x186ca8: 0xa0230346  sb          $v1, 0x346($at)
    ctx->pc = 0x186ca8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x480346u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x480346u, _value); } while (0);
    ctx->pc = 0x186cacu;
}
