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

// Function: entry_00129334
// Address: 0x129334 - 0x12939c
void entry_00129334_0x129334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129334_0x129334");
#endif

    ctx->pc = 0x129334u;

    // 0x129334: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129338: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x129338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x12933c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x12933cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x129340: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129340) {
            ctx->pc = 0x12939Cu;
            return;
        }
    }
    ctx->pc = 0x129348u;
    // 0x129348: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x129348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x12934c: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x12934cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6838u));
    // 0x129350: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x129350u;
    {
        const bool branch_taken_0x129350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129350) {
            ctx->pc = 0x12939Cu;
            return;
        }
    }
    ctx->pc = 0x129358u;
    // 0x129358: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12935c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x12935cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x129360: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x129360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x129364: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x129364u;
    {
        const bool branch_taken_0x129364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129364) {
            ctx->pc = 0x12939Cu;
            return;
        }
    }
    ctx->pc = 0x12936Cu;
    // 0x12936c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129370: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129374: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x129378: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x129378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x12937c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129380: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129384: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129388: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x129388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12938c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129390: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129394: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129398: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x129398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12939cu;
}
