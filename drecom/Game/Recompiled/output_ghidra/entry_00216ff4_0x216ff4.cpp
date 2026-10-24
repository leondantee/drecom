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

// Function: entry_00216ff4
// Address: 0x216ff4 - 0x216ffc
void entry_00216ff4_0x216ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ff4_0x216ff4");
#endif

    ctx->pc = 0x216ff4u;

    // 0x216ff4: 0xac40aaf8  sw          $zero, -0x5508($v0)
    ctx->pc = 0x216ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945528), GPR_U32(ctx, 0));
    // 0x216ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216ffcu;
}
