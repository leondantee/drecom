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

// Function: entry_0028a0c8
// Address: 0x28a0c8 - 0x28a0ec
void entry_0028a0c8_0x28a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a0c8_0x28a0c8");
#endif

    ctx->pc = 0x28a0c8u;

    // 0x28a0c8: 0x92426624  lbu         $v0, 0x6624($s2)
    ctx->pc = 0x28a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 26148)));
    // 0x28a0cc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x28a0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x28a0d0: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x28a0d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28a0d4: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x28a0d4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28a0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a0dc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x28a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x28a0e0: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x28a0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a0e4: 0x17c2001d  bne         $fp, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28A0E4u;
    {
        const bool branch_taken_0x28a0e4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a0e4) {
            ctx->pc = 0x28A15Cu;
            return;
        }
    }
    ctx->pc = 0x28A0ECu;
}
