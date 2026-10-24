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

// Function: entry_00105b64
// Address: 0x105b64 - 0x105b9c
void entry_00105b64_0x105b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105b64_0x105b64");
#endif

    ctx->pc = 0x105b64u;

    // 0x105b64: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105b68: 0xdc842030  ld          $a0, 0x2030($a0)
    ctx->pc = 0x105b68u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x105b6c: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x105b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x105b70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x105b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105b74: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x105b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x105b78: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x105b78u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x105b7c: 0x481000a  bgez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x105B7Cu;
    {
        const bool branch_taken_0x105b7c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x105B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B7Cu;
        // 0x105b80: 0xae234498  sw          $v1, 0x4498($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b7c) {
            ctx->pc = 0x105BA8u;
            return;
        }
    }
    ctx->pc = 0x105B84u;
    // 0x105b84: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x105b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x105b88: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105B88u;
    {
        const bool branch_taken_0x105b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B88u;
        // 0x105b8c: 0x2604449c  addiu       $a0, $s0, 0x449C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17564));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b88) {
            ctx->pc = 0x105B9Cu;
            return;
        }
    }
    ctx->pc = 0x105B90u;
    // 0x105b90: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x105b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x105b94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B94u;
    {
        const bool branch_taken_0x105b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B94u;
        // 0x105b98: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b94) {
            ctx->pc = 0x105BA0u;
            return;
        }
    }
    ctx->pc = 0x105B9Cu;
}
