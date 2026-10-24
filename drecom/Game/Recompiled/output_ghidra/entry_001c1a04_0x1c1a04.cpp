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

// Function: entry_001c1a04
// Address: 0x1c1a04 - 0x1c1a24
void entry_001c1a04_0x1c1a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a04_0x1c1a04");
#endif

    ctx->pc = 0x1c1a04u;

    // 0x1c1a04: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c1a08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1a0c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1A0Cu;
    {
        const bool branch_taken_0x1c1a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a0c) {
            ctx->pc = 0x1C1A24u;
            return;
        }
    }
    ctx->pc = 0x1C1A14u;
    // 0x1c1a14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x1c1a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1c1a18: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1a1c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1A1Cu;
    {
        const bool branch_taken_0x1c1a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1a1c) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A24u;
}
