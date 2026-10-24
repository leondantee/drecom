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

// Function: entry_0032c8e8
// Address: 0x32c8e8 - 0x32c93c
void entry_0032c8e8_0x32c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c8e8_0x32c8e8");
#endif

    ctx->pc = 0x32c8e8u;

    // 0x32c8e8: 0x2b4102a  slt         $v0, $s5, $s4
    ctx->pc = 0x32c8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x32c8ec: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x32C8ECu;
    {
        const bool branch_taken_0x32c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32c8ec) {
            ctx->pc = 0x32C6A0u;
            return;
        }
    }
    ctx->pc = 0x32C8F4u;
    // 0x32c8f4: 0x92c213a6  lbu         $v0, 0x13A6($s6)
    ctx->pc = 0x32c8f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 5030)));
    // 0x32c8f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32c8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32c8fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32c900: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x32C900u;
    {
        const bool branch_taken_0x32c900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c900) {
            ctx->pc = 0x32C9DCu;
            return;
        }
    }
    ctx->pc = 0x32C908u;
    // 0x32c908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x32c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32c90c: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x32C90Cu;
    {
        const bool branch_taken_0x32c90c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c90c) {
            ctx->pc = 0x32C9B4u;
            return;
        }
    }
    ctx->pc = 0x32C914u;
    // 0x32c914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32c918: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C918u;
    {
        const bool branch_taken_0x32c918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c918) {
            ctx->pc = 0x32C98Cu;
            return;
        }
    }
    ctx->pc = 0x32C920u;
    // 0x32c920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c924: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32C924u;
    {
        const bool branch_taken_0x32c924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c924) {
            ctx->pc = 0x32C964u;
            return;
        }
    }
    ctx->pc = 0x32C92Cu;
    // 0x32c92c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32C92Cu;
    {
        const bool branch_taken_0x32c92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c92c) {
            ctx->pc = 0x32C93Cu;
            return;
        }
    }
    ctx->pc = 0x32C934u;
    // 0x32c934: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x32C934u;
    {
        const bool branch_taken_0x32c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c934) {
            ctx->pc = 0x32C9FCu;
            return;
        }
    }
    ctx->pc = 0x32C93Cu;
}
