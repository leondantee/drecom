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

// Function: entry_00193a80
// Address: 0x193a80 - 0x193ac0
void entry_00193a80_0x193a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a80_0x193a80");
#endif

    switch (ctx->pc) {
        case 0x193a8cu: goto label_193a8c;
        default: break;
    }

    ctx->pc = 0x193a80u;

    // 0x193a80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x193a80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x193a84: 0xc0675d0  jal         func_19D740
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x19D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D740u, 0x193A84u, 0x193A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x193a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x193a90: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a94: 0x46160043  div.s       $f1, $f0, $f22
    ctx->pc = 0x193a94u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x193a98: 0xc6c0029c  lwc1        $f0, 0x29C($s6)
    ctx->pc = 0x193a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x193a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x193aa0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x193aa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x193aa4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x193aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193aa8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x193aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x193aac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x193aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x193ab0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x193ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ab4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x193ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x193ab8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x193ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x193abc: 0x0  nop
    ctx->pc = 0x193abcu;
    // NOP
    ctx->pc = 0x193ac0u;
}
