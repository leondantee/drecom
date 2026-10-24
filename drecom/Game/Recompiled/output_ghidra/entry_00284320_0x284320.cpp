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

// Function: entry_00284320
// Address: 0x284320 - 0x28433c
void entry_00284320_0x284320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284320_0x284320");
#endif

    ctx->pc = 0x284320u;

    // 0x284320: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x284328: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x284328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28432c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x28432cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x284330: 0x8c239370  lw          $v1, -0x6C90($at)
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9370u));
    // 0x284334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284338: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x28433cu;
}
