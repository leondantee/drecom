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

// Function: entry_0015e6ac
// Address: 0x15e6ac - 0x15e6fc
void entry_0015e6ac_0x15e6ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e6ac_0x15e6ac");
#endif

    ctx->pc = 0x15e6acu;

    // 0x15e6ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15e6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e6b4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x15e6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x15e6b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e6bc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x15E6BCu;
    {
        const bool branch_taken_0x15e6bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6bc) {
            ctx->pc = 0x15E6FCu;
            return;
        }
    }
    ctx->pc = 0x15E6C4u;
    // 0x15e6c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e6c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6cc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x15e6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x15e6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e6d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6d8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x15e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x15e6dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6e0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x15e6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e6e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6e8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x15e6e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e6ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e6f0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x15e6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x15e6f4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x15E6F4u;
    {
        const bool branch_taken_0x15e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e6f4) {
            ctx->pc = 0x15E7E0u;
            return;
        }
    }
    ctx->pc = 0x15E6FCu;
}
