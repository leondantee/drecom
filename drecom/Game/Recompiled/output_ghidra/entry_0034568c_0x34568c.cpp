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

// Function: entry_0034568c
// Address: 0x34568c - 0x3456b4
void entry_0034568c_0x34568c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034568c_0x34568c");
#endif

    ctx->pc = 0x34568cu;

    // 0x34568c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34568cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x345690: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x345694: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x345694u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x345698: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x345698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34569c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3456a0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3456a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3456a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3456a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3456a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3456A8u;
    {
        const bool branch_taken_0x3456a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3456a8) {
            ctx->pc = 0x3456B4u;
            return;
        }
    }
    ctx->pc = 0x3456B0u;
    // 0x3456b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3456b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3456b4u;
}
