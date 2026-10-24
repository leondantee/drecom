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

// Function: entry_001de5a0
// Address: 0x1de5a0 - 0x1de5d0
void entry_001de5a0_0x1de5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de5a0_0x1de5a0");
#endif

    ctx->pc = 0x1de5a0u;

    // 0x1de5a0: 0x87a200fa  lh          $v0, 0xFA($sp)
    ctx->pc = 0x1de5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 250)));
    // 0x1de5a4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1de5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1de5a8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1de5a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1de5ac: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1de5acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1de5b0: 0x13143c  dsll32      $v0, $s3, 16
    ctx->pc = 0x1de5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 16));
    // 0x1de5b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de5b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1de5b8: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE5B8u;
    {
        const bool branch_taken_0x1de5b8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1de5b8) {
            ctx->pc = 0x1DE5D0u;
            return;
        }
    }
    ctx->pc = 0x1DE5C0u;
    // 0x1de5c0: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1de5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1de5c4: 0xa7a200fc  sh          $v0, 0xFC($sp)
    ctx->pc = 0x1de5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 252), (uint16_t)GPR_U32(ctx, 2));
    // 0x1de5c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE5C8u;
    {
        const bool branch_taken_0x1de5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de5c8) {
            ctx->pc = 0x1DE5D8u;
            return;
        }
    }
    ctx->pc = 0x1DE5D0u;
}
