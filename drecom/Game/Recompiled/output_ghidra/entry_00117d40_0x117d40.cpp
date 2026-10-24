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

// Function: entry_00117d40
// Address: 0x117d40 - 0x117d48
void entry_00117d40_0x117d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d40_0x117d40");
#endif

    ctx->pc = 0x117d40u;

    // 0x117d40: 0x8c44490c  lw          $a0, 0x490C($v0)
    ctx->pc = 0x117d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18700)));
    // 0x117d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x117d48u;
}
