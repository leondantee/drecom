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

// Function: entry_00163158
// Address: 0x163158 - 0x16324c
void entry_00163158_0x163158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163158_0x163158");
#endif

    switch (ctx->pc) {
        case 0x163168u: goto label_163168;
        case 0x163208u: goto label_163208;
        case 0x16321cu: goto label_16321c;
        case 0x163234u: goto label_163234;
        default: break;
    }

    ctx->pc = 0x163158u;

    // 0x163158: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16315c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x16315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x163160: 0xc067844  jal         func_19E110
    ctx->pc = 0x163160u;
    SET_GPR_U32(ctx, 31, 0x163168u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x163160u, 0x163168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163168u;
label_163168:
    // 0x163168: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16316c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x16316cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x163170: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x163170u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163174: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x163174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x163178: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x163178u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x16317c: 0x3c02c296  lui         $v0, 0xC296
    ctx->pc = 0x16317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49814 << 16));
    // 0x163180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163184: 0x0  nop
    ctx->pc = 0x163184u;
    // NOP
    // 0x163188: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x163188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x16318c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x16318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x163190: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x163190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x163194: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x163194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163198: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x163198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16319c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x16319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1631a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1631a4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1631a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1631a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1631a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ac: 0x0  nop
    ctx->pc = 0x1631acu;
    // NOP
    // 0x1631b0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1631b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1631b4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1631b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1631b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631bc: 0x0  nop
    ctx->pc = 0x1631bcu;
    // NOP
    // 0x1631c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1631c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1631c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1631c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1631c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1631cc: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1631ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1631d0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1631d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1631d4: 0x3c0243e1  lui         $v0, 0x43E1
    ctx->pc = 0x1631d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17377 << 16));
    // 0x1631d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631dc: 0x0  nop
    ctx->pc = 0x1631dcu;
    // NOP
    // 0x1631e0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1631e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1631e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1631e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1631e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1631ec: 0x0  nop
    ctx->pc = 0x1631ecu;
    // NOP
    // 0x1631f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1631f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1631f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1631f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1631f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1631f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1631fc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1631fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163200: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163200u;
    SET_GPR_U32(ctx, 31, 0x163208u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x163208u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x163208u) { return; }
    ctx->pc = 0x163208u;
label_163208:
    // 0x163208: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x163208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16320c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x163210: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x163210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163214: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x163214u;
    SET_GPR_U32(ctx, 31, 0x16321Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x16321Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x16321Cu) { return; }
    ctx->pc = 0x16321Cu;
label_16321c:
    // 0x16321c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x163220: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x163220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x163224: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x163224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163228: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x163228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x16322c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x16322Cu;
    SET_GPR_U32(ctx, 31, 0x163234u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x16322Cu, 0x163234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163234u;
label_163234:
    // 0x163234: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x163234u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x163238: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x163238u;
    {
        const bool branch_taken_0x163238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x163238) {
            ctx->pc = 0x16324Cu;
            return;
        }
    }
    ctx->pc = 0x163240u;
    // 0x163240: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x163240u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x163244: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x163244u;
    {
        const bool branch_taken_0x163244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163244) {
            ctx->pc = 0x163250u;
            return;
        }
    }
    ctx->pc = 0x16324Cu;
}
