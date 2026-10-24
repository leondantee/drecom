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

// Function: entry_0015bf18
// Address: 0x15bf18 - 0x15bf3c
void entry_0015bf18_0x15bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bf18_0x15bf18");
#endif

    ctx->pc = 0x15bf18u;

    // 0x15bf18: 0x6a00008  bltz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BF18u;
    {
        const bool branch_taken_0x15bf18 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x15bf18) {
            ctx->pc = 0x15BF3Cu;
            return;
        }
    }
    ctx->pc = 0x15BF20u;
    // 0x15bf20: 0x151140  sll         $v0, $s5, 5
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x15bf24: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bf28: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15bf2c: 0xae6213ec  sw          $v0, 0x13EC($s3)
    ctx->pc = 0x15bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 5100), GPR_U32(ctx, 2));
    // 0x15bf30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bf34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BF34u;
    {
        const bool branch_taken_0x15bf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf34) {
            ctx->pc = 0x15BF44u;
            return;
        }
    }
    ctx->pc = 0x15BF3Cu;
}
