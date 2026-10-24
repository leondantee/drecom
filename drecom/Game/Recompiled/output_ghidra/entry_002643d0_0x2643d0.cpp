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

// Function: entry_002643d0
// Address: 0x2643d0 - 0x2643e8
void entry_002643d0_0x2643d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002643d0_0x2643d0");
#endif

    ctx->pc = 0x2643d0u;

    // 0x2643d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2643d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2643d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2643d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2643d8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2643d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2643dc: 0xac6400a0  sw          $a0, 0xA0($v1)
    ctx->pc = 0x2643dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 4));
    // 0x2643e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2643e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2643e4: 0x0  nop
    ctx->pc = 0x2643e4u;
    // NOP
    ctx->pc = 0x2643e8u;
}
