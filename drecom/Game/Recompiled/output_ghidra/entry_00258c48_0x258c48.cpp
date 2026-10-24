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

// Function: entry_00258c48
// Address: 0x258c48 - 0x258c50
void entry_00258c48_0x258c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258c48_0x258c48");
#endif

    ctx->pc = 0x258c48u;

    // 0x258c48: 0x8e930034  lw          $s3, 0x34($s4)
    ctx->pc = 0x258c48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x258c4c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x258c4cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x258c50u;
}
