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

// Function: entry_00258df4
// Address: 0x258df4 - 0x258e00
void entry_00258df4_0x258df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00258df4_0x258df4");
#endif

    ctx->pc = 0x258df4u;

    // 0x258df4: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x258df4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x258df8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x258df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x258dfc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x258dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x258e00u;
}
