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

// Function: entry_0028ea38
// Address: 0x28ea38 - 0x28ea60
void entry_0028ea38_0x28ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028ea38_0x28ea38");
#endif

    ctx->pc = 0x28ea38u;

    // 0x28ea38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea3c: 0xa2036854  sb          $v1, 0x6854($s0)
    ctx->pc = 0x28ea3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26708), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ea40: 0x82075dea  lb          $a3, 0x5DEA($s0)
    ctx->pc = 0x28ea40u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28ea44: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x28ea44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x28ea48: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x28ea4c: 0xa04313f8  sb          $v1, 0x13F8($v0)
    ctx->pc = 0x28ea4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5112), (uint8_t)GPR_U32(ctx, 3));
    // 0x28ea50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea54: 0xa2026609  sb          $v0, 0x6609($s0)
    ctx->pc = 0x28ea54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26121), (uint8_t)GPR_U32(ctx, 2));
    // 0x28ea58: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28EA58u;
    {
        const bool branch_taken_0x28ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea58) {
            ctx->pc = 0x28EAA8u;
            return;
        }
    }
    ctx->pc = 0x28EA60u;
}
