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

// Function: entry_0028440c
// Address: 0x28440c - 0x28443c
void entry_0028440c_0x28440c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028440c_0x28440c");
#endif

    ctx->pc = 0x28440cu;

    // 0x28440c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28440cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x284410: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x284410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x284414: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x284418: 0x2463e650  addiu       $v1, $v1, -0x19B0
    ctx->pc = 0x284418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960720));
    // 0x28441c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28441cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284420: 0x8c651390  lw          $a1, 0x1390($v1)
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5008)));
    // 0x284424: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x284424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284428: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28442c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x28442cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x284430: 0x8ca30130  lw          $v1, 0x130($a1)
    ctx->pc = 0x284430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x284434: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x284434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x284438: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x284438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    ctx->pc = 0x28443cu;
}
