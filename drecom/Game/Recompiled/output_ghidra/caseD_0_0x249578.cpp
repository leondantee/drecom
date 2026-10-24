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

// Function: caseD_0
// Address: 0x249578 - 0x2495a0
void caseD_0_0x249578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x249578");
#endif

    ctx->pc = 0x249578u;

    // 0x249578: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x249578u;
    {
        const bool branch_taken_0x249578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x249578) {
            ctx->pc = 0x2495A0u;
            return;
        }
    }
    ctx->pc = 0x249580u;
    // 0x249580: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x249580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x249584: 0x346400a4  ori         $a0, $v1, 0xA4
    ctx->pc = 0x249584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)164);
    // 0x249588: 0xa6040140  sh          $a0, 0x140($s0)
    ctx->pc = 0x249588u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x24958c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24958cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249590: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x249590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x249594: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249598: 0xc040c00  jal         func_103000
    ctx->pc = 0x249598u;
    SET_GPR_U32(ctx, 31, 0x2495A0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2495A0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2495A0u) { return; }
    ctx->pc = 0x2495A0u;
}
