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

// Function: entry_00117d18
// Address: 0x117d18 - 0x117d20
void entry_00117d18_0x117d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d18_0x117d18");
#endif

    ctx->pc = 0x117d18u;

    // 0x117d18: 0x8c64490c  lw          $a0, 0x490C($v1)
    ctx->pc = 0x117d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
    // 0x117d1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x117d20u;
}
