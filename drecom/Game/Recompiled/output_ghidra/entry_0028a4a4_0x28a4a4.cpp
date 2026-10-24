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

// Function: entry_0028a4a4
// Address: 0x28a4a4 - 0x28a4d8
void entry_0028a4a4_0x28a4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a4a4_0x28a4a4");
#endif

    ctx->pc = 0x28a4a4u;

    // 0x28a4a4: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x28a4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x28a4a8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x28a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x28a4ac: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x28a4acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x28a4b0: 0x83a00  sll         $a3, $t0, 8
    ctx->pc = 0x28a4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x28a4b4: 0x8fab00d0  lw          $t3, 0xD0($sp)
    ctx->pc = 0x28a4b4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28a4b8: 0x1671025  or          $v0, $t3, $a3
    ctx->pc = 0x28a4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x28a4bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28a4c0: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28a4c4: 0x64e00  sll         $t1, $a2, 24
    ctx->pc = 0x28a4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x28a4c8: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x28a4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x28a4cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x28a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x28a4d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28a4d4: 0x0  nop
    ctx->pc = 0x28a4d4u;
    // NOP
    ctx->pc = 0x28a4d8u;
}
