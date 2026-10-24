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

// Function: entry_002843d8
// Address: 0x2843d8 - 0x28440c
void entry_002843d8_0x2843d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002843d8_0x2843d8");
#endif

    ctx->pc = 0x2843d8u;

    // 0x2843d8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2843d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2843dc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2843DCu;
    {
        const bool branch_taken_0x2843dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2843dc) {
            ctx->pc = 0x28440Cu;
            return;
        }
    }
    ctx->pc = 0x2843E4u;
    // 0x2843e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2843e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2843e8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2843e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2843ec: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2843ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2843f0: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x2843f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x2843f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2843f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2843f8: 0x8c631390  lw          $v1, 0x1390($v1)
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x2843fc: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x2843fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x284400: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x284404: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x284404u;
    {
        const bool branch_taken_0x284404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284404) {
            ctx->pc = 0x28443Cu;
            return;
        }
    }
    ctx->pc = 0x28440Cu;
}
