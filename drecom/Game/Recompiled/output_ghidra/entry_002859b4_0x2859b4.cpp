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

// Function: entry_002859b4
// Address: 0x2859b4 - 0x2859c0
void entry_002859b4_0x2859b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002859b4_0x2859b4");
#endif

    ctx->pc = 0x2859b4u;

    // 0x2859b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2859b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2859b8: 0x9963c  dsll32      $s2, $t1, 24
    ctx->pc = 0x2859b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) << (32 + 24));
    // 0x2859bc: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x2859bcu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    ctx->pc = 0x2859c0u;
}
