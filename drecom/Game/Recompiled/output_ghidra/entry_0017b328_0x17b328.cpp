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

// Function: entry_0017b328
// Address: 0x17b328 - 0x17b354
void entry_0017b328_0x17b328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b328_0x17b328");
#endif

    ctx->pc = 0x17b328u;

    // 0x17b328: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x17b328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x17b32c: 0x80630153  lb          $v1, 0x153($v1)
    ctx->pc = 0x17b32cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 339)));
    // 0x17b330: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x17b330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x17b334: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x17b334u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x17b338: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17b338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17b33c: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x17B33Cu;
    {
        const bool branch_taken_0x17b33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17b33c) {
            ctx->pc = 0x17B380u;
            return;
        }
    }
    ctx->pc = 0x17B344u;
    // 0x17b344: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17B344u;
    {
        const bool branch_taken_0x17b344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b344) {
            ctx->pc = 0x17B354u;
            return;
        }
    }
    ctx->pc = 0x17B34Cu;
    // 0x17b34c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17B34Cu;
    {
        const bool branch_taken_0x17b34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b34c) {
            ctx->pc = 0x17B380u;
            return;
        }
    }
    ctx->pc = 0x17B354u;
}
