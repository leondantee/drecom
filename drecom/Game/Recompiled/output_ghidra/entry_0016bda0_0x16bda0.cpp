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

// Function: entry_0016bda0
// Address: 0x16bda0 - 0x16bdd8
void entry_0016bda0_0x16bda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bda0_0x16bda0");
#endif

    switch (ctx->pc) {
        case 0x16bdb4u: goto label_16bdb4;
        default: break;
    }

    ctx->pc = 0x16bda0u;

    // 0x16bda0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x16bda0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x16bda4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x16bda4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bda8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bdac: 0xc05b0f0  jal         func_16C3C0
    ctx->pc = 0x16BDACu;
    SET_GPR_U32(ctx, 31, 0x16BDB4u);
    ctx->pc = 0x16C3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C3C0u, 0x16BDACu, 0x16BDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BDB4u;
label_16bdb4:
    // 0x16bdb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BDB4u;
    {
        const bool branch_taken_0x16bdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdb4) {
            ctx->pc = 0x16BDD8u;
            return;
        }
    }
    ctx->pc = 0x16BDBCu;
    // 0x16bdbc: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x16bdbcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x16bdc0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x16bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16bdc4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x16bdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bdc8: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x16bdc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x16bdcc: 0xc420ab00  lwc1        $f0, -0x5500($at)
    ctx->pc = 0x16bdccu;
    { uint32_t bits = FAST_READ32(0x47AB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bdd0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x16bdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16bdd4: 0x0  nop
    ctx->pc = 0x16bdd4u;
    // NOP
    ctx->pc = 0x16bdd8u;
}
