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

// Function: entry_002c7c18
// Address: 0x2c7c18 - 0x2c7c50
void entry_002c7c18_0x2c7c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c7c18_0x2c7c18");
#endif

    ctx->pc = 0x2c7c18u;

    // 0x2c7c18: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c20: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c24: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2c7c28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c7c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c7c2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7c2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7c30: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7C30u;
    {
        const bool branch_taken_0x2c7c30 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c7c30) {
            ctx->pc = 0x2C7C50u;
            return;
        }
    }
    ctx->pc = 0x2C7C38u;
    // 0x2c7c38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c40: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c44: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c7c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c7c48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7C48u;
    {
        const bool branch_taken_0x2c7c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c48) {
            ctx->pc = 0x2C7C78u;
            return;
        }
    }
    ctx->pc = 0x2C7C50u;
}
