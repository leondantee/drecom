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

// Function: entry_00115dd4
// Address: 0x115dd4 - 0x115e14
void entry_00115dd4_0x115dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115dd4_0x115dd4");
#endif

    ctx->pc = 0x115dd4u;

    // 0x115dd4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x115dd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x115dd8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x115dd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x115ddc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x115ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x115de0: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x115de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x115de4: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x115DE4u;
    {
        const bool branch_taken_0x115de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x115DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DE4u;
        // 0x115de8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115de4) {
            ctx->pc = 0x115E40u;
            return;
        }
    }
    ctx->pc = 0x115DECu;
    // 0x115dec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115df0: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x115df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x115df4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115df8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x115df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x115dfc: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x115dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x115e00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115E00u;
    {
        const bool branch_taken_0x115e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E00u;
        // 0x115e04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e00) {
            ctx->pc = 0x115E14u;
            return;
        }
    }
    ctx->pc = 0x115E08u;
    // 0x115e08: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x115e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x115e0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x115E0Cu;
    {
        const bool branch_taken_0x115e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E0Cu;
        // 0x115e10: 0x2455d950  addiu       $s5, $v0, -0x26B0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e0c) {
            ctx->pc = 0x115E1Cu;
            return;
        }
    }
    ctx->pc = 0x115E14u;
}
