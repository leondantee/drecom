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

// Function: entry_001199e0
// Address: 0x1199e0 - 0x119a24
void entry_001199e0_0x1199e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001199e0_0x1199e0");
#endif

    ctx->pc = 0x1199e0u;

    // 0x1199e0: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x1199e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x1199e4: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x1199E4u;
    {
        const bool branch_taken_0x1199e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1199E4u;
        // 0x1199e8: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e4) {
            ctx->pc = 0x119A50u;
            return;
        }
    }
    ctx->pc = 0x1199ECu;
    // 0x1199ec: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x1199ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x1199f0: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1199f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1199f4: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x1199f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x1199f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1199f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1199fc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1199fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x119a00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x119a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x119a04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x119a08: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x119a08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x119a0c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119a10: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x119a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x119a14: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x119a14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x119a18: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x119A18u;
    {
        const bool branch_taken_0x119a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119A18u;
        // 0x119a1c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119a18) {
            ctx->pc = 0x119A24u;
            return;
        }
    }
    ctx->pc = 0x119A20u;
    // 0x119a20: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    ctx->pc = 0x119a24u;
}
