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

// Function: entry_002ce068
// Address: 0x2ce068 - 0x2ce224
void entry_002ce068_0x2ce068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce068_0x2ce068");
#endif

    switch (ctx->pc) {
        case 0x2ce07cu: goto label_2ce07c;
        case 0x2ce0b0u: goto label_2ce0b0;
        case 0x2ce0f0u: goto label_2ce0f0;
        default: break;
    }

    ctx->pc = 0x2ce068u;

    // 0x2ce068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ce068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce06c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ce06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ce070: 0xc44c003c  lwc1        $f12, 0x3C($v0)
    ctx->pc = 0x2ce070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce074: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2CE074u;
    SET_GPR_U32(ctx, 31, 0x2CE07Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2CE074u, 0x2CE07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE07Cu;
label_2ce07c:
    // 0x2ce07c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x2ce07cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ce080: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2ce080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce084: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2ce084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2ce088: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2ce088u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2ce08c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2ce08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2ce090: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2ce090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2ce094: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ce094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ce098: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2ce098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2ce09c: 0x24428030  addiu       $v0, $v0, -0x7FD0
    ctx->pc = 0x2ce09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934576));
    // 0x2ce0a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce0a4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2ce0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ce0a8: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2CE0A8u;
    SET_GPR_U32(ctx, 31, 0x2CE0B0u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2CE0A8u, 0x2CE0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0B0u;
label_2ce0b0:
    // 0x2ce0b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce0b4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce0b8: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce0b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce0bc: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x2ce0bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce0c0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x2ce0c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x2ce0c4: 0x24030808  addiu       $v1, $zero, 0x808
    ctx->pc = 0x2ce0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x2ce0c8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2ce0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2ce0cc: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x2ce0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x2ce0d0: 0x34630109  ori         $v1, $v1, 0x109
    ctx->pc = 0x2ce0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)265);
    // 0x2ce0d4: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2ce0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2ce0d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2ce0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2ce0dc: 0x24651900  addiu       $a1, $v1, 0x1900
    ctx->pc = 0x2ce0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6400));
    // 0x2ce0e0: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x2ce0e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x2ce0e4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ce0e4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ce0e8: 0xc059b14  jal         func_166C50
    ctx->pc = 0x2CE0E8u;
    SET_GPR_U32(ctx, 31, 0x2CE0F0u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x2CE0E8u, 0x2CE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE0F0u;
label_2ce0f0:
    // 0x2ce0f0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce0f4: 0x24718030  addiu       $s1, $v1, -0x7FD0
    ctx->pc = 0x2ce0f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce0f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce0fc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce100: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce100u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce104: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce108: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce108u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce10c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce110: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce114: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce11c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce120: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce124: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce128: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce12c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2ce12cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce130: 0x0  nop
    ctx->pc = 0x2ce130u;
    // NOP
    // 0x2ce134: 0x450100d1  bc1t        . + 4 + (0xD1 << 2)
    ctx->pc = 0x2CE134u;
    {
        const bool branch_taken_0x2ce134 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce134) {
            ctx->pc = 0x2CE47Cu;
            return;
        }
    }
    ctx->pc = 0x2CE13Cu;
    // 0x2ce13c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce140: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce144: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce148: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce14c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce14cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce150: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce154: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce158: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce160: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce164: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce168: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce16c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce170: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce174: 0x0  nop
    ctx->pc = 0x2ce174u;
    // NOP
    // 0x2ce178: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2CE178u;
    {
        const bool branch_taken_0x2ce178 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce178) {
            ctx->pc = 0x2CE224u;
            return;
        }
    }
    ctx->pc = 0x2CE180u;
    // 0x2ce180: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce184: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce188: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2ce188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce18c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2ce18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2ce190: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ce190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ce194: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce198: 0x0  nop
    ctx->pc = 0x2ce198u;
    // NOP
    // 0x2ce19c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2ce19cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2ce1a0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2ce1a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1ac: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce1b0: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce1b4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce1b8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce1bc: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce1c0: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce1c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce1cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1d0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1d4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce1d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2ce1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce1dc: 0x0  nop
    ctx->pc = 0x2ce1dcu;
    // NOP
    // 0x2ce1e0: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x2CE1E0u;
    {
        const bool branch_taken_0x2ce1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce1e0) {
            ctx->pc = 0x2CE2C0u;
            return;
        }
    }
    ctx->pc = 0x2CE1E8u;
    // 0x2ce1e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce1ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce1f0: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce1f4: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce1f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce1fc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce200: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce204: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce208: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce20c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ce20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce210: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce214: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce218: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x2ce21c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2CE21Cu;
    {
        const bool branch_taken_0x2ce21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce21c) {
            ctx->pc = 0x2CE2C0u;
            return;
        }
    }
    ctx->pc = 0x2CE224u;
}
