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

// Function: entry_0031b3c8
// Address: 0x31b3c8 - 0x31b3ec
void entry_0031b3c8_0x31b3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031b3c8_0x31b3c8");
#endif

    ctx->pc = 0x31b3c8u;

    // 0x31b3c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x31b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31b3cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x31b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31b3d0: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x31b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x31b3d4: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x31b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x31b3d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31b3dc: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x31b3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x31b3e0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x31b3e0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b3e4: 0x26030120  addiu       $v1, $s0, 0x120
    ctx->pc = 0x31b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x31b3e8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x31b3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x31b3ecu;
}
