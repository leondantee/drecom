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

// Function: entry_0014fbd8
// Address: 0x14fbd8 - 0x14fc10
void entry_0014fbd8_0x14fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fbd8_0x14fbd8");
#endif

    ctx->pc = 0x14fbd8u;

    // 0x14fbd8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fbdc: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fbe0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fbe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fbe8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14fbec: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fbf0: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x14fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
    // 0x14fbf4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fbf8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fbfc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fc00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc04: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14fc08: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fc0c: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x14fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    ctx->pc = 0x14fc10u;
}
