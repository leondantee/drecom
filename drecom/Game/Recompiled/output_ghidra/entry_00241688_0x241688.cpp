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

// Function: entry_00241688
// Address: 0x241688 - 0x2416cc
void entry_00241688_0x241688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00241688_0x241688");
#endif

    ctx->pc = 0x241688u;

    // 0x241688: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x241688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x24168c: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x24168cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x241690: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x241690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x241694: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x241694u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x241698: 0x4600026  bltz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x241698u;
    {
        const bool branch_taken_0x241698 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x241698) {
            ctx->pc = 0x241734u;
            return;
        }
    }
    ctx->pc = 0x2416A0u;
    // 0x2416a0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2416a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2416a4: 0x946311f6  lhu         $v1, 0x11F6($v1)
    ctx->pc = 0x2416a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4598)));
    // 0x2416a8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2416a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2416ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2416acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2416b0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2416B0u;
    {
        const bool branch_taken_0x2416b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2416b0) {
            ctx->pc = 0x241700u;
            return;
        }
    }
    ctx->pc = 0x2416B8u;
    // 0x2416b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2416b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2416bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2416BCu;
    {
        const bool branch_taken_0x2416bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2416bc) {
            ctx->pc = 0x2416CCu;
            return;
        }
    }
    ctx->pc = 0x2416C4u;
    // 0x2416c4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2416C4u;
    {
        const bool branch_taken_0x2416c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416c4) {
            ctx->pc = 0x2416CCu;
            return;
        }
    }
    ctx->pc = 0x2416CCu;
}
