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

// Function: entry_001fe79c
// Address: 0x1fe79c - 0x1fe7d8
void entry_001fe79c_0x1fe79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe79c_0x1fe79c");
#endif

    ctx->pc = 0x1fe79cu;

    // 0x1fe79c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7a0: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe7a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe7a8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe7ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe7b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe7b8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe7b8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe7bc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1fe7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe7c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe7c4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fe7c8: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe7cc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe7d4: 0x0  nop
    ctx->pc = 0x1fe7d4u;
    // NOP
    ctx->pc = 0x1fe7d8u;
}
