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

// Function: entry_0015bda8
// Address: 0x15bda8 - 0x15be10
void entry_0015bda8_0x15bda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bda8_0x15bda8");
#endif

    switch (ctx->pc) {
        case 0x15bdc8u: goto label_15bdc8;
        case 0x15bddcu: goto label_15bddc;
        default: break;
    }

    ctx->pc = 0x15bda8u;

    // 0x15bda8: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bdac: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x15bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bdb0: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x15bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15bdb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15bdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15bdb8: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x15bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15bdbc: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x15bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15bdc0: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15BDC0u;
    SET_GPR_U32(ctx, 31, 0x15BDC8u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15BDC0u, 0x15BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDC8u;
label_15bdc8:
    // 0x15bdc8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15bdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15bdcc: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x15bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15bdd0: 0xc7ad00c0  lwc1        $f13, 0xC0($sp)
    ctx->pc = 0x15bdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15bdd4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x15BDD4u;
    SET_GPR_U32(ctx, 31, 0x15BDDCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x15BDD4u, 0x15BDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDDCu;
label_15bddc:
    // 0x15bddc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15bddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15bde0: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x15bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15bde4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15bde4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bde8: 0x0  nop
    ctx->pc = 0x15bde8u;
    // NOP
    // 0x15bdec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15bdecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15bdf0: 0x0  nop
    ctx->pc = 0x15bdf0u;
    // NOP
    // 0x15bdf4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x15BDF4u;
    {
        const bool branch_taken_0x15bdf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15bdf4) {
            ctx->pc = 0x15BE10u;
            return;
        }
    }
    ctx->pc = 0x15BDFCu;
    // 0x15bdfc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x15be00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15be00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15be04: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x15be04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15be08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15be08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15be0c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x15be0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->pc = 0x15be10u;
}
