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

// Function: entry_00291830
// Address: 0x291830 - 0x291860
void entry_00291830_0x291830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291830_0x291830");
#endif

    switch (ctx->pc) {
        case 0x291854u: goto label_291854;
        default: break;
    }

    ctx->pc = 0x291830u;

    // 0x291830: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x291830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x291834: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x291834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x291838: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x291838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x29183c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x29183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x291840: 0x24633280  addiu       $v1, $v1, 0x3280
    ctx->pc = 0x291840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12928));
    // 0x291844: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x291844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291848: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x291848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x29184c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x29184Cu;
    SET_GPR_U32(ctx, 31, 0x291854u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x291854u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x291854u) { return; }
    ctx->pc = 0x291854u;
label_291854:
    // 0x291854: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x291854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x291858: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x291858u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29185c: 0x0  nop
    ctx->pc = 0x29185cu;
    // NOP
    ctx->pc = 0x291860u;
}
