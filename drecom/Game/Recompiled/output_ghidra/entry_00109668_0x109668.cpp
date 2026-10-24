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

// Function: entry_00109668
// Address: 0x109668 - 0x109670
void entry_00109668_0x109668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109668_0x109668");
#endif

    ctx->pc = 0x109668u;

    // 0x109668: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x109668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10966c: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x10966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x109670u;
}
