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

// Function: entry_003694e0
// Address: 0x3694e0 - 0x369564
void entry_003694e0_0x3694e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003694e0_0x3694e0");
#endif

    switch (ctx->pc) {
        case 0x369508u: goto label_369508;
        case 0x369518u: goto label_369518;
        case 0x369530u: goto label_369530;
        default: break;
    }

    ctx->pc = 0x3694e0u;

    // 0x3694e0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x3694e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x3694e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3694e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x3694e8: 0xa0430010  sb          $v1, 0x10($v0)
    ctx->pc = 0x3694e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x3694ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3694ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3694f0: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x3694f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x3694f4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3694f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3694f8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3694f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3694fc: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x3694fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369500: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x369500u;
    SET_GPR_U32(ctx, 31, 0x369508u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x369500u, 0x369508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369508u;
label_369508:
    // 0x369508: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x369508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36950c: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x36950cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369510: 0xc0455e6  jal         func_115798
    ctx->pc = 0x369510u;
    SET_GPR_U32(ctx, 31, 0x369518u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x369510u, 0x369518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369518u;
label_369518:
    // 0x369518: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x36951c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x36951cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x369520: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x369520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x369524: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x369524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x369528: 0xc058f20  jal         func_163C80
    ctx->pc = 0x369528u;
    SET_GPR_U32(ctx, 31, 0x369530u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x369528u, 0x369530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369530u;
label_369530:
    // 0x369530: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x369534: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x369534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369538: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36953c: 0x0  nop
    ctx->pc = 0x36953cu;
    // NOP
    // 0x369540: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x369540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369544: 0x0  nop
    ctx->pc = 0x369544u;
    // NOP
    // 0x369548: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x369548u;
    {
        const bool branch_taken_0x369548 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369548) {
            ctx->pc = 0x369564u;
            return;
        }
    }
    ctx->pc = 0x369550u;
    // 0x369550: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x369550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x369554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x369554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369558: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x369558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36955c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36955cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x369560: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x369560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x369564u;
}
