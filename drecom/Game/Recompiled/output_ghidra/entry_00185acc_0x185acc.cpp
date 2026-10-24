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

// Function: entry_00185acc
// Address: 0x185acc - 0x185ad0
void entry_00185acc_0x185acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185acc_0x185acc");
#endif

    ctx->pc = 0x185accu;

    // 0x185acc: 0xa0230345  sb          $v1, 0x345($at)
    ctx->pc = 0x185accu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 837), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x185ad0u;
}
