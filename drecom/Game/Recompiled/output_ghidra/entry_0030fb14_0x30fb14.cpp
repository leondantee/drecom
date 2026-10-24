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

// Function: entry_0030fb14
// Address: 0x30fb14 - 0x30fb38
void entry_0030fb14_0x30fb14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030fb14_0x30fb14");
#endif

    ctx->pc = 0x30fb14u;

    // 0x30fb14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30fb18: 0x8c641338  lw          $a0, 0x1338($v1)
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x30fb1c: 0x3c0301fe  lui         $v1, 0x1FE
    ctx->pc = 0x30fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)510 << 16));
    // 0x30fb20: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30fb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x30fb24: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x30FB24u;
    {
        const bool branch_taken_0x30fb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb24) {
            ctx->pc = 0x30FC1Cu;
            return;
        }
    }
    ctx->pc = 0x30FB2Cu;
    // 0x30fb2c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x30fb2cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x30fb30: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x30FB30u;
    {
        const bool branch_taken_0x30fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30fb30) {
            ctx->pc = 0x30FC08u;
            return;
        }
    }
    ctx->pc = 0x30FB38u;
}
