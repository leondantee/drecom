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

// Function: entry_00274228
// Address: 0x274228 - 0x274298
void entry_00274228_0x274228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274228_0x274228");
#endif

    switch (ctx->pc) {
        case 0x274238u: goto label_274238;
        default: break;
    }

    ctx->pc = 0x274228u;

    // 0x274228: 0x72802628  paddub      $a0, $s4, $zero
    ctx->pc = 0x274228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x27422c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x27422cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x274230: 0xc096ca4  jal         func_25B290
    ctx->pc = 0x274230u;
    SET_GPR_U32(ctx, 31, 0x274238u);
    ctx->pc = 0x25B290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B290u, 0x274230u, 0x274238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274238u;
label_274238:
    // 0x274238: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x274238u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27423c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x27423cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x274240: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274244: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x274244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x274248: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27424c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27424cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274250: 0x8e8302d0  lw          $v1, 0x2D0($s4)
    ctx->pc = 0x274250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 720)));
    // 0x274254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x274258: 0xc4610030  lwc1        $f1, 0x30($v1)
    ctx->pc = 0x274258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27425c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x27425cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x274260: 0xc420d2c0  lwc1        $f0, -0x2D40($at)
    ctx->pc = 0x274260u;
    { uint32_t bits = FAST_READ32(0x38D2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274264: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274264u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27426c: 0x0  nop
    ctx->pc = 0x27426cu;
    // NOP
    // 0x274270: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x274270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274274: 0x0  nop
    ctx->pc = 0x274274u;
    // NOP
    // 0x274278: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x274278u;
    {
        const bool branch_taken_0x274278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x274278) {
            ctx->pc = 0x274298u;
            return;
        }
    }
    ctx->pc = 0x274280u;
    // 0x274280: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x274280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x274284: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274284u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274288: 0x0  nop
    ctx->pc = 0x274288u;
    // NOP
    // 0x27428c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x27428cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x274290: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274290u;
    {
        const bool branch_taken_0x274290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274290) {
            ctx->pc = 0x2742A8u;
            return;
        }
    }
    ctx->pc = 0x274298u;
}
