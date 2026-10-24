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

// Function: entry_0031eb00
// Address: 0x31eb00 - 0x31eb0c
void entry_0031eb00_0x31eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031eb00_0x31eb00");
#endif

    ctx->pc = 0x31eb00u;

    // 0x31eb00: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x31EB00u;
    {
        const bool branch_taken_0x31eb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb00) {
            ctx->pc = 0x31EB0Cu;
            return;
        }
    }
    ctx->pc = 0x31EB08u;
    // 0x31eb08: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x31eb08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x31eb0cu;
}
