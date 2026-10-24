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

// Function: entry_0013bc40
// Address: 0x13bc40 - 0x13bc70
void entry_0013bc40_0x13bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bc40_0x13bc40");
#endif

    ctx->pc = 0x13bc40u;

    // 0x13bc40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13bc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bc44: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x13bc44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x13bc48: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13bc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13bc4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bc50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13BC50u;
    {
        const bool branch_taken_0x13bc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13bc50) {
            ctx->pc = 0x13BC70u;
            return;
        }
    }
    ctx->pc = 0x13BC58u;
    // 0x13bc58: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x13bc58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13bc5c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x13bc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x13bc60: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BC60u;
    {
        const bool branch_taken_0x13bc60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13bc60) {
            ctx->pc = 0x13BC70u;
            return;
        }
    }
    ctx->pc = 0x13BC68u;
    // 0x13bc68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bc6c: 0xa2030102  sb          $v1, 0x102($s0)
    ctx->pc = 0x13bc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 258), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x13bc70u;
}
