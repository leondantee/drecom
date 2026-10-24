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

// Function: entry_00118530
// Address: 0x118530 - 0x118540
void entry_00118530_0x118530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118530_0x118530");
#endif

    ctx->pc = 0x118530u;

    // 0x118530: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x118530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    // 0x118534: 0xae090008  sw          $t1, 0x8($s0)
    ctx->pc = 0x118534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 9));
    // 0x118538: 0xad500008  sw          $s0, 0x8($t2)
    ctx->pc = 0x118538u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 16));
    // 0x11853c: 0xad30000c  sw          $s0, 0xC($t1)
    ctx->pc = 0x11853cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 16));
    ctx->pc = 0x118540u;
}
