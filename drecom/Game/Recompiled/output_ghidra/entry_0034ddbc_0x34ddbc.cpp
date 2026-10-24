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

// Function: entry_0034ddbc
// Address: 0x34ddbc - 0x34df30
void entry_0034ddbc_0x34ddbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ddbc_0x34ddbc");
#endif

    switch (ctx->pc) {
        case 0x34de0cu: goto label_34de0c;
        case 0x34de2cu: goto label_34de2c;
        case 0x34de58u: goto label_34de58;
        case 0x34de74u: goto label_34de74;
        case 0x34ded0u: goto label_34ded0;
        case 0x34dee8u: goto label_34dee8;
        case 0x34df00u: goto label_34df00;
        default: break;
    }

    ctx->pc = 0x34ddbcu;

    // 0x34ddbc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddc0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34ddc4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34ddc8: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddcc: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x34ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ddd0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x34ddd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34ddd4: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddd8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34dddc: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x34dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34dde0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x34dde0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34dde4: 0x0  nop
    ctx->pc = 0x34dde4u;
    // NOP
    // 0x34dde8: 0x450101f3  bc1t        . + 4 + (0x1F3 << 2)
    ctx->pc = 0x34DDE8u;
    {
        const bool branch_taken_0x34dde8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34dde8) {
            ctx->pc = 0x34E5B8u;
            return;
        }
    }
    ctx->pc = 0x34DDF0u;
    // 0x34ddf0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x34ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ddf4: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ddf8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34ddf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34ddfc: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de00: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34de00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34de04: 0xc0d58b0  jal         func_3562C0
    ctx->pc = 0x34DE04u;
    SET_GPR_U32(ctx, 31, 0x34DE0Cu);
    ctx->pc = 0x3562C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3562C0u, 0x34DE04u, 0x34DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE0Cu;
label_34de0c:
    // 0x34de0c: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x34de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x34de10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x34de10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34de14: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x34de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x34de18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34de18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34de1c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de20: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34de20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34de24: 0xc0d5874  jal         func_3561D0
    ctx->pc = 0x34DE24u;
    SET_GPR_U32(ctx, 31, 0x34DE2Cu);
    ctx->pc = 0x3561D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3561D0u, 0x34DE24u, 0x34DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE2Cu;
label_34de2c:
    // 0x34de2c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de30: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x34de34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x34de38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34de3c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x34de3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x34de40: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x34de40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x34de44: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x34de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34de48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x34de48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34de4c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x34de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x34de50: 0xc05c848  jal         func_172120
    ctx->pc = 0x34DE50u;
    SET_GPR_U32(ctx, 31, 0x34DE58u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x34DE50u, 0x34DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE58u;
label_34de58:
    // 0x34de58: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x34de58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34de5c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de60: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x34de60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34de64: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x34de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34de68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x34de68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34de6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x34DE6Cu;
    SET_GPR_U32(ctx, 31, 0x34DE74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x34DE6Cu, 0x34DE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DE74u;
label_34de74:
    // 0x34de74: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34de78: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x34de78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x34de7c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x34de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x34de80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34de80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34de84: 0x0  nop
    ctx->pc = 0x34de84u;
    // NOP
    // 0x34de88: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x34de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x34de8c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x34de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x34de90: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34de90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34de94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34de94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34de98: 0x0  nop
    ctx->pc = 0x34de98u;
    // NOP
    // 0x34de9c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x34de9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x34dea0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x34dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x34dea4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x34dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x34dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34deac: 0x0  nop
    ctx->pc = 0x34deacu;
    // NOP
    // 0x34deb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x34deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x34deb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34deb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34deb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34debc: 0x0  nop
    ctx->pc = 0x34debcu;
    // NOP
    // 0x34dec0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x34dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x34dec4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34dec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34dec8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x34DEC8u;
    SET_GPR_U32(ctx, 31, 0x34DED0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x34DED0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DED0u) { return; }
    ctx->pc = 0x34DED0u;
label_34ded0:
    // 0x34ded0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34ded4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34ded8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34ded8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34dedc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x34dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x34dee0: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x34DEE0u;
    SET_GPR_U32(ctx, 31, 0x34DEE8u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x34DEE8u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x34DEE8u) { return; }
    ctx->pc = 0x34DEE8u;
label_34dee8:
    // 0x34dee8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x34dee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34deec: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34deecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34def0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x34def0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34def4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x34def4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x34def8: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x34DEF8u;
    SET_GPR_U32(ctx, 31, 0x34DF00u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x34DEF8u, 0x34DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34DF00u;
label_34df00:
    // 0x34df00: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x34df00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34df04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34df04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34df08: 0x0  nop
    ctx->pc = 0x34df08u;
    // NOP
    // 0x34df0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34df0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34df10: 0x0  nop
    ctx->pc = 0x34df10u;
    // NOP
    // 0x34df14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34DF14u;
    {
        const bool branch_taken_0x34df14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34df14) {
            ctx->pc = 0x34DF30u;
            return;
        }
    }
    ctx->pc = 0x34DF1Cu;
    // 0x34df1c: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x34df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x34df20: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34df20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34df24: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x34df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34df28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34df28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34df2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x34df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->pc = 0x34df30u;
}
