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

// Function: entry_001fb9bc
// Address: 0x1fb9bc - 0x1fb9f8
void entry_001fb9bc_0x1fb9bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb9bc_0x1fb9bc");
#endif

    ctx->pc = 0x1fb9bcu;

    // 0x1fb9bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9c0: 0x90420345  lbu         $v0, 0x345($v0)
    ctx->pc = 0x1fb9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 837)));
    // 0x1fb9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fb9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb9c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fb9cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fb9d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb9d8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1fb9d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb9dc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fb9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb9e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1fb9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb9e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1fb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fb9e8: 0x24620480  addiu       $v0, $v1, 0x480
    ctx->pc = 0x1fb9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fb9ec: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x1fb9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x1fb9f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb9f4: 0x0  nop
    ctx->pc = 0x1fb9f4u;
    // NOP
    ctx->pc = 0x1fb9f8u;
}
