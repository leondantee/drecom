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

// Function: entry_00160ae0
// Address: 0x160ae0 - 0x160b44
void entry_00160ae0_0x160ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160ae0_0x160ae0");
#endif

    switch (ctx->pc) {
        case 0x160b10u: goto label_160b10;
        default: break;
    }

    ctx->pc = 0x160ae0u;

    // 0x160ae0: 0xc6011b5c  lwc1        $f1, 0x1B5C($s0)
    ctx->pc = 0x160ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160ae4: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x160ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x160ae8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160aec: 0x0  nop
    ctx->pc = 0x160aecu;
    // NOP
    // 0x160af0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x160af0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160af4: 0x0  nop
    ctx->pc = 0x160af4u;
    // NOP
    // 0x160af8: 0x45010034  bc1t        . + 4 + (0x34 << 2)
    ctx->pc = 0x160AF8u;
    {
        const bool branch_taken_0x160af8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160af8) {
            ctx->pc = 0x160BCCu;
            return;
        }
    }
    ctx->pc = 0x160B00u;
    // 0x160b00: 0xc60c00d4  lwc1        $f12, 0xD4($s0)
    ctx->pc = 0x160b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160b04: 0xc60d1380  lwc1        $f13, 0x1380($s0)
    ctx->pc = 0x160b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160b08: 0xc058f20  jal         func_163C80
    ctx->pc = 0x160B08u;
    SET_GPR_U32(ctx, 31, 0x160B10u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x160B08u, 0x160B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B10u;
label_160b10:
    // 0x160b10: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x160b14: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x160b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160b18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b1c: 0x0  nop
    ctx->pc = 0x160b1cu;
    // NOP
    // 0x160b20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x160b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160b24: 0x0  nop
    ctx->pc = 0x160b24u;
    // NOP
    // 0x160b28: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160B28u;
    {
        const bool branch_taken_0x160b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160b28) {
            ctx->pc = 0x160B44u;
            return;
        }
    }
    ctx->pc = 0x160B30u;
    // 0x160b30: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x160b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x160b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x160b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x160b38: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160b3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x160b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x160b40: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x160b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x160b44u;
}
