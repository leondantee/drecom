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

// Function: entry_00340ce0
// Address: 0x340ce0 - 0x340d00
void entry_00340ce0_0x340ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340ce0_0x340ce0");
#endif

    ctx->pc = 0x340ce0u;

    // 0x340ce0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340ce0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340ce4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cec: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340cecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340cf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cf4: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340cf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340cfc: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x340d00u;
}
