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

// Function: entry_001a92f0
// Address: 0x1a92f0 - 0x1a9380
void entry_001a92f0_0x1a92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a92f0_0x1a92f0");
#endif

    ctx->pc = 0x1a92f0u;

    // 0x1a92f0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x1a92f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a92f4: 0x1460ff35  bnez        $v1, . + 4 + (-0xCB << 2)
    ctx->pc = 0x1A92F4u;
    {
        const bool branch_taken_0x1a92f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a92f4) {
            ctx->pc = 0x1A8FCCu;
            return;
        }
    }
    ctx->pc = 0x1A92FCu;
    // 0x1a92fc: 0x93a300a0  lbu         $v1, 0xA0($sp)
    ctx->pc = 0x1a92fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a9300: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9300u;
    {
        const bool branch_taken_0x1a9300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9300) {
            ctx->pc = 0x1A9380u;
            return;
        }
    }
    ctx->pc = 0x1A9308u;
    // 0x1a9308: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a9308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a930c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a930cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a9310: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9314: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x1a9314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x1a9318: 0x8fb30074  lw          $s3, 0x74($sp)
    ctx->pc = 0x1a9318u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a931c: 0x1318c3  sra         $v1, $s3, 3
    ctx->pc = 0x1a931cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 19), 3));
    // 0x1a9320: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9324: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x1a9324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x1a9328: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a932c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1a9330: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1a9334: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x1a9334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x1a9338: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1a9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a933c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a9340: 0x419c3  sra         $v1, $a0, 7
    ctx->pc = 0x1a9340u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1a9344: 0xafa3007c  sw          $v1, 0x7C($sp)
    ctx->pc = 0x1a9344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 3));
    // 0x1a9348: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1a9348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1a934c: 0x33280  sll         $a2, $v1, 10
    ctx->pc = 0x1a934cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x1a9350: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1a9354: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1a9358: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a935c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a935cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9360: 0xc32025  or          $a0, $a2, $v1
    ctx->pc = 0x1a9360u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1a9364: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1a9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1a9368: 0x31bc0  sll         $v1, $v1, 15
    ctx->pc = 0x1a9368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 15));
    // 0x1a936c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1a936cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1a9370: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a9374: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1a9374u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a9378: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1A9378u;
    {
        const bool branch_taken_0x1a9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9378) {
            ctx->pc = 0x1A93ACu;
            return;
        }
    }
    ctx->pc = 0x1A9380u;
}
