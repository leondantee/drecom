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

// Function: entry_003691ac
// Address: 0x3691ac - 0x36929c
void entry_003691ac_0x3691ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003691ac_0x3691ac");
#endif

    switch (ctx->pc) {
        case 0x3691b8u: goto label_3691b8;
        case 0x3691c4u: goto label_3691c4;
        case 0x3691d4u: goto label_3691d4;
        case 0x3691f0u: goto label_3691f0;
        case 0x36921cu: goto label_36921c;
        case 0x369248u: goto label_369248;
        default: break;
    }

    ctx->pc = 0x3691acu;

    // 0x3691ac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3691acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3691b0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3691B0u;
    SET_GPR_U32(ctx, 31, 0x3691B8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3691B0u, 0x3691B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691B8u;
label_3691b8:
    // 0x3691b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3691b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3691bc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x3691BCu;
    SET_GPR_U32(ctx, 31, 0x3691C4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x3691C4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3691C4u) { return; }
    ctx->pc = 0x3691C4u;
label_3691c4:
    // 0x3691c4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3691c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3691c8: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x3691c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3691cc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x3691CCu;
    SET_GPR_U32(ctx, 31, 0x3691D4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x3691D4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3691D4u) { return; }
    ctx->pc = 0x3691D4u;
label_3691d4:
    // 0x3691d4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x3691d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3691d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3691d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3691dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3691dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3691e0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3691e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3691e4: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x3691e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x3691e8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3691E8u;
    SET_GPR_U32(ctx, 31, 0x3691F0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3691E8u, 0x3691F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3691F0u;
label_3691f0:
    // 0x3691f0: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3691f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3691f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3691f8: 0x0  nop
    ctx->pc = 0x3691f8u;
    // NOP
    // 0x3691fc: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3691fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x369200: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x369200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369204: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x369204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369208: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x369208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36920c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x36920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x369210: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x369210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x369214: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x369214u;
    SET_GPR_U32(ctx, 31, 0x36921Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x369214u, 0x36921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36921Cu;
label_36921c:
    // 0x36921c: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x36921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x369220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369224: 0x0  nop
    ctx->pc = 0x369224u;
    // NOP
    // 0x369228: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x369228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x36922c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x36922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x369230: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x369230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x369234: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x369234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x369238: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x369238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36923c: 0x24478d30  addiu       $a3, $v0, -0x72D0
    ctx->pc = 0x36923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937904));
    // 0x369240: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x369240u;
    SET_GPR_U32(ctx, 31, 0x369248u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x369240u, 0x369248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369248u;
label_369248:
    // 0x369248: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x369248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36924c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36924cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x369250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x369250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369254: 0x0  nop
    ctx->pc = 0x369254u;
    // NOP
    // 0x369258: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36925c: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x36925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369260: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x369260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369264: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369264u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369268: 0x0  nop
    ctx->pc = 0x369268u;
    // NOP
    // 0x36926c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36926cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369270: 0x0  nop
    ctx->pc = 0x369270u;
    // NOP
    // 0x369274: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x369274u;
    {
        const bool branch_taken_0x369274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x369274) {
            ctx->pc = 0x36929Cu;
            return;
        }
    }
    ctx->pc = 0x36927Cu;
    // 0x36927c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36927cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369280: 0x0  nop
    ctx->pc = 0x369280u;
    // NOP
    // 0x369284: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x369284u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x369288: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x369288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36928c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x36928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369290: 0xa0640011  sb          $a0, 0x11($v1)
    ctx->pc = 0x369290u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x369294: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x369294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x369298: 0xa0600012  sb          $zero, 0x12($v1)
    ctx->pc = 0x369298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x36929cu;
}
