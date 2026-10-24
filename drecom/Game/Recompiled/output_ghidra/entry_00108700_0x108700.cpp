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

// Function: entry_00108700
// Address: 0x108700 - 0x108708
void entry_00108700_0x108700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108700_0x108700");
#endif

    ctx->pc = 0x108700u;

    // 0x108700: 0xde820018  ld          $v0, 0x18($s4)
    ctx->pc = 0x108700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x108704: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x108704u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    ctx->pc = 0x108708u;
}
