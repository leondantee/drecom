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

// Function: entry_00263340
// Address: 0x263340 - 0x26335c
void entry_00263340_0x263340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263340_0x263340");
#endif

    ctx->pc = 0x263340u;

    // 0x263340: 0x9483000a  lhu         $v1, 0xA($a0)
    ctx->pc = 0x263340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x263344: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x263344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x263348: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x263348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26334c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26334Cu;
    {
        const bool branch_taken_0x26334c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26334c) {
            ctx->pc = 0x2633D0u;
            return;
        }
    }
    ctx->pc = 0x263354u;
    // 0x263354: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263354u;
    {
        const bool branch_taken_0x263354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263354) {
            ctx->pc = 0x263370u;
            return;
        }
    }
    ctx->pc = 0x26335Cu;
}
