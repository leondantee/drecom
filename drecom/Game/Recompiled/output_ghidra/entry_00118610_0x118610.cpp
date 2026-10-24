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

// Function: entry_00118610
// Address: 0x118610 - 0x11861c
void entry_00118610_0x118610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118610_0x118610");
#endif

    ctx->pc = 0x118610u;

    // 0x118610: 0x1111023  subu        $v0, $t0, $s1
    ctx->pc = 0x118610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x118614: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118618: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x118618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x11861cu;
}
