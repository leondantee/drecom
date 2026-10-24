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

// Function: entry_0031e99c
// Address: 0x31e99c - 0x31e9c4
void entry_0031e99c_0x31e99c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e99c_0x31e99c");
#endif

    ctx->pc = 0x31e99cu;

    // 0x31e99c: 0x24100027  addiu       $s0, $zero, 0x27
    ctx->pc = 0x31e99cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x31e9a0: 0x93a20050  lbu         $v0, 0x50($sp)
    ctx->pc = 0x31e9a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31e9a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x31e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31e9a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e9ac: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31E9ACu;
    {
        const bool branch_taken_0x31e9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31e9ac) {
            ctx->pc = 0x31E9D0u;
            return;
        }
    }
    ctx->pc = 0x31E9B4u;
    // 0x31e9b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E9B4u;
    {
        const bool branch_taken_0x31e9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9b4) {
            ctx->pc = 0x31E9C4u;
            return;
        }
    }
    ctx->pc = 0x31E9BCu;
    // 0x31e9bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E9BCu;
    {
        const bool branch_taken_0x31e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e9bc) {
            ctx->pc = 0x31E9D4u;
            return;
        }
    }
    ctx->pc = 0x31E9C4u;
}
