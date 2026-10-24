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

// Function: entry_002cd144
// Address: 0x2cd144 - 0x2cd2c0
void entry_002cd144_0x2cd144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cd144_0x2cd144");
#endif

    switch (ctx->pc) {
        case 0x2cd168u: goto label_2cd168;
        case 0x2cd194u: goto label_2cd194;
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd1dcu: goto label_2cd1dc;
        case 0x2cd1e8u: goto label_2cd1e8;
        default: break;
    }

    ctx->pc = 0x2cd144u;

    // 0x2cd144: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd148: 0xc44100d8  lwc1        $f1, 0xD8($v0)
    ctx->pc = 0x2cd148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd14c: 0x3c023f0e  lui         $v0, 0x3F0E
    ctx->pc = 0x2cd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16142 << 16));
    // 0x2cd150: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd158: 0x0  nop
    ctx->pc = 0x2cd158u;
    // NOP
    // 0x2cd15c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd15cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd160: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD160u;
    SET_GPR_U32(ctx, 31, 0x2CD168u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD160u, 0x2CD168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD168u;
label_2cd168:
    // 0x2cd168: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd16c: 0xe44000d8  swc1        $f0, 0xD8($v0)
    ctx->pc = 0x2cd16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x2cd170: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd174: 0xc46100d0  lwc1        $f1, 0xD0($v1)
    ctx->pc = 0x2cd174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd178: 0x3c023e8e  lui         $v0, 0x3E8E
    ctx->pc = 0x2cd178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16014 << 16));
    // 0x2cd17c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2cd17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2cd180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cd180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd184: 0x0  nop
    ctx->pc = 0x2cd184u;
    // NOP
    // 0x2cd188: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2cd188u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cd18c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2CD18Cu;
    SET_GPR_U32(ctx, 31, 0x2CD194u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2CD18Cu, 0x2CD194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD194u;
label_2cd194:
    // 0x2cd194: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd198: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2cd198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2cd19c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cd1a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2CD1A4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2CD1A4u, 0x2CD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1ACu;
label_2cd1ac:
    // 0x2cd1ac: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2cd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1b8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2cd1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2cd1bc: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2cd1c0: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2cd1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2cd1c4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2CD1C4u;
    SET_GPR_U32(ctx, 31, 0x2CD1CCu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2CD1C4u, 0x2CD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1CCu;
label_2cd1cc:
    // 0x2cd1cc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2cd1d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cd1d4: 0xc0b1094  jal         func_2C4250
    ctx->pc = 0x2CD1D4u;
    SET_GPR_U32(ctx, 31, 0x2CD1DCu);
    ctx->pc = 0x2C4250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4250u, 0x2CD1D4u, 0x2CD1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1DCu;
label_2cd1dc:
    // 0x2cd1dc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1e0: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2CD1E0u;
    SET_GPR_U32(ctx, 31, 0x2CD1E8u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2CD1E0u, 0x2CD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1E8u;
label_2cd1e8:
    // 0x2cd1e8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd1ec: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd1f0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd1f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd1f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd1f8: 0xc4800180  lwc1        $f0, 0x180($a0)
    ctx->pc = 0x2cd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd1fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd200: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x2cd200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x2cd204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd208: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd20c: 0x34653333  ori         $a1, $v1, 0x3333
    ctx->pc = 0x2cd20cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd210: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2cd210u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd214: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd218: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd21c: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x2cd21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x2cd220: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2cd220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd224: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x2cd224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x2cd228: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2cd228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2cd22c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cd22cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cd230: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2cd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd234: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cd234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cd238: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2cd238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2cd23c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd240: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2cd240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd244: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2cd244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd248: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2cd248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2cd24c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cd24cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd250: 0x0  nop
    ctx->pc = 0x2cd250u;
    // NOP
    // 0x2cd254: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cd254u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd258: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2cd258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2cd25c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd260: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2cd260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2cd264: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2cd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd268: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd26c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x2cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd270: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2cd270u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2cd274: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x2cd274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x2cd278: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd27c: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x2cd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd280: 0x3c1041f0  lui         $s0, 0x41F0
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)16880 << 16));
    // 0x2cd284: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2cd284u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd288: 0x0  nop
    ctx->pc = 0x2cd288u;
    // NOP
    // 0x2cd28c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2cd28cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cd290: 0x0  nop
    ctx->pc = 0x2cd290u;
    // NOP
    // 0x2cd294: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x2CD294u;
    {
        const bool branch_taken_0x2cd294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cd294) {
            ctx->pc = 0x2CD560u;
            return;
        }
    }
    ctx->pc = 0x2CD29Cu;
    // 0x2cd29c: 0x3c054348  lui         $a1, 0x4348
    ctx->pc = 0x2cd29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17224 << 16));
    // 0x2cd2a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2cd2a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cd2a4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2a8: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x2cd2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x2cd2ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2cd2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd2b0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd2b4: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x2cd2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cd2b8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x2CD2B8u;
    {
        const bool branch_taken_0x2cd2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd2b8) {
            ctx->pc = 0x2CD560u;
            return;
        }
    }
    ctx->pc = 0x2CD2C0u;
}
