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

// Function: entry_002fc578
// Address: 0x2fc578 - 0x2fc598
void entry_002fc578_0x2fc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002fc578_0x2fc578");
#endif

    ctx->pc = 0x2fc578u;

    // 0x2fc578: 0x868515f0  lh          $a1, 0x15F0($s4)
    ctx->pc = 0x2fc578u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 5616)));
    // 0x2fc57c: 0x51e3c  dsll32      $v1, $a1, 24
    ctx->pc = 0x2fc57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 24));
    // 0x2fc580: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2fc580u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2fc584: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x2fc584u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2fc588: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x2fc588u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
    // 0x2fc58c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2fc58cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2fc590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2FC590u;
    {
        const bool branch_taken_0x2fc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc590) {
            ctx->pc = 0x2FC5E0u;
            return;
        }
    }
    ctx->pc = 0x2FC598u;
}
