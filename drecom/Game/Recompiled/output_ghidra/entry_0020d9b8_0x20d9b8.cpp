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

// Function: entry_0020d9b8
// Address: 0x20d9b8 - 0x20d9fc
void entry_0020d9b8_0x20d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d9b8_0x20d9b8");
#endif

    ctx->pc = 0x20d9b8u;

    // 0x20d9b8: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x20d9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x20d9bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9c0: 0xac64134c  sw          $a0, 0x134C($v1)
    ctx->pc = 0x20d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4940), GPR_U32(ctx, 4));
    // 0x20d9c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d9c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d9d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20d9d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x20d9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d9dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d9e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x20d9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20d9ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20d9f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x20d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20d9f4: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x20D9F4u;
    {
        const bool branch_taken_0x20d9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d9f4) {
            ctx->pc = 0x20DC38u;
            return;
        }
    }
    ctx->pc = 0x20D9FCu;
}
