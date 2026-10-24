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

// Function: entry_0036b3b8
// Address: 0x36b3b8 - 0x36b3e0
void entry_0036b3b8_0x36b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036b3b8_0x36b3b8");
#endif

    ctx->pc = 0x36b3b8u;

    // 0x36b3b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36b3bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36b3c0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36b3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36b3c8: 0x8c431390  lw          $v1, 0x1390($v0)
    ctx->pc = 0x36b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36b3cc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36b3d0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36b3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36b3d4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36b3d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36b3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36b3dc: 0x0  nop
    ctx->pc = 0x36b3dcu;
    // NOP
    ctx->pc = 0x36b3e0u;
}
