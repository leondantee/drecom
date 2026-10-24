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

// Function: entry_0014dd80
// Address: 0x14dd80 - 0x14ddc8
void entry_0014dd80_0x14dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dd80_0x14dd80");
#endif

    ctx->pc = 0x14dd80u;

    // 0x14dd80: 0x8e0313b0  lw          $v1, 0x13B0($s0)
    ctx->pc = 0x14dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5040)));
    // 0x14dd84: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x14dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x14dd88: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x14DD88u;
    {
        const bool branch_taken_0x14dd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14dd88) {
            ctx->pc = 0x14DDC8u;
            return;
        }
    }
    ctx->pc = 0x14DD90u;
    // 0x14dd90: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x14dd94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14dd98: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    // 0x14dd9c: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x14dd9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x14dda0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14dda4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14dda4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14dda8: 0x8603138c  lh          $v1, 0x138C($s0)
    ctx->pc = 0x14dda8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x14ddac: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x14ddacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x14ddb0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x14ddb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x14ddb4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x14ddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14ddb8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DDB8u;
    {
        const bool branch_taken_0x14ddb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ddb8) {
            ctx->pc = 0x14DDC8u;
            return;
        }
    }
    ctx->pc = 0x14DDC0u;
    // 0x14ddc0: 0x8602138c  lh          $v0, 0x138C($s0)
    ctx->pc = 0x14ddc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5004)));
    // 0x14ddc4: 0xa60210a6  sh          $v0, 0x10A6($s0)
    ctx->pc = 0x14ddc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x14ddc8u;
}
