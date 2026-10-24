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

// Function: entry_00196178
// Address: 0x196178 - 0x196188
void entry_00196178_0x196178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196178_0x196178");
#endif

    ctx->pc = 0x196178u;

    // 0x196178: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x19617c: 0x26370001  addiu       $s7, $s1, 0x1
    ctx->pc = 0x19617cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x196180: 0x72e08e28  paddub      $s1, $s7, $zero
    ctx->pc = 0x196180u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x196184: 0x0  nop
    ctx->pc = 0x196184u;
    // NOP
    ctx->pc = 0x196188u;
}
