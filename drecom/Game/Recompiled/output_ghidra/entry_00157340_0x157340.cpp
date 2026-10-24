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

// Function: entry_00157340
// Address: 0x157340 - 0x1573dc
void entry_00157340_0x157340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157340_0x157340");
#endif

    ctx->pc = 0x157340u;

    // 0x157340: 0x26e20014  addiu       $v0, $s7, 0x14
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x157344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x157344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x157348: 0x3c030df0  lui         $v1, 0xDF0
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3568 << 16));
    // 0x15734c: 0x34631ff0  ori         $v1, $v1, 0x1FF0
    ctx->pc = 0x15734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8176);
    // 0x157350: 0x26e20020  addiu       $v0, $s7, 0x20
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x157354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157358: 0x3c0278fb  lui         $v0, 0x78FB
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30971 << 16));
    // 0x15735c: 0x34426ff7  ori         $v0, $v0, 0x6FF7
    ctx->pc = 0x15735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28663);
    // 0x157360: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x157364: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x157364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x157368: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15736c: 0x26e2001c  addiu       $v0, $s7, 0x1C
    ctx->pc = 0x15736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x157370: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157374: 0x3c0286eb  lui         $v0, 0x86EB
    ctx->pc = 0x157374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34539 << 16));
    // 0x157378: 0x34438fe7  ori         $v1, $v0, 0x8FE7
    ctx->pc = 0x157378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36839);
    // 0x15737c: 0x26e20024  addiu       $v0, $s7, 0x24
    ctx->pc = 0x15737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
    // 0x157380: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157384: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157388: 0x26e20028  addiu       $v0, $s7, 0x28
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x15738c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15738cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157390: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157394: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x157394u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x157398: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x157398u;
    {
        const bool branch_taken_0x157398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157398) {
            ctx->pc = 0x1573DCu;
            return;
        }
    }
    ctx->pc = 0x1573A0u;
    // 0x1573a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1573a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1573a4: 0x2445ec58  addiu       $a1, $v0, -0x13A8
    ctx->pc = 0x1573a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1573a8: 0x26915508  addiu       $s1, $s4, 0x5508
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x1573ac: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x1573acu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC58u));
    // 0x1573b0: 0xdcb20008  ld          $s2, 0x8($a1)
    ctx->pc = 0x1573b0u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x47EC60u));
    // 0x1573b4: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1573b4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC68u));
    // 0x1573b8: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x1573b8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC70u));
    // 0x1573bc: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1573bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x1573c0: 0xfe320008  sd          $s2, 0x8($s1)
    ctx->pc = 0x1573c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 18));
    // 0x1573c4: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1573c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1573c8: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1573c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1573cc: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x1573ccu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC78u));
    // 0x1573d0: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x1573d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x1573d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1573D4u;
    {
        const bool branch_taken_0x1573d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573d4) {
            ctx->pc = 0x157410u;
            return;
        }
    }
    ctx->pc = 0x1573DCu;
}
