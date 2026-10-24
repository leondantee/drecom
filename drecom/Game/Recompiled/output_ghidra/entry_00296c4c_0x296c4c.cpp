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

// Function: entry_00296c4c
// Address: 0x296c4c - 0x296c94
void entry_00296c4c_0x296c4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296c4c_0x296c4c");
#endif

    ctx->pc = 0x296c4cu;

    // 0x296c4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c50: 0x8c646998  lw          $a0, 0x6998($v1)
    ctx->pc = 0x296c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27032)));
    // 0x296c54: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x296c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x296c58: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x296c58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x296c5c: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x296C5Cu;
    {
        const bool branch_taken_0x296c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296c5c) {
            ctx->pc = 0x296D88u;
            return;
        }
    }
    ctx->pc = 0x296C64u;
    // 0x296c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296c68: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296c6c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296c70: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296c74: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x296c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296c78: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x296C78u;
    {
        const bool branch_taken_0x296c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296c78) {
            ctx->pc = 0x296D0Cu;
            return;
        }
    }
    ctx->pc = 0x296C80u;
    // 0x296c80: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296c84: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296C84u;
    {
        const bool branch_taken_0x296c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296c84) {
            ctx->pc = 0x296C94u;
            return;
        }
    }
    ctx->pc = 0x296C8Cu;
    // 0x296c8c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x296C8Cu;
    {
        const bool branch_taken_0x296c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c8c) {
            ctx->pc = 0x296D70u;
            return;
        }
    }
    ctx->pc = 0x296C94u;
}
