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

// Function: entry_0028ba80
// Address: 0x28ba80 - 0x28ba9c
void entry_0028ba80_0x28ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ba80_0x28ba80");
#endif

    ctx->pc = 0x28ba80u;

    // 0x28ba80: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ba80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ba84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28ba84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba8c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA8Cu;
    {
        const bool branch_taken_0x28ba8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28ba8c) {
            ctx->pc = 0x28BA9Cu;
            return;
        }
    }
    ctx->pc = 0x28BA94u;
    // 0x28ba94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba98: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28ba98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x28ba9cu;
}
