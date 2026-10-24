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

// Function: entry_001fe43c
// Address: 0x1fe43c - 0x1fe478
void entry_001fe43c_0x1fe43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe43c_0x1fe43c");
#endif

    ctx->pc = 0x1fe43cu;

    // 0x1fe43c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe440: 0x90630345  lbu         $v1, 0x345($v1)
    ctx->pc = 0x1fe440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 837)));
    // 0x1fe444: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe448: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fe448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fe44c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fe44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fe450: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe454: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe458: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fe458u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fe45c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fe45cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fe460: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe464: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fe468: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1fe468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x1fe46c: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fe46cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fe470: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fe474: 0x0  nop
    ctx->pc = 0x1fe474u;
    // NOP
    ctx->pc = 0x1fe478u;
}
