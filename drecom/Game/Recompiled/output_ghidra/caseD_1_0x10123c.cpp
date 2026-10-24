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

// Function: caseD_1
// Address: 0x10123c - 0x10128c
void caseD_1_0x10123c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x10123c");
#endif

    ctx->pc = 0x10123cu;

    // 0x10123c: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x10123cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x101240: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x101244: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x101244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x101248: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x101248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10124c: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x101250: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x101254: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x101254u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x101258: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x101258u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x10125c: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x10125Cu;
    {
        const bool branch_taken_0x10125c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10125c) {
            ctx->pc = 0x10131Cu;
            return;
        }
    }
    ctx->pc = 0x101264u;
    // 0x101264: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x101268: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x101268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
    // 0x10126c: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x10126cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x101270: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x101274: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101278: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10127c: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x10127cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x101280: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x101284: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x101284u;
    {
        const bool branch_taken_0x101284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101284u;
        // 0x101288: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101284) {
            ctx->pc = 0x101344u;
            return;
        }
    }
    ctx->pc = 0x10128Cu;
}
