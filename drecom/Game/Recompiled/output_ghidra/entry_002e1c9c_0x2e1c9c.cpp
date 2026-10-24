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

// Function: entry_002e1c9c
// Address: 0x2e1c9c - 0x2e1cd8
void entry_002e1c9c_0x2e1c9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e1c9c_0x2e1c9c");
#endif

    ctx->pc = 0x2e1c9cu;

    // 0x2e1c9c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2e1c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2e1ca0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e1ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e1ca4: 0x24638ac0  addiu       $v1, $v1, -0x7540
    ctx->pc = 0x2e1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937280));
    // 0x2e1ca8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1cac: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2e1cacu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e1cb0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2e1cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2e1cb4: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2e1cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2e1cb8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2e1cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e1cbc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2e1cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e1cc0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x2e1cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2e1cc4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e1cc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ccc: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2e1cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e1cd0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2e1cd4: 0x0  nop
    ctx->pc = 0x2e1cd4u;
    // NOP
    ctx->pc = 0x2e1cd8u;
}
