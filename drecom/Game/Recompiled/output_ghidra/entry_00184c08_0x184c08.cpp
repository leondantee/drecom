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

// Function: entry_00184c08
// Address: 0x184c08 - 0x184c18
void entry_00184c08_0x184c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184c08_0x184c08");
#endif

    ctx->pc = 0x184c08u;

    // 0x184c08: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x184c08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x184c0c: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x184C0Cu;
    {
        const bool branch_taken_0x184c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184c0c) {
            ctx->pc = 0x184AECu;
            return;
        }
    }
    ctx->pc = 0x184C14u;
    // 0x184c14: 0x0  nop
    ctx->pc = 0x184c14u;
    // NOP
    ctx->pc = 0x184c18u;
}
