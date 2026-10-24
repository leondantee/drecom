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

// Function: entry_001b49fc
// Address: 0x1b49fc - 0x1b4a28
void entry_001b49fc_0x1b49fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b49fc_0x1b49fc");
#endif

    ctx->pc = 0x1b49fcu;

    // 0x1b49fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4a00: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x1b4a04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b4a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b4a0c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B4A0Cu;
    {
        const bool branch_taken_0x1b4a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4a0c) {
            ctx->pc = 0x1B4A88u;
            return;
        }
    }
    ctx->pc = 0x1B4A14u;
    // 0x1b4a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4a18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B4A18u;
    {
        const bool branch_taken_0x1b4a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4a18) {
            ctx->pc = 0x1B4A28u;
            return;
        }
    }
    ctx->pc = 0x1B4A20u;
    // 0x1b4a20: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1B4A20u;
    {
        const bool branch_taken_0x1b4a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a20) {
            ctx->pc = 0x1B4AE0u;
            return;
        }
    }
    ctx->pc = 0x1B4A28u;
}
