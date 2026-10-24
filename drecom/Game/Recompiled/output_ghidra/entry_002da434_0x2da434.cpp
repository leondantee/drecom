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

// Function: entry_002da434
// Address: 0x2da434 - 0x2da448
void entry_002da434_0x2da434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002da434_0x2da434");
#endif

    ctx->pc = 0x2da434u;

    // 0x2da434: 0x920200d8  lbu         $v0, 0xD8($s0)
    ctx->pc = 0x2da434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2da438: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2da43c: 0xa20200d8  sb          $v0, 0xD8($s0)
    ctx->pc = 0x2da43cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 2));
    // 0x2da440: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DA440u;
    {
        const bool branch_taken_0x2da440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da440) {
            ctx->pc = 0x2DA470u;
            return;
        }
    }
    ctx->pc = 0x2DA448u;
}
