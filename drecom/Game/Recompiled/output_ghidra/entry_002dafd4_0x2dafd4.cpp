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

// Function: entry_002dafd4
// Address: 0x2dafd4 - 0x2dafd8
void entry_002dafd4_0x2dafd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dafd4_0x2dafd4");
#endif

    ctx->pc = 0x2dafd4u;

    // 0x2dafd4: 0xa20000da  sb          $zero, 0xDA($s0)
    ctx->pc = 0x2dafd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2dafd8u;
}
