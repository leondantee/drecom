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

// Function: entry_00127b1c
// Address: 0x127b1c - 0x127b64
void entry_00127b1c_0x127b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127b1c_0x127b1c");
#endif

    ctx->pc = 0x127b1cu;

    // 0x127b1c: 0x9603007c  lhu         $v1, 0x7C($s0)
    ctx->pc = 0x127b1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x127b20: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x127B20u;
    {
        const bool branch_taken_0x127b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b20) {
            ctx->pc = 0x127B64u;
            return;
        }
    }
    ctx->pc = 0x127B28u;
    // 0x127b28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127b2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b30: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x127b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x127b34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x127b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x127b38: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b3c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x127b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x127b40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b44: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x127b44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x127b48: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b4c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x127b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x127b50: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x127b54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x127b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x127b58: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x127b58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x127b5c: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x127B5Cu;
    {
        const bool branch_taken_0x127b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127b5c) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x127B64u;
}
