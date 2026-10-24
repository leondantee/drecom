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

// Function: entry_00198580
// Address: 0x198580 - 0x1985c8
void entry_00198580_0x198580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198580_0x198580");
#endif

    ctx->pc = 0x198580u;

    // 0x198580: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x198584: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x198588: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x19858c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x198590: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x198590u;
    {
        const bool branch_taken_0x198590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198590) {
            ctx->pc = 0x1985C8u;
            return;
        }
    }
    ctx->pc = 0x198598u;
    // 0x198598: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x198598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19859c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985a0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1985a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1985a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1985a8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985ac: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1985acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1985b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1985b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1985b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985bc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1985bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1985c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1985c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985c4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1985c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x1985c8u;
}
