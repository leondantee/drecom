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

// Function: entry_00352160
// Address: 0x352160 - 0x352254
void entry_00352160_0x352160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00352160_0x352160");
#endif

    switch (ctx->pc) {
        case 0x352194u: goto label_352194;
        case 0x3521bcu: goto label_3521bc;
        case 0x3521f0u: goto label_3521f0;
        case 0x352218u: goto label_352218;
        default: break;
    }

    ctx->pc = 0x352160u;

    // 0x352160: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x352160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x352164: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x352164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x352168: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x352168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35216c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x35216cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352170: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x352170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x352174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x352174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352178: 0x0  nop
    ctx->pc = 0x352178u;
    // NOP
    // 0x35217c: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x35217cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x352180: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352184: 0xc60d011c  lwc1        $f13, 0x11C($s0)
    ctx->pc = 0x352184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x352188: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x352188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x35218c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x35218Cu;
    SET_GPR_U32(ctx, 31, 0x352194u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x35218Cu, 0x352194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352194u;
label_352194:
    // 0x352194: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x352194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x352198: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x352198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x35219c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35219cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521a0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3521a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3521a4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3521a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3521a8: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3521a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3521ac: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x3521acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3521b0: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x3521b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3521b4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3521B4u;
    SET_GPR_U32(ctx, 31, 0x3521BCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3521B4u, 0x3521BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521BCu;
label_3521bc:
    // 0x3521bc: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3521bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3521c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3521c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3521c4: 0x0  nop
    ctx->pc = 0x3521c4u;
    // NOP
    // 0x3521c8: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x3521c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x3521cc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3521ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3521d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3521d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521d4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x3521d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3521d8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3521d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3521dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3521dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3521e0: 0xc62d011c  lwc1        $f13, 0x11C($s1)
    ctx->pc = 0x3521e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3521e4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3521e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3521e8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3521E8u;
    SET_GPR_U32(ctx, 31, 0x3521F0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3521E8u, 0x3521F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3521F0u;
label_3521f0:
    // 0x3521f0: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x3521f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
    // 0x3521f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3521f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x3521f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3521f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3521fc: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x3521fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352200: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x352200u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x352204: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x352204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x352208: 0xc62d0120  lwc1        $f13, 0x120($s1)
    ctx->pc = 0x352208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35220c: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x35220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x352210: 0xc058f50  jal         func_163D40
    ctx->pc = 0x352210u;
    SET_GPR_U32(ctx, 31, 0x352218u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x352210u, 0x352218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352218u;
label_352218:
    // 0x352218: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x352218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x35221c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35221cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352220: 0x0  nop
    ctx->pc = 0x352220u;
    // NOP
    // 0x352224: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x352224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x352228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35222c: 0x0  nop
    ctx->pc = 0x35222cu;
    // NOP
    // 0x352230: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x352230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x352234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352238: 0x0  nop
    ctx->pc = 0x352238u;
    // NOP
    // 0x35223c: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x35223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x352240: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352240u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x352244: 0x0  nop
    ctx->pc = 0x352244u;
    // NOP
    // 0x352248: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x35224c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x35224Cu;
    {
        const bool branch_taken_0x35224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35224c) {
            ctx->pc = 0x352488u;
            return;
        }
    }
    ctx->pc = 0x352254u;
}
