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

// Function: caseD_0
// Address: 0x101204 - 0x10123c
void caseD_0_0x101204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x101204");
#endif

    ctx->pc = 0x101204u;

    // 0x101204: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x101204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x101208: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10120c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x10120cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x101210: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x101210u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x101214: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x101214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101218: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101218u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x10121c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x10121cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x101220: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x101220u;
    {
        const bool branch_taken_0x101220 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101220u;
        // 0x101224: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101220) {
            ctx->pc = 0x10131Cu;
            return;
        }
    }
    ctx->pc = 0x101228u;
    // 0x101228: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x101228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x10122c: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x10122cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
    // 0x101230: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x101230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101234: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x101234u;
    {
        const bool branch_taken_0x101234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101234u;
        // 0x101238: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101234) {
            ctx->pc = 0x101338u;
            return;
        }
    }
    ctx->pc = 0x10123Cu;
}
