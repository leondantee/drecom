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

// Function: entry_00135c04
// Address: 0x135c04 - 0x135c24
void entry_00135c04_0x135c04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135c04_0x135c04");
#endif

    ctx->pc = 0x135c04u;

    // 0x135c04: 0x86040088  lh          $a0, 0x88($s0)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135c08: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135C08u;
    {
        const bool branch_taken_0x135c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c08) {
            ctx->pc = 0x135C24u;
            return;
        }
    }
    ctx->pc = 0x135C10u;
    // 0x135c10: 0x86030088  lh          $v1, 0x88($s0)
    ctx->pc = 0x135c10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x135c14: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x135c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x135c18: 0xa6040088  sh          $a0, 0x88($s0)
    ctx->pc = 0x135c18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 136), (uint16_t)GPR_U32(ctx, 4));
    // 0x135c1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135C1Cu;
    {
        const bool branch_taken_0x135c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135c1c) {
            ctx->pc = 0x135C40u;
            return;
        }
    }
    ctx->pc = 0x135C24u;
}
