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

// Function: entry_00130eb0
// Address: 0x130eb0 - 0x130ee8
void entry_00130eb0_0x130eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130eb0_0x130eb0");
#endif

    ctx->pc = 0x130eb0u;

    // 0x130eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130eb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130ebc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x130ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x130ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ec4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130ec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ecc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ed0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ed4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ed8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130edc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x130ee0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x130EE0u;
    {
        const bool branch_taken_0x130ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ee0) {
            ctx->pc = 0x130FE4u;
            return;
        }
    }
    ctx->pc = 0x130EE8u;
}
