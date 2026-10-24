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

// Function: entry_00115a20
// Address: 0x115a20 - 0x115a78
void entry_00115a20_0x115a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115a20_0x115a20");
#endif

    ctx->pc = 0x115a20u;

    // 0x115a20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x115a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x115a24: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x115a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x115a28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x115a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x115a2c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x115a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x115a30: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x115a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x115a34: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x115A34u;
    {
        const bool branch_taken_0x115a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A34u;
        // 0x115a38: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a34) {
            ctx->pc = 0x115A8Cu;
            return;
        }
    }
    ctx->pc = 0x115A3Cu;
    // 0x115a3c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x115A3Cu;
    {
        const bool branch_taken_0x115a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A3Cu;
        // 0x115a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a3c) {
            ctx->pc = 0x115A78u;
            return;
        }
    }
    ctx->pc = 0x115A44u;
    // 0x115a44: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x115a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x115a48: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x115a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x115a4c: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x115a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x115a50: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115A50u;
    {
        const bool branch_taken_0x115a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A50u;
        // 0x115a54: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a50) {
            ctx->pc = 0x115A78u;
            return;
        }
    }
    ctx->pc = 0x115A58u;
    // 0x115a58: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x115a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x115a5c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x115a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x115a60: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x115a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x115a64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115A64u;
    {
        const bool branch_taken_0x115a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A64u;
        // 0x115a68: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a64) {
            ctx->pc = 0x115A78u;
            return;
        }
    }
    ctx->pc = 0x115A6Cu;
    // 0x115a6c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x115a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x115a70: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x115a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x115a74: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x115a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x115a78u;
}
