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

// Function: entry_003385b0
// Address: 0x3385b0 - 0x3385d4
void entry_003385b0_0x3385b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003385b0_0x3385b0");
#endif

    ctx->pc = 0x3385b0u;

    // 0x3385b0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x3385b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x3385b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3385b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385b8: 0x93a20048  lbu         $v0, 0x48($sp)
    ctx->pc = 0x3385b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3385bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3385bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3385c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3385C0u;
    {
        const bool branch_taken_0x3385c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3385c0) {
            ctx->pc = 0x3385D4u;
            return;
        }
    }
    ctx->pc = 0x3385C8u;
    // 0x3385c8: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x3385c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3385cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3385CCu;
    {
        const bool branch_taken_0x3385cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3385cc) {
            ctx->pc = 0x3385F8u;
            return;
        }
    }
    ctx->pc = 0x3385D4u;
}
