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

// Function: entry_00125e5c
// Address: 0x125e5c - 0x125ea4
void entry_00125e5c_0x125e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125e5c_0x125e5c");
#endif

    ctx->pc = 0x125e5cu;

    // 0x125e5c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x125e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x125e60: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x125E60u;
    {
        const bool branch_taken_0x125e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e60) {
            ctx->pc = 0x125EA4u;
            return;
        }
    }
    ctx->pc = 0x125E68u;
    // 0x125e68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x125e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125e6c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125e70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x125e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x125e74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x125e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x125e78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125e7c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x125e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x125e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125e84: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x125e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125e88: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125e8c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x125e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125e90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x125e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x125e94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x125e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125e98: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x125e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x125e9c: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x125E9Cu;
    {
        const bool branch_taken_0x125e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125e9c) {
            ctx->pc = 0x126548u;
            return;
        }
    }
    ctx->pc = 0x125EA4u;
}
