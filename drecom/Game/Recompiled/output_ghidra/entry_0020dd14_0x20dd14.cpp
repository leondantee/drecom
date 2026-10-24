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

// Function: entry_0020dd14
// Address: 0x20dd14 - 0x20dd60
void entry_0020dd14_0x20dd14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020dd14_0x20dd14");
#endif

    ctx->pc = 0x20dd14u;

    // 0x20dd14: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x20dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd18: 0x8c83135c  lw          $v1, 0x135C($a0)
    ctx->pc = 0x20dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4956)));
    // 0x20dd1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20dd20: 0xac83135c  sw          $v1, 0x135C($a0)
    ctx->pc = 0x20dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 3));
    // 0x20dd24: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd28: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x20dd28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x20dd2c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20dd30: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20dd30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x20dd34: 0x286101f4  slti        $at, $v1, 0x1F4
    ctx->pc = 0x20dd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x20dd38: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x20DD38u;
    {
        const bool branch_taken_0x20dd38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd38) {
            ctx->pc = 0x20DD60u;
            return;
        }
    }
    ctx->pc = 0x20DD40u;
    // 0x20dd40: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd44: 0x8c64135c  lw          $a0, 0x135C($v1)
    ctx->pc = 0x20dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4956)));
    // 0x20dd48: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x20dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20dd4c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DD4Cu;
    {
        const bool branch_taken_0x20dd4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20dd4c) {
            ctx->pc = 0x20DD60u;
            return;
        }
    }
    ctx->pc = 0x20DD54u;
    // 0x20dd54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x20dd5c: 0xac641360  sw          $a0, 0x1360($v1)
    ctx->pc = 0x20dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 4));
    ctx->pc = 0x20dd60u;
}
