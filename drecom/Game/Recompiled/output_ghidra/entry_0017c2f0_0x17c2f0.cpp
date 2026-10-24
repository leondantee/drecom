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

// Function: entry_0017c2f0
// Address: 0x17c2f0 - 0x17c464
void entry_0017c2f0_0x17c2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c2f0_0x17c2f0");
#endif

    switch (ctx->pc) {
        case 0x17c348u: goto label_17c348;
        case 0x17c35cu: goto label_17c35c;
        case 0x17c368u: goto label_17c368;
        case 0x17c39cu: goto label_17c39c;
        case 0x17c3acu: goto label_17c3ac;
        case 0x17c3dcu: goto label_17c3dc;
        case 0x17c3e8u: goto label_17c3e8;
        case 0x17c3f8u: goto label_17c3f8;
        case 0x17c410u: goto label_17c410;
        default: break;
    }

    ctx->pc = 0x17c2f0u;

    // 0x17c2f0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c2f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x17c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17c2f8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x17c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x17c2fc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x17c2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17c300: 0x1440ff04  bnez        $v0, . + 4 + (-0xFC << 2)
    ctx->pc = 0x17C300u;
    {
        const bool branch_taken_0x17c300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17c300) {
            ctx->pc = 0x17BF14u;
            return;
        }
    }
    ctx->pc = 0x17C308u;
    // 0x17c308: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x17c308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x17c30c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17c310: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x17c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17c314: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17c314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17c318: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c318u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c31c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x17c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c320: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c320u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c32c: 0x0  nop
    ctx->pc = 0x17c32cu;
    // NOP
    // 0x17c330: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x17c330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17c334: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x17c334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c338: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x17c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17c33c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c340: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C340u;
    SET_GPR_U32(ctx, 31, 0x17C348u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C348u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C348u) { return; }
    ctx->pc = 0x17C348u;
label_17c348:
    // 0x17c348: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c34c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c350: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x17c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c354: 0xc040c80  jal         func_103200
    ctx->pc = 0x17C354u;
    SET_GPR_U32(ctx, 31, 0x17C35Cu);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x17C35Cu;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C35Cu) { return; }
    ctx->pc = 0x17C35Cu;
label_17c35c:
    // 0x17c35c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c360: 0xc067588  jal         func_19D620
    ctx->pc = 0x17C360u;
    SET_GPR_U32(ctx, 31, 0x17C368u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x17C360u, 0x17C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C368u;
label_17c368:
    // 0x17c368: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17c36c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c374: 0x0  nop
    ctx->pc = 0x17c374u;
    // NOP
    // 0x17c378: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x17c378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x17c37c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c380: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c384: 0x0  nop
    ctx->pc = 0x17c384u;
    // NOP
    // 0x17c388: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c38c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c390: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17c390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17c394: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C394u;
    SET_GPR_U32(ctx, 31, 0x17C39Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C39Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C39Cu) { return; }
    ctx->pc = 0x17C39Cu;
label_17c39c:
    // 0x17c39c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3a4: 0xc040c24  jal         func_103090
    ctx->pc = 0x17C3A4u;
    SET_GPR_U32(ctx, 31, 0x17C3ACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x17C3ACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C3ACu) { return; }
    ctx->pc = 0x17C3ACu;
label_17c3ac:
    // 0x17c3ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3b4: 0x0  nop
    ctx->pc = 0x17c3b4u;
    // NOP
    // 0x17c3b8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17c3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x17c3bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c3c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c3c4: 0x0  nop
    ctx->pc = 0x17c3c4u;
    // NOP
    // 0x17c3c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x17c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x17c3cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17c3d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c3d4: 0xc040c1a  jal         func_103068
    ctx->pc = 0x17C3D4u;
    SET_GPR_U32(ctx, 31, 0x17C3DCu);
    ctx->pc = 0x103068u;
    {
        ctx->pc = 0x17C3DCu;
        ps2_stubs::sceVu0InnerProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17C3DCu) { return; }
    ctx->pc = 0x17C3DCu;
label_17c3dc:
    // 0x17c3dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17c3dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x17c3e0: 0xc045566  jal         func_115598
    ctx->pc = 0x17C3E0u;
    SET_GPR_U32(ctx, 31, 0x17C3E8u);
    ctx->pc = 0x115598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115598u, 0x17C3E0u, 0x17C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3E8u;
label_17c3e8:
    // 0x17c3e8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x17c3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x17c3ec: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c3f0: 0xc0454c4  jal         func_115310
    ctx->pc = 0x17C3F0u;
    SET_GPR_U32(ctx, 31, 0x17C3F8u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x17C3F0u, 0x17C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C3F8u;
label_17c3f8:
    // 0x17c3f8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c3fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c400: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c404: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x17c404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17c408: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x17C408u;
    SET_GPR_U32(ctx, 31, 0x17C410u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x17C408u, 0x17C410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17C410u;
label_17c410:
    // 0x17c410: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x17c410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c418: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x17c418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x17c41c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x17c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c420: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c424: 0x0  nop
    ctx->pc = 0x17c424u;
    // NOP
    // 0x17c428: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17c428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c42c: 0x0  nop
    ctx->pc = 0x17c42cu;
    // NOP
    // 0x17c430: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x17C430u;
    {
        const bool branch_taken_0x17c430 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17c430) {
            ctx->pc = 0x17C464u;
            return;
        }
    }
    ctx->pc = 0x17C438u;
    // 0x17c438: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x17c438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c43c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x17c43cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x17c440: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17c444: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17c444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17c448: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x17c448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17c44c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x17c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17c450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c454: 0x0  nop
    ctx->pc = 0x17c454u;
    // NOP
    // 0x17c458: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x17c458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x17c45c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17C45Cu;
    {
        const bool branch_taken_0x17c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17c45c) {
            ctx->pc = 0x17C564u;
            return;
        }
    }
    ctx->pc = 0x17C464u;
}
