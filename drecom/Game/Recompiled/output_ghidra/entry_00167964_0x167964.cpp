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

// Function: entry_00167964
// Address: 0x167964 - 0x167998
void entry_00167964_0x167964(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167964_0x167964");
#endif

    ctx->pc = 0x167964u;

    // 0x167964: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x167964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x167968: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x167968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x16796c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x16796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167970: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167974: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167974u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167978: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167978u;
    {
        const bool branch_taken_0x167978 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x167978) {
            ctx->pc = 0x167998u;
            return;
        }
    }
    ctx->pc = 0x167980u;
    // 0x167980: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x167984: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x167984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x167988: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x167988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16798c: 0x28823  negu        $s1, $v0
    ctx->pc = 0x16798cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x167990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x167990u;
    {
        const bool branch_taken_0x167990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167990) {
            ctx->pc = 0x1679A4u;
            return;
        }
    }
    ctx->pc = 0x167998u;
}
