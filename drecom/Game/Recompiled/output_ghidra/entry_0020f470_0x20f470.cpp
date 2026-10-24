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

// Function: entry_0020f470
// Address: 0x20f470 - 0x20f49c
void entry_0020f470_0x20f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f470_0x20f470");
#endif

    ctx->pc = 0x20f470u;

    // 0x20f470: 0x8fab0528  lw          $t3, 0x528($sp)
    ctx->pc = 0x20f470u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f474: 0x85631278  lh          $v1, 0x1278($t3)
    ctx->pc = 0x20f474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4728)));
    // 0x20f478: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x20f478u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20f47c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x20f47cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x20f480: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x20f480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x20f484: 0x16450005  bne         $s2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F484u;
    {
        const bool branch_taken_0x20f484 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x20f484) {
            ctx->pc = 0x20F49Cu;
            return;
        }
    }
    ctx->pc = 0x20F48Cu;
    // 0x20f48c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20f48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20f490: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x20f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20f494: 0x34720002  ori         $s2, $v1, 0x2
    ctx->pc = 0x20f494u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x20f498: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x20f498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x20f49cu;
}
