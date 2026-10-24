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

// Function: entry_0012eb60
// Address: 0x12eb60 - 0x12eb90
void entry_0012eb60_0x12eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb60_0x12eb60");
#endif

    ctx->pc = 0x12eb60u;

    // 0x12eb60: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x12eb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x12eb64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12eb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12eb68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x12eb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x12eb6c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12EB6Cu;
    {
        const bool branch_taken_0x12eb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb6c) {
            ctx->pc = 0x12EC2Cu;
            return;
        }
    }
    ctx->pc = 0x12EB74u;
    // 0x12eb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb78: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12EB78u;
    {
        const bool branch_taken_0x12eb78 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x12eb78) {
            ctx->pc = 0x12EBACu;
            return;
        }
    }
    ctx->pc = 0x12EB80u;
    // 0x12eb80: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EB80u;
    {
        const bool branch_taken_0x12eb80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb80) {
            ctx->pc = 0x12EB90u;
            return;
        }
    }
    ctx->pc = 0x12EB88u;
    // 0x12eb88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EBC8u;
            return;
        }
    }
    ctx->pc = 0x12EB90u;
}
