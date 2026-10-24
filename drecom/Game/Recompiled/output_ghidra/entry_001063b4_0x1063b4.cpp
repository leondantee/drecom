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

// Function: entry_001063b4
// Address: 0x1063b4 - 0x106400
void entry_001063b4_0x1063b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001063b4_0x1063b4");
#endif

    ctx->pc = 0x1063b4u;

    // 0x1063b4: 0x244241f8  addiu       $v0, $v0, 0x41F8
    ctx->pc = 0x1063b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16888));
    // 0x1063b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1063b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1063bc: 0x24080140  addiu       $t0, $zero, 0x140
    ctx->pc = 0x1063bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1063c0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1063c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1063c4: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1063c4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1063c8: 0x8c430280  lw          $v1, 0x280($v0)
    ctx->pc = 0x1063c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x1063cc: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1063d0: 0x8d8a3d7c  lw          $t2, 0x3D7C($t4)
    ctx->pc = 0x1063d0u;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x383D7Cu));
    // 0x1063d4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1063d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063d8: 0x686818  mult        $t5, $v1, $t0
    ctx->pc = 0x1063d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1063dc: 0xad2b3e3c  sw          $t3, 0x3E3C($t1)
    ctx->pc = 0x1063dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 15932), GPR_U32(ctx, 11));
    // 0x1063e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1063e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1063e4: 0x1a21821  addu        $v1, $t5, $v0
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1063e8: 0x15470005  bne         $t2, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1063E8u;
    {
        const bool branch_taken_0x1063e8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 7));
        ctx->pc = 0x1063ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1063E8u;
        // 0x1063ec: 0xac6b013c  sw          $t3, 0x13C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1063e8) {
            ctx->pc = 0x106400u;
            return;
        }
    }
    ctx->pc = 0x1063F0u;
    // 0x1063f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1063f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1063f4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1063f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1063f8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1063f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1063fc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1063fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x106400u;
}
