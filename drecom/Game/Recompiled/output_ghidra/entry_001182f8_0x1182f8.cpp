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

// Function: entry_001182f8
// Address: 0x1182f8 - 0x118338
void entry_001182f8_0x1182f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001182f8_0x1182f8");
#endif

    ctx->pc = 0x1182f8u;

    // 0x1182f8: 0x3c0e0038  lui         $t6, 0x38
    ctx->pc = 0x1182f8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)56 << 16));
    // 0x1182fc: 0x25c24930  addiu       $v0, $t6, 0x4930
    ctx->pc = 0x1182fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 18736));
    // 0x118300: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x118300u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x384938u));
    // 0x118304: 0x1202008e  beq         $s0, $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x118304u;
    {
        const bool branch_taken_0x118304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x118308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118304u;
        // 0x118308: 0x25660003  addiu       $a2, $t3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118304) {
            ctx->pc = 0x118540u;
            return;
        }
    }
    ctx->pc = 0x11830Cu;
    // 0x11830c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x11830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118310: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x118310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x118314: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x118314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x118318: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x118318u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11831c: 0x111202b  sltu        $a0, $t0, $s1
    ctx->pc = 0x11831cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x118320: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x118320u;
    {
        const bool branch_taken_0x118320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118320u;
        // 0x118324: 0x2281023  subu        $v0, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118320) {
            ctx->pc = 0x118338u;
            return;
        }
    }
    ctx->pc = 0x118328u;
    // 0x118328: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11832c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11832cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x118330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x118330u;
    {
        const bool branch_taken_0x118330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118330u;
        // 0x118334: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118330) {
            ctx->pc = 0x118344u;
            return;
        }
    }
    ctx->pc = 0x118338u;
}
