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

// Function: entry_0010f9fc
// Address: 0x10f9fc - 0x10fa04
void entry_0010f9fc_0x10f9fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f9fc_0x10f9fc");
#endif

    ctx->pc = 0x10f9fcu;

    // 0x10f9fc: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x10fa00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    ctx->pc = 0x10fa04u;
}
