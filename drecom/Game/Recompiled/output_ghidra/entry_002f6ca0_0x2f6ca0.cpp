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

// Function: entry_002f6ca0
// Address: 0x2f6ca0 - 0x2f6d1c
void entry_002f6ca0_0x2f6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f6ca0_0x2f6ca0");
#endif

    ctx->pc = 0x2f6ca0u;

    // 0x2f6ca0: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x2f6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6ca4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2f6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2f6ca8: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x2f6ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2f6cac: 0x108000ef  beqz        $a0, . + 4 + (0xEF << 2)
    ctx->pc = 0x2F6CACu;
    {
        const bool branch_taken_0x2f6cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cac) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6CB4u;
    // 0x2f6cb4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6cb8: 0x90630101  lbu         $v1, 0x101($v1)
    ctx->pc = 0x2f6cb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 257)));
    // 0x2f6cbc: 0x146000eb  bnez        $v1, . + 4 + (0xEB << 2)
    ctx->pc = 0x2F6CBCu;
    {
        const bool branch_taken_0x2f6cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f6cbc) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6CC4u;
    // 0x2f6cc4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x2f6cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2f6cc8: 0x90630100  lbu         $v1, 0x100($v1)
    ctx->pc = 0x2f6cc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x2f6ccc: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x2f6cccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2f6cd0: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x2f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2f6cd4: 0x128400e0  beq         $s4, $a0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x2F6CD4u;
    {
        const bool branch_taken_0x2f6cd4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f6cd4) {
            ctx->pc = 0x2F7058u;
            return;
        }
    }
    ctx->pc = 0x2F6CDCu;
    // 0x2f6cdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2f6cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f6ce0: 0x128300ba  beq         $s4, $v1, . + 4 + (0xBA << 2)
    ctx->pc = 0x2F6CE0u;
    {
        const bool branch_taken_0x2f6ce0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6ce0) {
            ctx->pc = 0x2F6FCCu;
            return;
        }
    }
    ctx->pc = 0x2F6CE8u;
    // 0x2f6ce8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2f6ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f6cec: 0x12900093  beq         $s4, $s0, . + 4 + (0x93 << 2)
    ctx->pc = 0x2F6CECu;
    {
        const bool branch_taken_0x2f6cec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 16));
        if (branch_taken_0x2f6cec) {
            ctx->pc = 0x2F6F3Cu;
            return;
        }
    }
    ctx->pc = 0x2F6CF4u;
    // 0x2f6cf4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f6cf8: 0x1284006e  beq         $s4, $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2F6CF8u;
    {
        const bool branch_taken_0x2f6cf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        if (branch_taken_0x2f6cf8) {
            ctx->pc = 0x2F6EB4u;
            return;
        }
    }
    ctx->pc = 0x2F6D00u;
    // 0x2f6d00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6d04: 0x12830048  beq         $s4, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2F6D04u;
    {
        const bool branch_taken_0x2f6d04 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f6d04) {
            ctx->pc = 0x2F6E28u;
            return;
        }
    }
    ctx->pc = 0x2F6D0Cu;
    // 0x2f6d0c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6D0Cu;
    {
        const bool branch_taken_0x2f6d0c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d0c) {
            ctx->pc = 0x2F6D1Cu;
            return;
        }
    }
    ctx->pc = 0x2F6D14u;
    // 0x2f6d14: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x2F6D14u;
    {
        const bool branch_taken_0x2f6d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f6d14) {
            ctx->pc = 0x2F706Cu;
            return;
        }
    }
    ctx->pc = 0x2F6D1Cu;
}
