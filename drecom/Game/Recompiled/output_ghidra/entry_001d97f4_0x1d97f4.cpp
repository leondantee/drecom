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

// Function: entry_001d97f4
// Address: 0x1d97f4 - 0x1d981c
void entry_001d97f4_0x1d97f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97f4_0x1d97f4");
#endif

    ctx->pc = 0x1d97f4u;

    // 0x1d97f4: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d97f8: 0xae021a14  sw          $v0, 0x1A14($s0)
    ctx->pc = 0x1d97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
    // 0x1d97fc: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9800: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1d9800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1d9804: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 2));
    // 0x1d9808: 0x8e111a14  lw          $s1, 0x1A14($s0)
    ctx->pc = 0x1d9808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d980c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d9810: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1d9810u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D9814u;
    {
        const bool branch_taken_0x1d9814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9814) {
            ctx->pc = 0x1D9840u;
            return;
        }
    }
    ctx->pc = 0x1D981Cu;
}
