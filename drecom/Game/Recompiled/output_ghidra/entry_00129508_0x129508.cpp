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

// Function: entry_00129508
// Address: 0x129508 - 0x129570
void entry_00129508_0x129508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129508_0x129508");
#endif

    ctx->pc = 0x129508u;

    // 0x129508: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x129508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x12950c: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x12950cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x129510: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x129510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x129514: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x129514u;
    {
        const bool branch_taken_0x129514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129514) {
            ctx->pc = 0x129570u;
            return;
        }
    }
    ctx->pc = 0x12951Cu;
    // 0x12951c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x12951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x129520: 0x8c236838  lw          $v1, 0x6838($at)
    ctx->pc = 0x129520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B6838u));
    // 0x129524: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x129524u;
    {
        const bool branch_taken_0x129524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129524) {
            ctx->pc = 0x129570u;
            return;
        }
    }
    ctx->pc = 0x12952Cu;
    // 0x12952c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x12952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x129530: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x129530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x129534: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x129534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x129538: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x129538u;
    {
        const bool branch_taken_0x129538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129538) {
            ctx->pc = 0x129570u;
            return;
        }
    }
    ctx->pc = 0x129540u;
    // 0x129540: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x129540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129548: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x129548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12954c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x12954cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x129550: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129554: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x129554u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x129558: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12955c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12955cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x129560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x129564: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x129564u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x129568: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x129568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12956c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12956cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x129570u;
}
