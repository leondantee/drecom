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

// Function: entry_00107a54
// Address: 0x107a54 - 0x107a88
void entry_00107a54_0x107a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a54_0x107a54");
#endif

    ctx->pc = 0x107a54u;

    // 0x107a54: 0x8d433a98  lw          $v1, 0x3A98($t2)
    ctx->pc = 0x107a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15000)));
    // 0x107a58: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x107a58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x107a5c: 0x8ca43d78  lw          $a0, 0x3D78($a1)
    ctx->pc = 0x107a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15736)));
    // 0x107a60: 0x8d023ad4  lw          $v0, 0x3AD4($t0)
    ctx->pc = 0x107a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15060)));
    // 0x107a64: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x107a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x107a68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x107A68u;
    {
        const bool branch_taken_0x107a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A68u;
        // 0x107a6c: 0xacc53e38  sw          $a1, 0x3E38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 15928), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a68) {
            ctx->pc = 0x107A8Cu;
            return;
        }
    }
    ctx->pc = 0x107A70u;
    // 0x107a70: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x107a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x107a74: 0x8c623ad8  lw          $v0, 0x3AD8($v1)
    ctx->pc = 0x107a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383AD8u));
    // 0x107a78: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x107a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x107a7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x107A7Cu;
    {
        const bool branch_taken_0x107a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107a7c) {
            ctx->pc = 0x107A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107A7Cu;
            // 0x107a80: 0x3c050038  lui         $a1, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107A90u;
            return;
        }
    }
    ctx->pc = 0x107A84u;
    // 0x107a84: 0x24a20400  addiu       $v0, $a1, 0x400
    ctx->pc = 0x107a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    ctx->pc = 0x107a88u;
}
