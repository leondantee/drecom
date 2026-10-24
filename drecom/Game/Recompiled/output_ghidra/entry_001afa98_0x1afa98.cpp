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

// Function: entry_001afa98
// Address: 0x1afa98 - 0x1afab8
void entry_001afa98_0x1afa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afa98_0x1afa98");
#endif

    ctx->pc = 0x1afa98u;

    // 0x1afa98: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1afa98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1afa9c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1afa9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1afaa0: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1afaa4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1afaa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1afaa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1afaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1afaac: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1afaacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1afab0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1AFAB0u;
    {
        const bool branch_taken_0x1afab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afab0) {
            ctx->pc = 0x1AFA50u;
            return;
        }
    }
    ctx->pc = 0x1AFAB8u;
}
