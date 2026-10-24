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

// Function: entry_00320654
// Address: 0x320654 - 0x320684
void entry_00320654_0x320654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320654_0x320654");
#endif

    switch (ctx->pc) {
        case 0x320664u: goto label_320664;
        default: break;
    }

    ctx->pc = 0x320654u;

    // 0x320654: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x320654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320658: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x320658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x32065c: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x32065Cu;
    SET_GPR_U32(ctx, 31, 0x320664u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x320664u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x320664u) { return; }
    ctx->pc = 0x320664u;
label_320664:
    // 0x320664: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x320664u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x320668: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x320668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x32066c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32066cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320670: 0x0  nop
    ctx->pc = 0x320670u;
    // NOP
    // 0x320674: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x320674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x320678: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x320678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32067c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x32067Cu;
    {
        const bool branch_taken_0x32067c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32067c) {
            ctx->pc = 0x320748u;
            return;
        }
    }
    ctx->pc = 0x320684u;
}
