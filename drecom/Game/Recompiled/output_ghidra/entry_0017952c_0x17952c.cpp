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

// Function: entry_0017952c
// Address: 0x17952c - 0x179554
void entry_0017952c_0x17952c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017952c_0x17952c");
#endif

    ctx->pc = 0x17952cu;

    // 0x17952c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x17952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x179530: 0x1242000b  beq         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179530u;
    {
        const bool branch_taken_0x179530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x179530) {
            ctx->pc = 0x179560u;
            return;
        }
    }
    ctx->pc = 0x179538u;
    // 0x179538: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17953c: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17953Cu;
    {
        const bool branch_taken_0x17953c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x17953c) {
            ctx->pc = 0x179560u;
            return;
        }
    }
    ctx->pc = 0x179544u;
    // 0x179544: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x179544u;
    {
        const bool branch_taken_0x179544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x179544) {
            ctx->pc = 0x179554u;
            return;
        }
    }
    ctx->pc = 0x17954Cu;
    // 0x17954c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17954Cu;
    {
        const bool branch_taken_0x17954c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17954c) {
            ctx->pc = 0x17956Cu;
            return;
        }
    }
    ctx->pc = 0x179554u;
}
