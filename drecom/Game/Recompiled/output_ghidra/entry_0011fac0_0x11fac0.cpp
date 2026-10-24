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

// Function: entry_0011fac0
// Address: 0x11fac0 - 0x11faf4
void entry_0011fac0_0x11fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fac0_0x11fac0");
#endif

    ctx->pc = 0x11fac0u;

    // 0x11fac0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x11fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fac4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x11fac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fac8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11FAC8u;
    {
        const bool branch_taken_0x11fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAC8u;
        // 0x11facc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fac8) {
            ctx->pc = 0x11FBC0u;
            return;
        }
    }
    ctx->pc = 0x11FAD0u;
    // 0x11fad0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fad4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x11fad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x11fad8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11fadc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11fadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11fae0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FAE0u;
    {
        const bool branch_taken_0x11fae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE0u;
        // 0x11fae4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fae0) {
            ctx->pc = 0x11FAF4u;
            return;
        }
    }
    ctx->pc = 0x11FAE8u;
    // 0x11fae8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x11fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x11faec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FAECu;
    {
        const bool branch_taken_0x11faec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAECu;
        // 0x11faf0: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faec) {
            ctx->pc = 0x11FB08u;
            return;
        }
    }
    ctx->pc = 0x11FAF4u;
}
