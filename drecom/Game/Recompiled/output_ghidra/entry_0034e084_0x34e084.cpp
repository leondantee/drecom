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

// Function: entry_0034e084
// Address: 0x34e084 - 0x34e190
void entry_0034e084_0x34e084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034e084_0x34e084");
#endif

    switch (ctx->pc) {
        case 0x34e0c8u: goto label_34e0c8;
        default: break;
    }

    ctx->pc = 0x34e084u;

    // 0x34e084: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e088: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e08c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x34e090: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x34e090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x34e094: 0x853024  and         $a2, $a0, $a1
    ctx->pc = 0x34e094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x34e098: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x34e098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x34e09c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x34e09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34e0a0: 0x8fa800f8  lw          $t0, 0xF8($sp)
    ctx->pc = 0x34e0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0a4: 0xa1070002  sb          $a3, 0x2($t0)
    ctx->pc = 0x34e0a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x34e0a8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0ac: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0b0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34e0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34e0b4: 0x24060a32  addiu       $a2, $zero, 0xA32
    ctx->pc = 0x34e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2610));
    // 0x34e0b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34e0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34e0bc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34e0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34e0c0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34E0C0u;
    SET_GPR_U32(ctx, 31, 0x34E0C8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34E0C0u, 0x34E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E0C8u;
label_34e0c8:
    // 0x34e0c8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x34e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x34e0cc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0d0: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x34e0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e0d4: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x34e0d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0d8: 0x261110b0  addiu       $s1, $s0, 0x10B0
    ctx->pc = 0x34e0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4272));
    // 0x34e0dc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x34e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34e0e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x34e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x34e0e4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x34e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x34e0e8: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x34e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x34e0ec: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e0f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34e0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e0f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34e0f8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x34e0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x34e0fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34e100: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e104: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x34e104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x34e108: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x34e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x34e10c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x34e10cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x34e110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e114: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e118: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x34e118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x34e11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e120: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e124: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34e124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34e128: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e12c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e130: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x34e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e134: 0xa4830036  sh          $v1, 0x36($a0)
    ctx->pc = 0x34e134u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e138: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e13c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e140: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x34e140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34e144: 0xa4620038  sh          $v0, 0x38($v1)
    ctx->pc = 0x34e144u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x34e148: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x34e148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34e14c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e150: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34e150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34e154: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x34e154u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x34e158: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x34e158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34e15c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x34e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e160: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x34e160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34e164: 0xa444003c  sh          $a0, 0x3C($v0)
    ctx->pc = 0x34e164u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x34e168: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e16c: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x34e16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x34e170: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x34e170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34e174: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x34e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34e178: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34e178u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x34e17c: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x34e17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e180: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x34e180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x34e184: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34e184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34e188: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x34e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x34e18c: 0xe4800180  swc1        $f0, 0x180($a0)
    ctx->pc = 0x34e18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    ctx->pc = 0x34e190u;
}
