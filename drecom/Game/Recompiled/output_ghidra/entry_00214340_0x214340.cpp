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

// Function: entry_00214340
// Address: 0x214340 - 0x21434c
void entry_00214340_0x214340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214340_0x214340");
#endif

    ctx->pc = 0x214340u;

    // 0x214340: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x214340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x214344: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x214344u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x214348: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x214348u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
    ctx->pc = 0x21434cu;
}
