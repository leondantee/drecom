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

// Function: entry_00284384
// Address: 0x284384 - 0x2843b4
void entry_00284384_0x284384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284384_0x284384");
#endif

    ctx->pc = 0x284384u;

    // 0x284384: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x284384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284388: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28438c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28438cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x284390: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x284394: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284398: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28439c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2843a4: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x2843a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2843a8: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2843ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843b0: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x2843b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x2843b4u;
}
