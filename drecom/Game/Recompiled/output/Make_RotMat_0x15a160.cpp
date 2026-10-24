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

// Function: Make_RotMat
// Address: 0x15a160 - 0x15a310
void Make_RotMat_0x15a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Make_RotMat_0x15a160");
#endif

    switch (ctx->pc) {
        case 0x15a1ccu: goto label_15a1cc;
        case 0x15a1ecu: goto label_15a1ec;
        case 0x15a20cu: goto label_15a20c;
        case 0x15a228u: goto label_15a228;
        case 0x15a25cu: goto label_15a25c;
        case 0x15a270u: goto label_15a270;
        case 0x15a28cu: goto label_15a28c;
        case 0x15a29cu: goto label_15a29c;
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2d8u: goto label_15a2d8;
        case 0x15a2f0u: goto label_15a2f0;
        default: break;
    }

    ctx->pc = 0x15a160u;

    // 0x15a160: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x15a164: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x15a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x15a168: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x15a168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x15a16c: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x15a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x15a170: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x15a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x15a174: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x15a174u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x15a178: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a17c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a180: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a184: 0x0  nop
    ctx->pc = 0x15a184u;
    // NOP
    // 0x15a188: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a18c: 0x0  nop
    ctx->pc = 0x15a18cu;
    // NOP
    // 0x15a190: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x15A190u;
    {
        const bool branch_taken_0x15a190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a190) {
            ctx->pc = 0x15A1F4u;
            goto label_15a1f4;
        }
    }
    ctx->pc = 0x15A198u;
    // 0x15a198: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a19c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x15a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a1a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a1a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a1a4: 0x0  nop
    ctx->pc = 0x15a1a4u;
    // NOP
    // 0x15a1a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x15a1a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a1ac: 0x0  nop
    ctx->pc = 0x15a1acu;
    // NOP
    // 0x15a1b0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x15A1B0u;
    {
        const bool branch_taken_0x15a1b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a1b0) {
            ctx->pc = 0x15A1F4u;
            goto label_15a1f4;
        }
    }
    ctx->pc = 0x15A1B8u;
    // 0x15a1b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a1bc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15a1bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15a1c0: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x15a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a1c4: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A1C4u;
    SET_GPR_U32(ctx, 31, 0x15A1CCu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A1C4u, 0x15A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A1CCu;
label_15a1cc:
    // 0x15a1cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a1ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15a1d0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15a1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15a1d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a1d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x15a1dc: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x15a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x15a1e0: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x15a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a1e4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x15A1E4u;
    SET_GPR_U32(ctx, 31, 0x15A1ECu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x15A1ECu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A1ECu) { return; }
    ctx->pc = 0x15A1ECu;
label_15a1ec:
    // 0x15a1ec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15A1ECu;
    {
        const bool branch_taken_0x15a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a1ec) {
            ctx->pc = 0x15A28Cu;
            goto label_15a28c;
        }
    }
    ctx->pc = 0x15A1F4u;
label_15a1f4:
    // 0x15a1f4: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a1f8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a1fc: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x15a1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a200: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x15a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15a204: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A204u;
    SET_GPR_U32(ctx, 31, 0x15A20Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A204u, 0x15A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A20Cu;
label_15a20c:
    // 0x15a20c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15a20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15a210: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a214: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x15a218: 0x24455550  addiu       $a1, $v0, 0x5550
    ctx->pc = 0x15a218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21840));
    // 0x15a21c: 0xc7ac00a8  lwc1        $f12, 0xA8($sp)
    ctx->pc = 0x15a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a220: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15A220u;
    SET_GPR_U32(ctx, 31, 0x15A228u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15A228u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A228u) { return; }
    ctx->pc = 0x15A228u;
label_15a228:
    // 0x15a228: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a22c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a230: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a234: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a238: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15a238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a23c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x15a23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a240: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a244: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a24c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15a24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a250: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x15a250u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15a254: 0xc045630  jal         func_1158C0
    ctx->pc = 0x15A254u;
    SET_GPR_U32(ctx, 31, 0x15A25Cu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x15A254u, 0x15A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A25Cu;
label_15a25c:
    // 0x15a25c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x15a260: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x15a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a264: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x15a264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x15a268: 0xc0455e6  jal         func_115798
    ctx->pc = 0x15A268u;
    SET_GPR_U32(ctx, 31, 0x15A270u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x15A268u, 0x15A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A270u;
label_15a270:
    // 0x15a270: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15a270u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15a274: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15a278: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a27c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a280: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x15a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a284: 0xc040ce4  jal         func_103390
    ctx->pc = 0x15A284u;
    SET_GPR_U32(ctx, 31, 0x15A28Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x15A28Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A28Cu) { return; }
    ctx->pc = 0x15A28Cu;
label_15a28c:
    // 0x15a28c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a290: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a294: 0xc040c32  jal         func_1030C8
    ctx->pc = 0x15A294u;
    SET_GPR_U32(ctx, 31, 0x15A29Cu);
    ctx->pc = 0x1030C8u;
    {
        ctx->pc = 0x15A29Cu;
        ps2_stubs::sceVu0TransposeMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A29Cu) { return; }
    ctx->pc = 0x15A29Cu;
label_15a29c:
    // 0x15a29c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2a4: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x15a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a2a8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x15A2A8u;
    SET_GPR_U32(ctx, 31, 0x15A2B0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x15A2B0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2B0u) { return; }
    ctx->pc = 0x15A2B0u;
label_15a2b0:
    // 0x15a2b0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2b4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15a2b8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15a2bc: 0xc040c00  jal         func_103000
    ctx->pc = 0x15A2BCu;
    SET_GPR_U32(ctx, 31, 0x15A2C4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15A2C4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2C4u) { return; }
    ctx->pc = 0x15A2C4u;
label_15a2c4:
    // 0x15a2c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a2c8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2cc: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x15a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15a2d0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15A2D0u;
    SET_GPR_U32(ctx, 31, 0x15A2D8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15A2D8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2D8u) { return; }
    ctx->pc = 0x15A2D8u;
label_15a2d8:
    // 0x15a2d8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x15a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2dc: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15a2e0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x15a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15a2e4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x15a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15a2e8: 0xc040c80  jal         func_103200
    ctx->pc = 0x15A2E8u;
    SET_GPR_U32(ctx, 31, 0x15A2F0u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x15A2F0u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A2F0u) { return; }
    ctx->pc = 0x15A2F0u;
label_15a2f0:
    // 0x15a2f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x15a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x15a2f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15a2f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a2f8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15a2fc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x15a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x15a300: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x15a300u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a304: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x15a304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15a308: 0x3e00008  jr          $ra
    ctx->pc = 0x15A308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A310u;
}
