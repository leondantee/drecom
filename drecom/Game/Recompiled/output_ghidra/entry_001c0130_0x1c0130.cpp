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

// Function: entry_001c0130
// Address: 0x1c0130 - 0x1c0160
void entry_001c0130_0x1c0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0130_0x1c0130");
#endif

    ctx->pc = 0x1c0130u;

    // 0x1c0130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0134: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1c0138: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C0138u;
    {
        const bool branch_taken_0x1c0138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0138) {
            ctx->pc = 0x1C0178u;
            return;
        }
    }
    ctx->pc = 0x1C0140u;
    // 0x1c0140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0148: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1c0148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c014c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c0154: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1c0154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c0158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0158u;
    {
        const bool branch_taken_0x1c0158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0158) {
            ctx->pc = 0x1C0178u;
            return;
        }
    }
    ctx->pc = 0x1C0160u;
}
