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

// Function: entry_00286090
// Address: 0x286090 - 0x2860c0
void entry_00286090_0x286090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286090_0x286090");
#endif

    ctx->pc = 0x286090u;

    // 0x286090: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286094: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x286094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x286098: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x286098u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28609c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2860a0: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2860A0u;
    {
        const bool branch_taken_0x2860a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2860a0) {
            ctx->pc = 0x2860C0u;
            return;
        }
    }
    ctx->pc = 0x2860A8u;
    // 0x2860a8: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x2860a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x2860ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2860acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2860b0: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x2860b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x2860b4: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x2860b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x2860b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2860B8u;
    {
        const bool branch_taken_0x2860b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2860b8) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x2860C0u;
}
