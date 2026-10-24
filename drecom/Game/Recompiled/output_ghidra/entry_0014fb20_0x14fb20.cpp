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

// Function: entry_0014fb20
// Address: 0x14fb20 - 0x14fb58
void entry_0014fb20_0x14fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb20_0x14fb20");
#endif

    ctx->pc = 0x14fb20u;

    // 0x14fb20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb24: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb30: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14fb34: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fb38: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x14fb38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x14fb3c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb40: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb44: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb4c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x14fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x14fb50: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fb54: 0xae430134  sw          $v1, 0x134($s2)
    ctx->pc = 0x14fb54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 3));
    ctx->pc = 0x14fb58u;
}
