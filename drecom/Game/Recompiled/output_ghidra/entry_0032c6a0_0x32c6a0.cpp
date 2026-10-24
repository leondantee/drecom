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

// Function: entry_0032c6a0
// Address: 0x32c6a0 - 0x32c6d0
void entry_0032c6a0_0x32c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032c6a0_0x32c6a0");
#endif

    switch (ctx->pc) {
        case 0x32c6ccu: goto label_32c6cc;
        default: break;
    }

    ctx->pc = 0x32c6a0u;

    // 0x32c6a0: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x32c6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x32c6a4: 0x16a2000a  bne         $s5, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32C6A4u;
    {
        const bool branch_taken_0x32c6a4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x32c6a4) {
            ctx->pc = 0x32C6D0u;
            return;
        }
    }
    ctx->pc = 0x32C6ACu;
    // 0x32c6ac: 0x8fa6012c  lw          $a2, 0x12C($sp)
    ctx->pc = 0x32c6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x32c6b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32c6b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32c6b4: 0x0  nop
    ctx->pc = 0x32c6b4u;
    // NOP
    // 0x32c6b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32c6b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32c6bc: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x32c6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c6c0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32c6c0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32c6c4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32C6C4u;
    SET_GPR_U32(ctx, 31, 0x32C6CCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32C6C4u, 0x32C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C6CCu;
label_32c6cc:
    // 0x32c6cc: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x32c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
    ctx->pc = 0x32c6d0u;
}
