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

// Function: entry_001fb3ac
// Address: 0x1fb3ac - 0x1fb3e8
void entry_001fb3ac_0x1fb3ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb3ac_0x1fb3ac");
#endif

    ctx->pc = 0x1fb3acu;

    // 0x1fb3ac: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3b0: 0x90c30345  lbu         $v1, 0x345($a2)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 837)));
    // 0x1fb3b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb3b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1fb3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1fb3bc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fb3c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fb3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb3c8: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1fb3c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb3cc: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1fb3d0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb3d4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fb3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fb3d8: 0x24830480  addiu       $v1, $a0, 0x480
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fb3dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1fb3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1fb3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fb3e4: 0x0  nop
    ctx->pc = 0x1fb3e4u;
    // NOP
    ctx->pc = 0x1fb3e8u;
}
