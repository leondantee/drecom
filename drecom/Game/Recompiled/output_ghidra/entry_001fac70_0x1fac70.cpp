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

// Function: entry_001fac70
// Address: 0x1fac70 - 0x1faca0
void entry_001fac70_0x1fac70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fac70_0x1fac70");
#endif

    switch (ctx->pc) {
        case 0x1fac80u: goto label_1fac80;
        default: break;
    }

    ctx->pc = 0x1fac70u;

    // 0x1fac70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1fac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac74: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1fac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fac78: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FAC78u;
    SET_GPR_U32(ctx, 31, 0x1FAC80u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FAC80u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FAC80u) { return; }
    ctx->pc = 0x1FAC80u;
label_1fac80:
    // 0x1fac80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fac84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fac84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fac88: 0x0  nop
    ctx->pc = 0x1fac88u;
    // NOP
    // 0x1fac8c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1fac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1fac90: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fac90u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fac94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fac94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fac98: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1FAC98u;
    {
        const bool branch_taken_0x1fac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fac98) {
            ctx->pc = 0x1FAE10u;
            return;
        }
    }
    ctx->pc = 0x1FACA0u;
}
