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

// Function: entry_0034e688
// Address: 0x34e688 - 0x34e6b0
void entry_0034e688_0x34e688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e688_0x34e688");
#endif

    ctx->pc = 0x34e688u;

    // 0x34e688: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e68c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e690: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34e690u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34e694: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x34e694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x34e698: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e69c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x34e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34e6a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x34e6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x34e6a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x34E6A4u;
    {
        const bool branch_taken_0x34e6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34e6a4) {
            ctx->pc = 0x34E6B0u;
            return;
        }
    }
    ctx->pc = 0x34E6ACu;
    // 0x34e6ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x34e6acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x34e6b0u;
}
