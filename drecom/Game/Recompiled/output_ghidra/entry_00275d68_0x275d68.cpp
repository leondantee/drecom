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

// Function: entry_00275d68
// Address: 0x275d68 - 0x275dd8
void entry_00275d68_0x275d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275d68_0x275d68");
#endif

    switch (ctx->pc) {
        case 0x275d78u: goto label_275d78;
        default: break;
    }

    ctx->pc = 0x275d68u;

    // 0x275d68: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x275d68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x275d6c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x275d6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x275d70: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x275D70u;
    SET_GPR_U32(ctx, 31, 0x275D78u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x275D70u, 0x275D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D78u;
label_275d78:
    // 0x275d78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x275d78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x275d7c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x275d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x275d80: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x275d84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x275d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x275d88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x275d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x275d8c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x275d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x275d90: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x275d94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x275d98: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x275d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275d9c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x275d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x275da0: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x275da0u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275da4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x275da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x275da8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x275da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275dac: 0x0  nop
    ctx->pc = 0x275dacu;
    // NOP
    // 0x275db0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275db4: 0x0  nop
    ctx->pc = 0x275db4u;
    // NOP
    // 0x275db8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x275DB8u;
    {
        const bool branch_taken_0x275db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275db8) {
            ctx->pc = 0x275DD8u;
            return;
        }
    }
    ctx->pc = 0x275DC0u;
    // 0x275dc0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x275dc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x275dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x275dc8: 0x0  nop
    ctx->pc = 0x275dc8u;
    // NOP
    // 0x275dcc: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x275dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x275dd0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275DD0u;
    {
        const bool branch_taken_0x275dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275dd0) {
            ctx->pc = 0x275DE8u;
            return;
        }
    }
    ctx->pc = 0x275DD8u;
}
