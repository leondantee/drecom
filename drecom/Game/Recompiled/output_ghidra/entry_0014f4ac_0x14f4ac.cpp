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

// Function: entry_0014f4ac
// Address: 0x14f4ac - 0x14f4d8
void entry_0014f4ac_0x14f4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f4ac_0x14f4ac");
#endif

    ctx->pc = 0x14f4acu;

    // 0x14f4ac: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x14f4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x14f4b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14f4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14f4b4: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x14F4B4u;
    {
        const bool branch_taken_0x14f4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f4b4) {
            ctx->pc = 0x14F5C0u;
            return;
        }
    }
    ctx->pc = 0x14F4BCu;
    // 0x14f4bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f4c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F4C0u;
    {
        const bool branch_taken_0x14f4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14f4c0) {
            ctx->pc = 0x14F4D8u;
            return;
        }
    }
    ctx->pc = 0x14F4C8u;
    // 0x14f4c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F4C8u;
    {
        const bool branch_taken_0x14f4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4c8) {
            ctx->pc = 0x14F4D8u;
            return;
        }
    }
    ctx->pc = 0x14F4D0u;
    // 0x14f4d0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x14F4D0u;
    {
        const bool branch_taken_0x14f4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f4d0) {
            ctx->pc = 0x14F6CCu;
            return;
        }
    }
    ctx->pc = 0x14F4D8u;
}
