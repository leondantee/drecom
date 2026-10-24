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

// Function: entry_00346974
// Address: 0x346974 - 0x34699c
void entry_00346974_0x346974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00346974_0x346974");
#endif

    ctx->pc = 0x346974u;

    // 0x346974: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346978: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34697c: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34697cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x346980: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x346980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346984: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x346984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x346988: 0xa0c0006f  sb          $zero, 0x6F($a2)
    ctx->pc = 0x346988u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x34698c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x34698cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x346990: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x346990u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346994: 0x25031330  addiu       $v1, $t0, 0x1330
    ctx->pc = 0x346994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x346998: 0xa0670072  sb          $a3, 0x72($v1)
    ctx->pc = 0x346998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x34699cu;
}
