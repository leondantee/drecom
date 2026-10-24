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

// Function: entry_0025eaf0
// Address: 0x25eaf0 - 0x25eb38
void entry_0025eaf0_0x25eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025eaf0_0x25eaf0");
#endif

    ctx->pc = 0x25eaf0u;

    // 0x25eaf0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eaf4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25eaf8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25eaf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25eafc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb00: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25eb04: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25eb08: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb0c: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25eb10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EB10u;
    {
        const bool branch_taken_0x25eb10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25eb10) {
            ctx->pc = 0x25EB38u;
            return;
        }
    }
    ctx->pc = 0x25EB18u;
    // 0x25eb18: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25eb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb1c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25eb24: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25eb28: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25eb28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25eb2c: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25eb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25eb30: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EB30u;
    SET_GPR_U32(ctx, 31, 0x25EB38u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EB38u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EB38u) { return; }
    ctx->pc = 0x25EB38u;
}
