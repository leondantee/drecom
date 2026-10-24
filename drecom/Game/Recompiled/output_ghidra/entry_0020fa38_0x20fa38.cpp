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

// Function: entry_0020fa38
// Address: 0x20fa38 - 0x20fa70
void entry_0020fa38_0x20fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fa38_0x20fa38");
#endif

    ctx->pc = 0x20fa38u;

    // 0x20fa38: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x20fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa3c: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x20fa3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x20fa40: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fa40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fa44: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fa44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fa48: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x20fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x20fa4c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FA4Cu;
    {
        const bool branch_taken_0x20fa4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x20fa4c) {
            ctx->pc = 0x20FA70u;
            return;
        }
    }
    ctx->pc = 0x20FA54u;
    // 0x20fa54: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fa58: 0x84851278  lh          $a1, 0x1278($a0)
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20fa5c: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x20fa5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x20fa60: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x20fa60u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x20fa64: 0x240302c1  addiu       $v1, $zero, 0x2C1
    ctx->pc = 0x20fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 705));
    // 0x20fa68: 0x14c30037  bne         $a2, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x20FA68u;
    {
        const bool branch_taken_0x20fa68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x20fa68) {
            ctx->pc = 0x20FB48u;
            return;
        }
    }
    ctx->pc = 0x20FA70u;
}
