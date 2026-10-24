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

// Function: entry_0012a610
// Address: 0x12a610 - 0x12a630
void entry_0012a610_0x12a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a610_0x12a610");
#endif

    ctx->pc = 0x12a610u;

    // 0x12a610: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12a614: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x12a614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12a618: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x12a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x12a61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A61Cu;
    {
        const bool branch_taken_0x12a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a61c) {
            ctx->pc = 0x12A630u;
            return;
        }
    }
    ctx->pc = 0x12A624u;
    // 0x12a624: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x12a624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12a628: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12A628u;
    {
        const bool branch_taken_0x12a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a628) {
            ctx->pc = 0x12A664u;
            return;
        }
    }
    ctx->pc = 0x12A630u;
}
