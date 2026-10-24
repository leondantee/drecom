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

// Function: entry_002e10a4
// Address: 0x2e10a4 - 0x2e1114
void entry_002e10a4_0x2e10a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e10a4_0x2e10a4");
#endif

    ctx->pc = 0x2e10a4u;

    // 0x2e10a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10a8: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x2e10a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x2e10ac: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x2e10acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10b0: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x2e10b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x2e10b4: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e10b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e10b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10bc: 0x2861001f  slti        $at, $v1, 0x1F
    ctx->pc = 0x2e10bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2e10c0: 0x1420002c  bnez        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x2E10C0u;
    {
        const bool branch_taken_0x2e10c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10c0) {
            ctx->pc = 0x2E1174u;
            return;
        }
    }
    ctx->pc = 0x2E10C8u;
    // 0x2e10c8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10cc: 0x84641278  lh          $a0, 0x1278($v1)
    ctx->pc = 0x2e10ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e10d0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x2e10d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2e10d4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10d8: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x2e10d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x2e10dc: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x2E10DCu;
    {
        const bool branch_taken_0x2e10dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10dc) {
            ctx->pc = 0x2E1144u;
            return;
        }
    }
    ctx->pc = 0x2E10E4u;
    // 0x2e10e4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e10e8: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x2e10e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2e10ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2e10ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2e10f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2e10f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2e10f4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x2e10f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x2e10f8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E10F8u;
    {
        const bool branch_taken_0x2e10f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e10f8) {
            ctx->pc = 0x2E1114u;
            return;
        }
    }
    ctx->pc = 0x2E1100u;
    // 0x2e1100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1104: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e1104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e1108: 0xa464127a  sh          $a0, 0x127A($v1)
    ctx->pc = 0x2e1108u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e110c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E110Cu;
    {
        const bool branch_taken_0x2e110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e110c) {
            ctx->pc = 0x2E119Cu;
            return;
        }
    }
    ctx->pc = 0x2E1114u;
}
