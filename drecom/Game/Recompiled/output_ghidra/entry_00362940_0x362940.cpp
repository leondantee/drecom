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

// Function: entry_00362940
// Address: 0x362940 - 0x362990
void entry_00362940_0x362940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00362940_0x362940");
#endif

    ctx->pc = 0x362940u;

    // 0x362940: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362944: 0x944211f6  lhu         $v0, 0x11F6($v0)
    ctx->pc = 0x362944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4598)));
    // 0x362948: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x362948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36294c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362950: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x362950u;
    {
        const bool branch_taken_0x362950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x362950) {
            ctx->pc = 0x362990u;
            return;
        }
    }
    ctx->pc = 0x362958u;
    // 0x362958: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x362958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36295c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362960: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x362960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x362964: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362968: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x362968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36296c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362970: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x362970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x362974: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x362974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362978: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x362978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36297c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x36297cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362980: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x362980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x362984: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x362984u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362988: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x362988u;
    {
        const bool branch_taken_0x362988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362988) {
            ctx->pc = 0x3629E4u;
            return;
        }
    }
    ctx->pc = 0x362990u;
}
