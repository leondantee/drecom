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

// Function: entry_00365820
// Address: 0x365820 - 0x365840
void entry_00365820_0x365820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365820_0x365820");
#endif

    ctx->pc = 0x365820u;

    // 0x365820: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365824: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36582c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x365830u;
    {
        const bool branch_taken_0x365830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365830) {
            ctx->pc = 0x365840u;
            return;
        }
    }
    ctx->pc = 0x365838u;
    // 0x365838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36583c: 0x0  nop
    ctx->pc = 0x36583cu;
    // NOP
    ctx->pc = 0x365840u;
}
