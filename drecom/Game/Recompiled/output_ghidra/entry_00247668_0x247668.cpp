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

// Function: entry_00247668
// Address: 0x247668 - 0x24773c
void entry_00247668_0x247668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247668_0x247668");
#endif

    switch (ctx->pc) {
        case 0x247694u: goto label_247694;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476d4u: goto label_2476d4;
        default: break;
    }

    ctx->pc = 0x247668u;

    // 0x247668: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24766c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x24766cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247674: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247678: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x247678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x24767c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x24767cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x247680: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x247680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x247684: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x247684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x247688: 0xc46d0038  lwc1        $f13, 0x38($v1)
    ctx->pc = 0x247688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24768c: 0xc05c848  jal         func_172120
    ctx->pc = 0x24768Cu;
    SET_GPR_U32(ctx, 31, 0x247694u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x24768Cu, 0x247694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247694u;
label_247694:
    // 0x247694: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x247694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x247698: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24769c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x24769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2476a0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2476a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2476a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2476a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2476a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2476A8u;
    SET_GPR_U32(ctx, 31, 0x2476B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2476A8u, 0x2476B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476B0u;
label_2476b0:
    // 0x2476b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2476b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2476b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2476b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476bc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2476bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2476c0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2476C0u;
    SET_GPR_U32(ctx, 31, 0x2476C8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2476C0u, 0x2476C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476C8u;
label_2476c8:
    // 0x2476c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2476c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476cc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2476CCu;
    SET_GPR_U32(ctx, 31, 0x2476D4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2476CCu, 0x2476D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2476D4u;
label_2476d4:
    // 0x2476d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476d8: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2476d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2476dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2476dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2476e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2476e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2476e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2476e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2476e8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2476E8u;
    {
        const bool branch_taken_0x2476e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2476e8) {
            ctx->pc = 0x247754u;
            return;
        }
    }
    ctx->pc = 0x2476F0u;
    // 0x2476f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2476f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2476f4: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2476f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2476f8: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2476f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2476fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2476fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247700: 0x0  nop
    ctx->pc = 0x247700u;
    // NOP
    // 0x247704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247708: 0x0  nop
    ctx->pc = 0x247708u;
    // NOP
    // 0x24770c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x24770Cu;
    {
        const bool branch_taken_0x24770c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24770c) {
            ctx->pc = 0x24773Cu;
            return;
        }
    }
    ctx->pc = 0x247714u;
    // 0x247714: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x247714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
    // 0x247718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24771c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x24771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247720: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247724: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x247724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x247728: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x24772c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24772cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x247730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247734: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x247734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x247738: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x247738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x24773cu;
}
