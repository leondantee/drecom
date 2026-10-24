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

// Function: entry_001512a4
// Address: 0x1512a4 - 0x1512c0
void entry_001512a4_0x1512a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001512a4_0x1512a4");
#endif

    ctx->pc = 0x1512a4u;

    // 0x1512a4: 0x1519c0  sll         $v1, $s5, 7
    ctx->pc = 0x1512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1512a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1512b0: 0x24501600  addiu       $s0, $v0, 0x1600
    ctx->pc = 0x1512b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1512b4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1512b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1512b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1512B8u;
    {
        const bool branch_taken_0x1512b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512b8) {
            ctx->pc = 0x151300u;
            return;
        }
    }
    ctx->pc = 0x1512C0u;
}
