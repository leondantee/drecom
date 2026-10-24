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

// Function: entry_00123f78
// Address: 0x123f78 - 0x123fa8
void entry_00123f78_0x123f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123f78_0x123f78");
#endif

    ctx->pc = 0x123f78u;

    // 0x123f78: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x123f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x123f7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x123F50u;
            return;
        }
    }
    ctx->pc = 0x123F84u;
    // 0x123f84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x123f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123f88: 0x9445000e  lhu         $a1, 0xE($v0)
    ctx->pc = 0x123f88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x123f8c: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x123f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x123f90: 0x30830400  andi        $v1, $a0, 0x400
    ctx->pc = 0x123f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x123f94: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x123F94u;
    {
        const bool branch_taken_0x123f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x123f94) {
            ctx->pc = 0x123FA8u;
            return;
        }
    }
    ctx->pc = 0x123F9Cu;
    // 0x123f9c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x123f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x123fa0: 0x8fb00078  lw          $s0, 0x78($sp)
    ctx->pc = 0x123fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123fa4: 0xa20310a8  sb          $v1, 0x10A8($s0)
    ctx->pc = 0x123fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x123fa8u;
}
