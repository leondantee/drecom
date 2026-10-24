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

// Function: entry_00205780
// Address: 0x205780 - 0x2057cc
void entry_00205780_0x205780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205780_0x205780");
#endif

    ctx->pc = 0x205780u;

    // 0x205780: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205784: 0x8c831370  lw          $v1, 0x1370($a0)
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4976)));
    // 0x205788: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20578c: 0xac831370  sw          $v1, 0x1370($a0)
    ctx->pc = 0x20578cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4976), GPR_U32(ctx, 3));
    // 0x205790: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205794: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x205794u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x205798: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x205798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20579c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x20579cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2057a0: 0x286101f4  slti        $at, $v1, 0x1F4
    ctx->pc = 0x2057a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)500) ? 1 : 0);
    // 0x2057a4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2057A4u;
    {
        const bool branch_taken_0x2057a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057a4) {
            ctx->pc = 0x2057CCu;
            return;
        }
    }
    ctx->pc = 0x2057ACu;
    // 0x2057ac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2057b0: 0x8c631370  lw          $v1, 0x1370($v1)
    ctx->pc = 0x2057b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4976)));
    // 0x2057b4: 0x2c611519  sltiu       $at, $v1, 0x1519
    ctx->pc = 0x2057b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5401) ? 1 : 0);
    // 0x2057b8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2057B8u;
    {
        const bool branch_taken_0x2057b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2057b8) {
            ctx->pc = 0x2057CCu;
            return;
        }
    }
    ctx->pc = 0x2057C0u;
    // 0x2057c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2057c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2057c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2057c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2057c8: 0xac641360  sw          $a0, 0x1360($v1)
    ctx->pc = 0x2057c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4960), GPR_U32(ctx, 4));
    ctx->pc = 0x2057ccu;
}
