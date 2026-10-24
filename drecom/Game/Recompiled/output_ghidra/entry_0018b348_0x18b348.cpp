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

// Function: entry_0018b348
// Address: 0x18b348 - 0x18b360
void entry_0018b348_0x18b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b348_0x18b348");
#endif

    ctx->pc = 0x18b348u;

    // 0x18b348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18B348u;
    {
        const bool branch_taken_0x18b348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b348) {
            ctx->pc = 0x18B360u;
            return;
        }
    }
    ctx->pc = 0x18B350u;
    // 0x18b350: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x18b350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x18b354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18b358: 0xa2020021  sb          $v0, 0x21($s0)
    ctx->pc = 0x18b358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b35c: 0x0  nop
    ctx->pc = 0x18b35cu;
    // NOP
    ctx->pc = 0x18b360u;
}
