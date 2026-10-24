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

// Function: entry_00360ff0
// Address: 0x360ff0 - 0x361040
void entry_00360ff0_0x360ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360ff0_0x360ff0");
#endif

    ctx->pc = 0x360ff0u;

    // 0x360ff0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x360ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x360ff4: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x360ff4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x360ff8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x360ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x360ffc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x360ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361000: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x361000u;
    {
        const bool branch_taken_0x361000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x361000) {
            ctx->pc = 0x361040u;
            return;
        }
    }
    ctx->pc = 0x361008u;
    // 0x361008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x361008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36100c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361010: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x361010u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x361014: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361018: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x361018u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36101c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361020: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x361020u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x361024: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x361024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361028: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x361028u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36102c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x361030: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x361030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x361034: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x361034u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x361038: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x361038u;
    {
        const bool branch_taken_0x361038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361038) {
            ctx->pc = 0x361094u;
            return;
        }
    }
    ctx->pc = 0x361040u;
}
