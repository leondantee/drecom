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

// Function: entry_0020fd40
// Address: 0x20fd40 - 0x20fd78
void entry_0020fd40_0x20fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fd40_0x20fd40");
#endif

    ctx->pc = 0x20fd40u;

    // 0x20fd40: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd44: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x20fd44u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
    // 0x20fd48: 0xa2c3c  dsll32      $a1, $t2, 16
    ctx->pc = 0x20fd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) << (32 + 16));
    // 0x20fd4c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x20fd4cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x20fd50: 0x28a3020b  slti        $v1, $a1, 0x20B
    ctx->pc = 0x20fd50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)523) ? 1 : 0);
    // 0x20fd54: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FD54u;
    {
        const bool branch_taken_0x20fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd54) {
            ctx->pc = 0x20FD78u;
            return;
        }
    }
    ctx->pc = 0x20FD5Cu;
    // 0x20fd5c: 0x8fa40528  lw          $a0, 0x528($sp)
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd60: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x20fd60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x20fd64: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x20fd64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fd68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x20fd68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x20fd6c: 0x28810210  slti        $at, $a0, 0x210
    ctx->pc = 0x20fd6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)528) ? 1 : 0);
    // 0x20fd70: 0x14200039  bnez        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x20FD70u;
    {
        const bool branch_taken_0x20fd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd70) {
            ctx->pc = 0x20FE58u;
            return;
        }
    }
    ctx->pc = 0x20FD78u;
}
