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

// Function: entry_0027c608
// Address: 0x27c608 - 0x27c630
void entry_0027c608_0x27c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c608_0x27c608");
#endif

    switch (ctx->pc) {
        case 0x27c62cu: goto label_27c62c;
        default: break;
    }

    ctx->pc = 0x27c608u;

    // 0x27c608: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x27c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c60c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x27c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x27c610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c614: 0x0  nop
    ctx->pc = 0x27c614u;
    // NOP
    // 0x27c618: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27c618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27c61c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x27c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x27c620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27c620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c624: 0xc084964  jal         func_212590
    ctx->pc = 0x27C624u;
    SET_GPR_U32(ctx, 31, 0x27C62Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27C624u, 0x27C62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C62Cu;
label_27c62c:
    // 0x27c62c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27c62cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x27c630u;
}
