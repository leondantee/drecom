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

// Function: entry_001088e0
// Address: 0x1088e0 - 0x108930
void entry_001088e0_0x1088e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001088e0_0x1088e0");
#endif

    ctx->pc = 0x1088e0u;

    // 0x1088e0: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1088e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1088e4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1088e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1088e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1088e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088ec: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1088ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1088f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1088f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1088f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1088f8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1088f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1088fc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1088fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x108900: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x108900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x108904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108908: 0x8ea33bf4  lw          $v1, 0x3BF4($s5)
    ctx->pc = 0x108908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10890c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108910: 0x8c443dac  lw          $a0, 0x3DAC($v0)
    ctx->pc = 0x108910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15788)));
    // 0x108914: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x108914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108918: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108918u;
    {
        const bool branch_taken_0x108918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108918u;
        // 0x10891c: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108918) {
            ctx->pc = 0x108930u;
            return;
        }
    }
    ctx->pc = 0x108920u;
    // 0x108920: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x108920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108924: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x108924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108928: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108928u;
    {
        const bool branch_taken_0x108928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108928u;
        // 0x10892c: 0x24170040  addiu       $s7, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108928) {
            ctx->pc = 0x108938u;
            return;
        }
    }
    ctx->pc = 0x108930u;
}
