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

// Function: entry_001d7bd0
// Address: 0x1d7bd0 - 0x1d7bf8
void entry_001d7bd0_0x1d7bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7bd0_0x1d7bd0");
#endif

    ctx->pc = 0x1d7bd0u;

    // 0x1d7bd0: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1d7bd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d7bd4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x1d7bd4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1d7bd8: 0x17c0ffe9  bnez        $fp, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D7BD8u;
    {
        const bool branch_taken_0x1d7bd8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bd8) {
            ctx->pc = 0x1D7B80u;
            return;
        }
    }
    ctx->pc = 0x1D7BE0u;
    // 0x1d7be0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1d7be0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d7be4: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7be8: 0x8c7100a8  lw          $s1, 0xA8($v1)
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1d7bec: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d7becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1d7bf0: 0x8c7e0020  lw          $fp, 0x20($v1)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1d7bf4: 0x0  nop
    ctx->pc = 0x1d7bf4u;
    // NOP
    ctx->pc = 0x1d7bf8u;
}
