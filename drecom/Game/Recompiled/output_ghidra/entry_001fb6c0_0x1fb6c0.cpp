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

// Function: entry_001fb6c0
// Address: 0x1fb6c0 - 0x1fb6f8
void entry_001fb6c0_0x1fb6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb6c0_0x1fb6c0");
#endif

    ctx->pc = 0x1fb6c0u;

    // 0x1fb6c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6c4: 0x90640345  lbu         $a0, 0x345($v1)
    ctx->pc = 0x1fb6c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fb6c8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1fb6c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1fb6cc: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1fb6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1fb6d0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1fb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb6d4: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6d8: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fb6dc: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fb6dcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb6e0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb6e4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb6e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb6ec: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb6f0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb6f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb6f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1fb6f8u;
}
