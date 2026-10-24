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

// Function: entry_00109014
// Address: 0x109014 - 0x109020
void entry_00109014_0x109014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109014_0x109014");
#endif

    ctx->pc = 0x109014u;

    // 0x109014: 0xdcca0018  ld          $t2, 0x18($a2)
    ctx->pc = 0x109014u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x109018: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x109018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10901c: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x10901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    ctx->pc = 0x109020u;
}
