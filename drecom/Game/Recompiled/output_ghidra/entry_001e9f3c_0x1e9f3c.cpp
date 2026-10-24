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

// Function: entry_001e9f3c
// Address: 0x1e9f3c - 0x1e9f80
void entry_001e9f3c_0x1e9f3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9f3c_0x1e9f3c");
#endif

    switch (ctx->pc) {
        case 0x1e9f50u: goto label_1e9f50;
        default: break;
    }

    ctx->pc = 0x1e9f3cu;

    // 0x1e9f3c: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1e9f40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1e9f44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9f48: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1E9F48u, 0x1E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F50u;
label_1e9f50:
    // 0x1e9f50: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E9F50u;
    {
        const bool branch_taken_0x1e9f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f50) {
            ctx->pc = 0x1E9F80u;
            return;
        }
    }
    ctx->pc = 0x1E9F58u;
    // 0x1e9f58: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f5c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9f60: 0x84830094  lh          $v1, 0x94($a0)
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x1e9f64: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e9f68: 0xa4820094  sh          $v0, 0x94($a0)
    ctx->pc = 0x1e9f68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e9f6c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9f70: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1e9f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9f74: 0xa4800096  sh          $zero, 0x96($a0)
    ctx->pc = 0x1e9f74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 150), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e9f78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E9F78u;
    {
        const bool branch_taken_0x1e9f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f78) {
            ctx->pc = 0x1E9FA0u;
            return;
        }
    }
    ctx->pc = 0x1E9F80u;
}
