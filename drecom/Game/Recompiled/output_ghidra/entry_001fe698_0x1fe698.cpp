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

// Function: entry_001fe698
// Address: 0x1fe698 - 0x1fe6c4
void entry_001fe698_0x1fe698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe698_0x1fe698");
#endif

    ctx->pc = 0x1fe698u;

    // 0x1fe698: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1fe698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe69c: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x1fe69cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x1fe6a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fe6a4: 0xa0830346  sb          $v1, 0x346($a0)
    ctx->pc = 0x1fe6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe6a8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe6ac: 0x90a40345  lbu         $a0, 0x345($a1)
    ctx->pc = 0x1fe6acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 837)));
    // 0x1fe6b0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fe6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fe6b4: 0xa0a30345  sb          $v1, 0x345($a1)
    ctx->pc = 0x1fe6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fe6b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fe6b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fe6bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FE6BCu;
    {
        const bool branch_taken_0x1fe6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6bc) {
            ctx->pc = 0x1FE700u;
            return;
        }
    }
    ctx->pc = 0x1FE6C4u;
}
