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

// Function: entry_001342a0
// Address: 0x1342a0 - 0x1342dc
void entry_001342a0_0x1342a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001342a0_0x1342a0");
#endif

    ctx->pc = 0x1342a0u;

    // 0x1342a0: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x1342a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1342a4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1342a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1342a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1342a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1342ac: 0x10830173  beq         $a0, $v1, . + 4 + (0x173 << 2)
    ctx->pc = 0x1342ACu;
    {
        const bool branch_taken_0x1342ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342ac) {
            ctx->pc = 0x13487Cu;
            return;
        }
    }
    ctx->pc = 0x1342B4u;
    // 0x1342b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1342b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1342b8: 0x10830147  beq         $a0, $v1, . + 4 + (0x147 << 2)
    ctx->pc = 0x1342B8u;
    {
        const bool branch_taken_0x1342b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342b8) {
            ctx->pc = 0x1347D8u;
            return;
        }
    }
    ctx->pc = 0x1342C0u;
    // 0x1342c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1342c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1342c4: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1342C4u;
    {
        const bool branch_taken_0x1342c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1342c4) {
            ctx->pc = 0x134434u;
            return;
        }
    }
    ctx->pc = 0x1342CCu;
    // 0x1342cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1342CCu;
    {
        const bool branch_taken_0x1342cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342cc) {
            ctx->pc = 0x1342DCu;
            return;
        }
    }
    ctx->pc = 0x1342D4u;
    // 0x1342d4: 0x10000304  b           . + 4 + (0x304 << 2)
    ctx->pc = 0x1342D4u;
    {
        const bool branch_taken_0x1342d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1342d4) {
            ctx->pc = 0x134EE8u;
            return;
        }
    }
    ctx->pc = 0x1342DCu;
}
