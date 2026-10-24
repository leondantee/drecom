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

// Function: entry_00119d10
// Address: 0x119d10 - 0x119d18
void entry_00119d10_0x119d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d10_0x119d10");
#endif

    ctx->pc = 0x119d10u;

    // 0x119d10: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x119d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x119d14: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x119d14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    ctx->pc = 0x119d18u;
}
