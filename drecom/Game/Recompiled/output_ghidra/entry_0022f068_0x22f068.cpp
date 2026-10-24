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

// Function: entry_0022f068
// Address: 0x22f068 - 0x22f150
void entry_0022f068_0x22f068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022f068_0x22f068");
#endif

    switch (ctx->pc) {
        case 0x22f094u: goto label_22f094;
        case 0x22f0b0u: goto label_22f0b0;
        default: break;
    }

    ctx->pc = 0x22f068u;

    // 0x22f068: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x22f06c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22f070: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22f070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x22f074: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f078: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f07c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x22f080: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x22f080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22f084: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22f084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22f088: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22f08c: 0xc05c848  jal         func_172120
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x22F08Cu, 0x22F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22f094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x22f098: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f09c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22f09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0a0: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x22f0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0a4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22f0a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22f0a8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22F0A8u;
    SET_GPR_U32(ctx, 31, 0x22F0B0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22F0A8u, 0x22F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0B0u;
label_22f0b0:
    // 0x22f0b0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0b4: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22f0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22f0b8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22f0c0: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0c4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0c8: 0xc4600120  lwc1        $f0, 0x120($v1)
    ctx->pc = 0x22f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f0d0: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x22f0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x22f0d4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x22f0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0d8: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x22f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22f0dc: 0xc461009c  lwc1        $f1, 0x9C($v1)
    ctx->pc = 0x22f0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f0e0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x22f0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0e4: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x22f0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f0e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22f0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22f0ec: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x22f0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x22f0f0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0f4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f0f8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f0fc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f100: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x22f100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f104: 0xc4400098  lwc1        $f0, 0x98($v0)
    ctx->pc = 0x22f104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22f108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22f10c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22f10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22f110: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22f110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f114: 0x0  nop
    ctx->pc = 0x22f114u;
    // NOP
    // 0x22f118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f11c: 0x0  nop
    ctx->pc = 0x22f11cu;
    // NOP
    // 0x22f120: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x22F120u;
    {
        const bool branch_taken_0x22f120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f120) {
            ctx->pc = 0x22F150u;
            return;
        }
    }
    ctx->pc = 0x22F128u;
    // 0x22f128: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x22f12c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22f130: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x22f134: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x22f134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x22f138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f13c: 0xc4600098  lwc1        $f0, 0x98($v1)
    ctx->pc = 0x22f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f140: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22f140u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f144: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x22f144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x22f148: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22F148u;
    {
        const bool branch_taken_0x22f148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f148) {
            ctx->pc = 0x22F170u;
            return;
        }
    }
    ctx->pc = 0x22F150u;
}
