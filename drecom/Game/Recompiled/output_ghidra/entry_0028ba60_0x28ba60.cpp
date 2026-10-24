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

// Function: entry_0028ba60
// Address: 0x28ba60 - 0x28ba80
void entry_0028ba60_0x28ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ba60_0x28ba60");
#endif

    ctx->pc = 0x28ba60u;

    // 0x28ba60: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28ba60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28ba64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28ba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28ba68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BA80u;
            return;
        }
    }
    ctx->pc = 0x28BA70u;
    // 0x28ba70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28ba74: 0xa2025e04  sb          $v0, 0x5E04($s0)
    ctx->pc = 0x28ba74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24068), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ba78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA78u;
    {
        const bool branch_taken_0x28ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ba78) {
            ctx->pc = 0x28BA9Cu;
            return;
        }
    }
    ctx->pc = 0x28BA80u;
}
