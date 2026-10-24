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

// Function: entry_0018b080
// Address: 0x18b080 - 0x18b090
void entry_0018b080_0x18b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b080_0x18b080");
#endif

    ctx->pc = 0x18b080u;

    // 0x18b080: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x18b080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18b084: 0xa2030030  sb          $v1, 0x30($s0)
    ctx->pc = 0x18b084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b088: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18B088u;
    {
        const bool branch_taken_0x18b088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b088) {
            ctx->pc = 0x18B098u;
            return;
        }
    }
    ctx->pc = 0x18B090u;
}
