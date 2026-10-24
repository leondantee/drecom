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

// Function: entry_002842d0
// Address: 0x2842d0 - 0x2842ec
void entry_002842d0_0x2842d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002842d0_0x2842d0");
#endif

    ctx->pc = 0x2842d0u;

    // 0x2842d0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2842d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2842d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2842d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2842d8: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2842d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2842dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2842dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2842e0: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x2842e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x2842e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2842e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2842e8: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2842e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x2842ecu;
}
