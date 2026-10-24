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

// Function: entry_00284350
// Address: 0x284350 - 0x284384
void entry_00284350_0x284350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284350_0x284350");
#endif

    ctx->pc = 0x284350u;

    // 0x284350: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284354: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x284354u;
    {
        const bool branch_taken_0x284354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x284354) {
            ctx->pc = 0x284384u;
            return;
        }
    }
    ctx->pc = 0x28435Cu;
    // 0x28435c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284360: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284364: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x284368: 0x2463bb40  addiu       $v1, $v1, -0x44C0
    ctx->pc = 0x284368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949696));
    // 0x28436c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284370: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x284370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x284374: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x284374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x284378: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x28437c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28437Cu;
    {
        const bool branch_taken_0x28437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28437c) {
            ctx->pc = 0x2843B4u;
            return;
        }
    }
    ctx->pc = 0x284384u;
}
