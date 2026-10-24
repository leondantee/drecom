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

// Function: entry_001d51e8
// Address: 0x1d51e8 - 0x1d51f4
void entry_001d51e8_0x1d51e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d51e8_0x1d51e8");
#endif

    ctx->pc = 0x1d51e8u;

    // 0x1d51e8: 0x8fa30180  lw          $v1, 0x180($sp)
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d51ec: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1d51ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d51f0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x1d51f0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1d51f4u;
}
