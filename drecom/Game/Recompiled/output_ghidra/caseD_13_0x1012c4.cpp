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

// Function: caseD_13
// Address: 0x1012c4 - 0x1012f8
void caseD_13_0x1012c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_13_0x1012c4");
#endif

    ctx->pc = 0x1012c4u;

    // 0x1012c4: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x1012c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1012c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1012cc: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x1012ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x1012d0: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1012d4: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1012d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1012d8: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x1012d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1012dc: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1012DCu;
    {
        const bool branch_taken_0x1012dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012DCu;
        // 0x1012e0: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012dc) {
            ctx->pc = 0x10131Cu;
            return;
        }
    }
    ctx->pc = 0x1012E4u;
    // 0x1012e4: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x1012e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x1012e8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1012e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1012ec: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1012ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1012f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1012F0u;
    {
        const bool branch_taken_0x1012f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F0u;
        // 0x1012f4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012f0) {
            ctx->pc = 0x101338u;
            return;
        }
    }
    ctx->pc = 0x1012F8u;
}
