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

// Function: entry_0018ed70
// Address: 0x18ed70 - 0x18eda8
void entry_0018ed70_0x18ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed70_0x18ed70");
#endif

    ctx->pc = 0x18ed70u;

    // 0x18ed70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed74: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18ed74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18ed78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed7c: 0x8c4202a8  lw          $v0, 0x2A8($v0)
    ctx->pc = 0x18ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x18ed80: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18ED80u;
    {
        const bool branch_taken_0x18ed80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed80) {
            ctx->pc = 0x18EDBCu;
            return;
        }
    }
    ctx->pc = 0x18ED88u;
    // 0x18ed88: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18ed8c: 0x8c4202ac  lw          $v0, 0x2AC($v0)
    ctx->pc = 0x18ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x18ed90: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x18ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x18ed94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18ED94u;
    {
        const bool branch_taken_0x18ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ed94) {
            ctx->pc = 0x18EDA8u;
            return;
        }
    }
    ctx->pc = 0x18ED9Cu;
    // 0x18ed9c: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x18ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x18eda0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18EDA0u;
    {
        const bool branch_taken_0x18eda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eda0) {
            ctx->pc = 0x18EE00u;
            return;
        }
    }
    ctx->pc = 0x18EDA8u;
}
