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

// Function: entry_002e17b4
// Address: 0x2e17b4 - 0x2e17e8
void entry_002e17b4_0x2e17b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e17b4_0x2e17b4");
#endif

    ctx->pc = 0x2e17b4u;

    // 0x2e17b4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2e17b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e17b8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2e17b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2e17bc: 0x24638ac0  addiu       $v1, $v1, -0x7540
    ctx->pc = 0x2e17bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937280));
    // 0x2e17c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2e17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e17c4: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2e17c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e17c8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x2e17c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e17cc: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x2e17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2e17d0: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x2e17d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2e17d4: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x2e17d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2e17d8: 0x8cc30058  lw          $v1, 0x58($a2)
    ctx->pc = 0x2e17d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x2e17dc: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2e17dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e17e0: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x2e17e0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e17e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e17e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2e17e8u;
}
