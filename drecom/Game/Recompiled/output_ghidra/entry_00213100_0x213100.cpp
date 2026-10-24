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

// Function: entry_00213100
// Address: 0x213100 - 0x213108
void entry_00213100_0x213100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213100_0x213100");
#endif

    ctx->pc = 0x213100u;

    // 0x213100: 0xae50aac4  sw          $s0, -0x553C($s2)
    ctx->pc = 0x213100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294945476), GPR_U32(ctx, 16));
    // 0x213104: 0x42000038  ei
    ctx->pc = 0x213104u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    ctx->pc = 0x213108u;
}
