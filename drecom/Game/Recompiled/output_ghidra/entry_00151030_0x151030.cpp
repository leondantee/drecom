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

// Function: entry_00151030
// Address: 0x151030 - 0x151058
void entry_00151030_0x151030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151030_0x151030");
#endif

    ctx->pc = 0x151030u;

    // 0x151030: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x151030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x151034: 0x10600137  beqz        $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x151034u;
    {
        const bool branch_taken_0x151034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151034) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x15103Cu;
    // 0x15103c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151040: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x151040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151044: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x151048: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15104c: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x15104cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x151050: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151050) {
            ctx->pc = 0x151514u;
            return;
        }
    }
    ctx->pc = 0x151058u;
}
