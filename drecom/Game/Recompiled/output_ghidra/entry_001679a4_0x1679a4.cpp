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

// Function: entry_001679a4
// Address: 0x1679a4 - 0x1679d8
void entry_001679a4_0x1679a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001679a4_0x1679a4");
#endif

    ctx->pc = 0x1679a4u;

    // 0x1679a4: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x1679a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1679a8: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x1679a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x1679ac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679b4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1679b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679b8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1679B8u;
    {
        const bool branch_taken_0x1679b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1679b8) {
            ctx->pc = 0x1679D8u;
            return;
        }
    }
    ctx->pc = 0x1679C0u;
    // 0x1679c0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1679c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1679c4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1679c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1679c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1679c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1679cc: 0x29023  negu        $s2, $v0
    ctx->pc = 0x1679ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1679d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1679D0u;
    {
        const bool branch_taken_0x1679d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1679d0) {
            ctx->pc = 0x1679E4u;
            return;
        }
    }
    ctx->pc = 0x1679D8u;
}
