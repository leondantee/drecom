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

// Function: entry_00160a90
// Address: 0x160a90 - 0x160ae0
void entry_00160a90_0x160a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160a90_0x160a90");
#endif

    ctx->pc = 0x160a90u;

    // 0x160a90: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160a94: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x160a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x160a98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x160a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x160a9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x160a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x160aa0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x160aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160aa4: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160aa8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160aac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ab0: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x160AB0u;
    {
        const bool branch_taken_0x160ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ab0) {
            ctx->pc = 0x160BF4u;
            return;
        }
    }
    ctx->pc = 0x160AB8u;
    // 0x160ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160abc: 0x1062004d  beq         $v1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x160ABCu;
    {
        const bool branch_taken_0x160abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160abc) {
            ctx->pc = 0x160BF4u;
            return;
        }
    }
    ctx->pc = 0x160AC4u;
    // 0x160ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x160ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160ac8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160AC8u;
    {
        const bool branch_taken_0x160ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160ac8) {
            ctx->pc = 0x160AE0u;
            return;
        }
    }
    ctx->pc = 0x160AD0u;
    // 0x160ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160AD0u;
    {
        const bool branch_taken_0x160ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad0) {
            ctx->pc = 0x160AE0u;
            return;
        }
    }
    ctx->pc = 0x160AD8u;
    // 0x160ad8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x160AD8u;
    {
        const bool branch_taken_0x160ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ad8) {
            ctx->pc = 0x160D04u;
            return;
        }
    }
    ctx->pc = 0x160AE0u;
}
