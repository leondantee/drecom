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

// Function: entry_0011f77c
// Address: 0x11f77c - 0x11f78c
void entry_0011f77c_0x11f77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f77c_0x11f77c");
#endif

    ctx->pc = 0x11f77cu;

    // 0x11f77c: 0xacc90004  sw          $t1, 0x4($a2)
    ctx->pc = 0x11f77cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x11f780: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x11f780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x11f784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11f784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f788: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x11f788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x11f78cu;
}
