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

// Function: entry_0025efa0
// Address: 0x25efa0 - 0x25efe8
void entry_0025efa0_0x25efa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025efa0_0x25efa0");
#endif

    ctx->pc = 0x25efa0u;

    // 0x25efa0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efa4: 0x24630120  addiu       $v1, $v1, 0x120
    ctx->pc = 0x25efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x25efa8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x25efa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25efac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efb0: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x25efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x25efb4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x25efb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x25efb8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efbc: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x25efbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25efc0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25EFC0u;
    {
        const bool branch_taken_0x25efc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25efc0) {
            ctx->pc = 0x25EFE8u;
            return;
        }
    }
    ctx->pc = 0x25EFC8u;
    // 0x25efc8: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x25efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efcc: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x25efccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efd0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x25efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x25efd4: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x25efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x25efd8: 0x8c6500c0  lw          $a1, 0xC0($v1)
    ctx->pc = 0x25efd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x25efdc: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x25efdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x25efe0: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EFE0u;
    SET_GPR_U32(ctx, 31, 0x25EFE8u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EFE8u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EFE8u) { return; }
    ctx->pc = 0x25EFE8u;
}
