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

// Function: entry_0030cfb0
// Address: 0x30cfb0 - 0x30d000
void entry_0030cfb0_0x30cfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cfb0_0x30cfb0");
#endif

    ctx->pc = 0x30cfb0u;

    // 0x30cfb0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfb4: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30cfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30cfb8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x30cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x30cfbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30cfc0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x30CFC0u;
    {
        const bool branch_taken_0x30cfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cfc0) {
            ctx->pc = 0x30D000u;
            return;
        }
    }
    ctx->pc = 0x30CFC8u;
    // 0x30cfc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cfcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30cfd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cfd4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x30cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30cfd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30cfdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cfe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfe4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30cfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30cfecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cff0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cff4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30cff8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30CFF8u;
    {
        const bool branch_taken_0x30cff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cff8) {
            ctx->pc = 0x30D0A8u;
            return;
        }
    }
    ctx->pc = 0x30D000u;
}
