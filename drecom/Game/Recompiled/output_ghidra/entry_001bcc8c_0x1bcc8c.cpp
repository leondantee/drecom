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

// Function: entry_001bcc8c
// Address: 0x1bcc8c - 0x1bccbc
void entry_001bcc8c_0x1bcc8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcc8c_0x1bcc8c");
#endif

    switch (ctx->pc) {
        case 0x1bcc98u: goto label_1bcc98;
        default: break;
    }

    ctx->pc = 0x1bcc8cu;

    // 0x1bcc8c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1bcc8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1bcc90: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1BCC90u;
    SET_GPR_U32(ctx, 31, 0x1BCC98u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1BCC90u, 0x1BCC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCC98u;
label_1bcc98:
    // 0x1bcc98: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x1bcc98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcc9c: 0x8e051b60  lw          $a1, 0x1B60($s0)
    ctx->pc = 0x1bcc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
    // 0x1bcca0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCCA0u;
    {
        const bool branch_taken_0x1bcca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcca0) {
            ctx->pc = 0x1BCCBCu;
            return;
        }
    }
    ctx->pc = 0x1BCCA8u;
    // 0x1bcca8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1bcca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bccac: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bccacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bccb0: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1bccb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bccb4: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1BCCB4u;
    {
        const bool branch_taken_0x1bccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bccb4) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCCBCu;
}
