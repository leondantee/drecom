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

// Function: entry_001feb5c
// Address: 0x1feb5c - 0x1feb8c
void entry_001feb5c_0x1feb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feb5c_0x1feb5c");
#endif

    switch (ctx->pc) {
        case 0x1feb6cu: goto label_1feb6c;
        default: break;
    }

    ctx->pc = 0x1feb5cu;

    // 0x1feb5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1feb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1feb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb64: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FEB64u;
    SET_GPR_U32(ctx, 31, 0x1FEB6Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FEB6Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FEB6Cu) { return; }
    ctx->pc = 0x1FEB6Cu;
label_1feb6c:
    // 0x1feb6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1feb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1feb70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1feb70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb74: 0x0  nop
    ctx->pc = 0x1feb74u;
    // NOP
    // 0x1feb78: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1feb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1feb7c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1feb7cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1feb80: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1feb80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feb84: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1FEB84u;
    {
        const bool branch_taken_0x1feb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb84) {
            ctx->pc = 0x1FED00u;
            return;
        }
    }
    ctx->pc = 0x1FEB8Cu;
}
