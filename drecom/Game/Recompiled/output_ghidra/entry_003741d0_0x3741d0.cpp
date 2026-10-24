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

// Function: entry_003741d0
// Address: 0x3741d0 - 0x374200
void entry_003741d0_0x3741d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003741d0_0x3741d0");
#endif

    ctx->pc = 0x3741d0u;

    // 0x3741d0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3741d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741d4: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x3741d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3741d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3741D8u;
    {
        const bool branch_taken_0x3741d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3741d8) {
            ctx->pc = 0x374200u;
            return;
        }
    }
    ctx->pc = 0x3741E0u;
    // 0x3741e0: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x3741e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x3741e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x3741e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3741ec: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x3741ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x3741f0: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x3741f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x3741f4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x3741f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x3741f8: 0xc040c00  jal         func_103000
    ctx->pc = 0x3741F8u;
    SET_GPR_U32(ctx, 31, 0x374200u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x374200u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x374200u) { return; }
    ctx->pc = 0x374200u;
}
