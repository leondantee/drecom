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

// Function: entry_00170b20
// Address: 0x170b20 - 0x170b68
void entry_00170b20_0x170b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b20_0x170b20");
#endif

    ctx->pc = 0x170b20u;

    // 0x170b20: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x170b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x170b24: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x170b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x170b28: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x170b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x170b2c: 0x306200a0  andi        $v0, $v1, 0xA0
    ctx->pc = 0x170b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)160);
    // 0x170b30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170B30u;
    {
        const bool branch_taken_0x170b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b30) {
            ctx->pc = 0x170B68u;
            return;
        }
    }
    ctx->pc = 0x170B38u;
    // 0x170b38: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x170b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x170b3c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x170b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x170b40: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x170b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b44: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x170b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x170b48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x170b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x170b4c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x170b50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170b54: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x170b58: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x170b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x170b5c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x170B5Cu;
    {
        const bool branch_taken_0x170b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170b5c) {
            ctx->pc = 0x170C40u;
            return;
        }
    }
    ctx->pc = 0x170B64u;
    // 0x170b64: 0x0  nop
    ctx->pc = 0x170b64u;
    // NOP
    ctx->pc = 0x170b68u;
}
