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

// Function: sub_00389228
// Address: 0x389228 - 0x389230
void sub_00389228_0x389228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389228_0x389228");
#endif

    ctx->pc = 0x389228u;

    // 0x389228: 0x1c0004  sllv        $zero, $gp, $zero
    ctx->pc = 0x389228u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 28), GPR_U32(ctx, 0) & 0x1F));
    // 0x38922c: 0x1e001d  dmultu      $zero, $fp
    ctx->pc = 0x38922cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x38922C raw=0x001E001D");
    ctx->pc = 0x389230u;
}
