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

// Function: entry_0020fd08
// Address: 0x20fd08 - 0x20fd40
void entry_0020fd08_0x20fd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020fd08_0x20fd08");
#endif

    ctx->pc = 0x20fd08u;

    // 0x20fd08: 0x8fa50528  lw          $a1, 0x528($sp)
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd0c: 0x84a31278  lh          $v1, 0x1278($a1)
    ctx->pc = 0x20fd0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x20fd10: 0x35c3c  dsll32      $t3, $v1, 16
    ctx->pc = 0x20fd10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x20fd14: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x20fd14u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x20fd18: 0x296300f5  slti        $v1, $t3, 0xF5
    ctx->pc = 0x20fd18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)245) ? 1 : 0);
    // 0x20fd1c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FD1Cu;
    {
        const bool branch_taken_0x20fd1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd1c) {
            ctx->pc = 0x20FD40u;
            return;
        }
    }
    ctx->pc = 0x20FD24u;
    // 0x20fd24: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x20fd24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20fd28: 0x852a1278  lh          $t2, 0x1278($t1)
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4728)));
    // 0x20fd2c: 0xa443c  dsll32      $t0, $t2, 16
    ctx->pc = 0x20fd2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << (32 + 16));
    // 0x20fd30: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x20fd30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x20fd34: 0x290100f7  slti        $at, $t0, 0xF7
    ctx->pc = 0x20fd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)247) ? 1 : 0);
    // 0x20fd38: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x20FD38u;
    {
        const bool branch_taken_0x20fd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fd38) {
            ctx->pc = 0x20FE58u;
            return;
        }
    }
    ctx->pc = 0x20FD40u;
}
