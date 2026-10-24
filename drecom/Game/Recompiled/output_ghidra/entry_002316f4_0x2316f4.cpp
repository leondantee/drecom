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

// Function: entry_002316f4
// Address: 0x2316f4 - 0x231764
void entry_002316f4_0x2316f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002316f4_0x2316f4");
#endif

    switch (ctx->pc) {
        case 0x231708u: goto label_231708;
        default: break;
    }

    ctx->pc = 0x2316f4u;

    // 0x2316f4: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2316f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2316f8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2316f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2316fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2316fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x231700: 0xc067594  jal         func_19D650
    ctx->pc = 0x231700u;
    SET_GPR_U32(ctx, 31, 0x231708u);
    ctx->pc = 0x19D650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D650u, 0x231700u, 0x231708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231708u;
label_231708:
    // 0x231708: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x231708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x23170c: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x23170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231710: 0x3c0544bb  lui         $a1, 0x44BB
    ctx->pc = 0x231710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17595 << 16));
    // 0x231714: 0x34a48000  ori         $a0, $a1, 0x8000
    ctx->pc = 0x231714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x231718: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x231718u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23171c: 0x0  nop
    ctx->pc = 0x23171cu;
    // NOP
    // 0x231720: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231724: 0x0  nop
    ctx->pc = 0x231724u;
    // NOP
    // 0x231728: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x231728u;
    {
        const bool branch_taken_0x231728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x231728) {
            ctx->pc = 0x231764u;
            return;
        }
    }
    ctx->pc = 0x231730u;
    // 0x231730: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x231730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231734: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x231734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x231738: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x231738u;
    {
        const bool branch_taken_0x231738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231738) {
            ctx->pc = 0x231764u;
            return;
        }
    }
    ctx->pc = 0x231740u;
    // 0x231740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231744: 0x0  nop
    ctx->pc = 0x231744u;
    // NOP
    // 0x231748: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x231748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x23174c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23174cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231750: 0x0  nop
    ctx->pc = 0x231750u;
    // NOP
    // 0x231754: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x231754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x231758: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x231758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23175c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x231760: 0xa482002c  sh          $v0, 0x2C($a0)
    ctx->pc = 0x231760u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x231764u;
}
