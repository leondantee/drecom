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

// Function: entry_00320c80
// Address: 0x320c80 - 0x320cac
void entry_00320c80_0x320c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320c80_0x320c80");
#endif

    ctx->pc = 0x320c80u;

    // 0x320c80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c84: 0x90a30346  lbu         $v1, 0x346($a1)
    ctx->pc = 0x320c84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x320c88: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c8c: 0xa0a40346  sb          $a0, 0x346($a1)
    ctx->pc = 0x320c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 4));
    // 0x320c90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320c94: 0x90a30345  lbu         $v1, 0x345($a1)
    ctx->pc = 0x320c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x320c98: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320c9c: 0xa0b00345  sb          $s0, 0x345($a1)
    ctx->pc = 0x320c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 16));
    // 0x320ca0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320ca0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320ca4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x320CA4u;
    {
        const bool branch_taken_0x320ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320ca4) {
            ctx->pc = 0x320CE8u;
            return;
        }
    }
    ctx->pc = 0x320CACu;
}
