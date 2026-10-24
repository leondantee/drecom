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

// Function: entry_00200ff8
// Address: 0x200ff8 - 0x201008
void entry_00200ff8_0x200ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200ff8_0x200ff8");
#endif

    ctx->pc = 0x200ff8u;

    // 0x200ff8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x200ffc: 0x8c5200f8  lw          $s2, 0xF8($v0)
    ctx->pc = 0x200ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x201000: 0x0  nop
    ctx->pc = 0x201000u;
    // NOP
    // 0x201004: 0x0  nop
    ctx->pc = 0x201004u;
    // NOP
    ctx->pc = 0x201008u;
}
