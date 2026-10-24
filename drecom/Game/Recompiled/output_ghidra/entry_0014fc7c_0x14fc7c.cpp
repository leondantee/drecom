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

// Function: entry_0014fc7c
// Address: 0x14fc7c - 0x14fce8
void entry_0014fc7c_0x14fc7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fc7c_0x14fc7c");
#endif

    switch (ctx->pc) {
        case 0x14fcacu: goto label_14fcac;
        default: break;
    }

    ctx->pc = 0x14fc7cu;

    // 0x14fc7c: 0x26230009  addiu       $v1, $s1, 0x9
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x14fc80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc84: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fc88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fc8c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fc90: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x14fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x14fc94: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x14fc98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14fc98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fc9c: 0xc64c00d4  lwc1        $f12, 0xD4($s2)
    ctx->pc = 0x14fc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14fca0: 0xc64d137c  lwc1        $f13, 0x137C($s2)
    ctx->pc = 0x14fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14fca4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x14FCA4u;
    SET_GPR_U32(ctx, 31, 0x14FCACu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x14FCA4u, 0x14FCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCACu;
label_14fcac:
    // 0x14fcac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fcacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14fcb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14fcb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fcb4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x14fcb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14fcb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14fcbc: 0x0  nop
    ctx->pc = 0x14fcbcu;
    // NOP
    // 0x14fcc0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x14FCC0u;
    {
        const bool branch_taken_0x14fcc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14fcc0) {
            ctx->pc = 0x14FCE8u;
            return;
        }
    }
    ctx->pc = 0x14FCC8u;
    // 0x14fcc8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x14fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
    // 0x14fccc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14fcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x14fcd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14fcd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fcd4: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14fcd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14fcdc: 0xe600010c  swc1        $f0, 0x10C($s0)
    ctx->pc = 0x14fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 268), bits); }
    // 0x14fce0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x14FCE0u;
    {
        const bool branch_taken_0x14fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fce0) {
            ctx->pc = 0x14FE28u;
            return;
        }
    }
    ctx->pc = 0x14FCE8u;
}
