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

// Function: entry_0028810c
// Address: 0x28810c - 0x288140
void entry_0028810c_0x28810c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028810c_0x28810c");
#endif

    ctx->pc = 0x28810cu;

    // 0x28810c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x28810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288110: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x288110u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x288114: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x288114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x288118: 0x35a00  sll         $t3, $v1, 8
    ctx->pc = 0x288118u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x28811c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x28811cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288120: 0xcb4025  or          $t0, $a2, $t3
    ctx->pc = 0x288120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x288124: 0xe81825  or          $v1, $a3, $t0
    ctx->pc = 0x288124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x288128: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x288128u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28812c: 0xa1600  sll         $v0, $t2, 24
    ctx->pc = 0x28812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
    // 0x288130: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x288130u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x288134: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x288134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x288138: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x288138u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x28813c: 0x0  nop
    ctx->pc = 0x28813cu;
    // NOP
    ctx->pc = 0x288140u;
}
