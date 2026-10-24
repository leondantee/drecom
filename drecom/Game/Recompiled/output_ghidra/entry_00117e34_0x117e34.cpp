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

// Function: entry_00117e34
// Address: 0x117e34 - 0x117e70
void entry_00117e34_0x117e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117e34_0x117e34");
#endif

    ctx->pc = 0x117e34u;

    // 0x117e34: 0x24120400  addiu       $s2, $zero, 0x400
    ctx->pc = 0x117e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x117e38: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x117e3c: 0x3051f000  andi        $s1, $v0, 0xF000
    ctx->pc = 0x117e3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x117e40: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x117e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e44: 0x3a232000  xori        $v1, $s1, 0x2000
    ctx->pc = 0x117e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)8192);
    // 0x117e48: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x117E48u;
    {
        const bool branch_taken_0x117e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x117E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E48u;
        // 0x117e4c: 0x2c710001  sltiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e48) {
            ctx->pc = 0x117E70u;
            return;
        }
    }
    ctx->pc = 0x117E50u;
    // 0x117e50: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x117e54: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x117e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x117e58: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x117e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
    // 0x117e5c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117E5Cu;
    {
        const bool branch_taken_0x117e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E5Cu;
        // 0x117e60: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e5c) {
            ctx->pc = 0x117E74u;
            return;
        }
    }
    ctx->pc = 0x117E64u;
    // 0x117e64: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x117e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x117e68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117E68u;
    {
        const bool branch_taken_0x117e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E68u;
        // 0x117e6c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e68) {
            ctx->pc = 0x117E78u;
            return;
        }
    }
    ctx->pc = 0x117E70u;
}
