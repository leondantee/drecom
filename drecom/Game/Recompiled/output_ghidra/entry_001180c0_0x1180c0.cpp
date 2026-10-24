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

// Function: entry_001180c0
// Address: 0x1180c0 - 0x118104
void entry_001180c0_0x1180c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001180c0_0x1180c0");
#endif

    ctx->pc = 0x1180c0u;

    // 0x1180c0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x1180c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1180c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1180c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1180c8: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x1180c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x1180cc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x1180ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x1180d0: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x1180d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1180d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1180d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1180d8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x1180d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1180dc: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x1180dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x1180e0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x1180e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x1180e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1180e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1180e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1180e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1180ec: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x1180ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1180f0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1180F0u;
    {
        const bool branch_taken_0x1180f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1180F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180F0u;
        // 0x1180f4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180f0) {
            ctx->pc = 0x118104u;
            return;
        }
    }
    ctx->pc = 0x1180F8u;
    // 0x1180f8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1180f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1180fc: 0xc045cc4  jal         func_117310
    ctx->pc = 0x1180FCu;
    SET_GPR_U32(ctx, 31, 0x118104u);
    ctx->pc = 0x118100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1180FCu;
    // 0x118100: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117310u;
    {
        ctx->pc = 0x118104u;
        ps2_stubs::free_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x118104u) { return; }
    ctx->pc = 0x118104u;
}
