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

// Function: entry_00175260
// Address: 0x175260 - 0x175264
void entry_00175260_0x175260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175260_0x175260");
#endif

    ctx->pc = 0x175260u;

    // 0x175260: 0xac20bcf8  sw          $zero, -0x4308($at)
    ctx->pc = 0x175260u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294950136), GPR_U32(ctx, 0));
    ctx->pc = 0x175264u;
}
