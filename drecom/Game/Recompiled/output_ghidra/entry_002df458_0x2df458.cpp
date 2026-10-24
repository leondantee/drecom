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

// Function: entry_002df458
// Address: 0x2df458 - 0x2df498
void entry_002df458_0x2df458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002df458_0x2df458");
#endif

    ctx->pc = 0x2df458u;

    // 0x2df458: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2df458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df45c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2df460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2df460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2df464: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x2df464u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x2df468: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2df468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df46c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2df470: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2df470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2df474: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2df474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2df478: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DF478u;
    {
        const bool branch_taken_0x2df478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df478) {
            ctx->pc = 0x2DF498u;
            return;
        }
    }
    ctx->pc = 0x2DF480u;
    // 0x2df480: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2df484: 0x8c8311a0  lw          $v1, 0x11A0($a0)
    ctx->pc = 0x2df484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4512)));
    // 0x2df488: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2df488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2df48c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2df48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2df490: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2df490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2df494: 0xac8211a0  sw          $v0, 0x11A0($a0)
    ctx->pc = 0x2df494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4512), GPR_U32(ctx, 2));
    ctx->pc = 0x2df498u;
}
