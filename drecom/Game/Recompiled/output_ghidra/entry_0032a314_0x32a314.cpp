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

// Function: entry_0032a314
// Address: 0x32a314 - 0x32a37c
void entry_0032a314_0x32a314(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a314_0x32a314");
#endif

    ctx->pc = 0x32a314u;

    // 0x32a314: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x32a314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x32a318: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a31c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a320: 0x14c30023  bne         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x32A320u;
    {
        const bool branch_taken_0x32a320 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a320) {
            ctx->pc = 0x32A3B0u;
            return;
        }
    }
    ctx->pc = 0x32A328u;
    // 0x32a328: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x32a328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32a32c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a330: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a334: 0x14c30011  bne         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x32A334u;
    {
        const bool branch_taken_0x32a334 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a334) {
            ctx->pc = 0x32A37Cu;
            return;
        }
    }
    ctx->pc = 0x32A33Cu;
    // 0x32a33c: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x32a33cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a340: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x32a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32a344: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x32a344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x32a348: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x32a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32a34c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a34cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a350: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x32a350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a354: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x32A354u;
    {
        const bool branch_taken_0x32a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a354) {
            ctx->pc = 0x32A3B0u;
            return;
        }
    }
    ctx->pc = 0x32A35Cu;
    // 0x32a35c: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x32a35cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32a360: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a364: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a364u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a368: 0x38630004  xori        $v1, $v1, 0x4
    ctx->pc = 0x32a368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x32a36c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x32a36cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x32a370: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x32a370u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x32a374: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32A374u;
    {
        const bool branch_taken_0x32a374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a374) {
            ctx->pc = 0x32A3B0u;
            return;
        }
    }
    ctx->pc = 0x32A37Cu;
}
