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

// Function: entry_00296af8
// Address: 0x296af8 - 0x296b38
void entry_00296af8_0x296af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296af8_0x296af8");
#endif

    ctx->pc = 0x296af8u;

    // 0x296af8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x296af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x296afc: 0x8c23c9e8  lw          $v1, -0x3618($at)
    ctx->pc = 0x296afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x80C9E8u));
    // 0x296b00: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x296B00u;
    {
        const bool branch_taken_0x296b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b00) {
            ctx->pc = 0x296C34u;
            return;
        }
    }
    ctx->pc = 0x296B08u;
    // 0x296b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296b0c: 0x8c6369b4  lw          $v1, 0x69B4($v1)
    ctx->pc = 0x296b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27060)));
    // 0x296b10: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x296b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x296b14: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x296b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x296b18: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x296b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x296b1c: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x296B1Cu;
    {
        const bool branch_taken_0x296b1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296b1c) {
            ctx->pc = 0x296BB8u;
            return;
        }
    }
    ctx->pc = 0x296B24u;
    // 0x296b24: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x296b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x296b28: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296B38u;
            return;
        }
    }
    ctx->pc = 0x296B30u;
    // 0x296b30: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x296B30u;
    {
        const bool branch_taken_0x296b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296b30) {
            ctx->pc = 0x296C2Cu;
            return;
        }
    }
    ctx->pc = 0x296B38u;
}
