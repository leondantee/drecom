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

// Function: entry_0034815c
// Address: 0x34815c - 0x348194
void entry_0034815c_0x34815c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034815c_0x34815c");
#endif

    ctx->pc = 0x34815cu;

    // 0x34815c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34815cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348160: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x348160u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x348164: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x348164u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x348168: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348168u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34816c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x348170: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x348170u;
    {
        const bool branch_taken_0x348170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x348170) {
            ctx->pc = 0x348194u;
            return;
        }
    }
    ctx->pc = 0x348178u;
    // 0x348178: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34817c: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x34817cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x348180: 0x24700960  addiu       $s0, $v1, 0x960
    ctx->pc = 0x348180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 2400));
    // 0x348184: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x348184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x348188: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x348188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34818c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x34818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x348190: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x348190u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x348194u;
}
