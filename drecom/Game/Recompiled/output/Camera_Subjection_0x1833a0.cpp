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

// Function: Camera_Subjection
// Address: 0x1833a0 - 0x1834fc
void Camera_Subjection_0x1833a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Camera_Subjection_0x1833a0");
#endif

    switch (ctx->pc) {
        case 0x1833ccu: goto label_1833cc;
        case 0x183420u: goto label_183420;
        case 0x183438u: goto label_183438;
        case 0x183468u: goto label_183468;
        case 0x183498u: goto label_183498;
        case 0x1834acu: goto label_1834ac;
        case 0x1834dcu: goto label_1834dc;
        case 0x1834e8u: goto label_1834e8;
        default: break;
    }

    ctx->pc = 0x1833a0u;

    // 0x1833a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1833a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1833a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1833a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1833a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1833ac: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x1833acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x1833b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1833b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1833b4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1833b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1833b8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1833b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1833bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1833bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1833c0: 0xc42cdc94  lwc1        $f12, -0x236C($at)
    ctx->pc = 0x1833c0u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1833c4: 0xc067844  jal         func_19E110
    ctx->pc = 0x1833C4u;
    SET_GPR_U32(ctx, 31, 0x1833CCu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x1833C4u, 0x1833CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1833CCu;
label_1833cc:
    // 0x1833cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1833ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1833d0: 0x0  nop
    ctx->pc = 0x1833d0u;
    // NOP
    // 0x1833d4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1833d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1833d8: 0x3c02445a  lui         $v0, 0x445A
    ctx->pc = 0x1833d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17498 << 16));
    // 0x1833dc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1833dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x1833e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1833e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1833e4: 0x0  nop
    ctx->pc = 0x1833e4u;
    // NOP
    // 0x1833e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1833e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1833ec: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x1833f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1833f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1833f4: 0x0  nop
    ctx->pc = 0x1833f4u;
    // NOP
    // 0x1833f8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1833f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1833fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1833fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x183400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183404: 0x0  nop
    ctx->pc = 0x183404u;
    // NOP
    // 0x183408: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x183408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x18340c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183410: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x183414: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183418: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x183418u;
    SET_GPR_U32(ctx, 31, 0x183420u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x183420u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183420u) { return; }
    ctx->pc = 0x183420u;
label_183420:
    // 0x183420: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x183420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x183424: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183428: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18342c: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x183430: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x183430u;
    SET_GPR_U32(ctx, 31, 0x183438u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x183438u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183438u) { return; }
    ctx->pc = 0x183438u;
label_183438:
    // 0x183438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x183438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18343c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18343cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183440: 0x0  nop
    ctx->pc = 0x183440u;
    // NOP
    // 0x183444: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x183444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x183448: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x183448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18344c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18344cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183450: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x183450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x183454: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183458: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183458u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18345c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x18345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183460: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x183460u;
    SET_GPR_U32(ctx, 31, 0x183468u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x183460u, 0x183468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183468u;
label_183468:
    // 0x183468: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x183468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18346c: 0x3c02452b  lui         $v0, 0x452B
    ctx->pc = 0x18346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17707 << 16));
    // 0x183470: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x183470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x183474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183478: 0x0  nop
    ctx->pc = 0x183478u;
    // NOP
    // 0x18347c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18347cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183480: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x183480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x183484: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183488: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x183488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18348c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18348cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183490: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x183490u;
    SET_GPR_U32(ctx, 31, 0x183498u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x183498u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183498u) { return; }
    ctx->pc = 0x183498u;
label_183498:
    // 0x183498: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18349c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x18349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1834a0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1834a4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1834A4u;
    SET_GPR_U32(ctx, 31, 0x1834ACu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1834ACu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1834ACu) { return; }
    ctx->pc = 0x1834ACu;
label_1834ac:
    // 0x1834ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1834acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1834b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1834b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1834b4: 0x0  nop
    ctx->pc = 0x1834b4u;
    // NOP
    // 0x1834b8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1834b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1834bc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1834bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1834c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1834c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1834c4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1834c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1834c8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x1834c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1834cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1834ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1834d0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1834d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1834d4: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x1834D4u;
    SET_GPR_U32(ctx, 31, 0x1834DCu);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x1834D4u, 0x1834DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834DCu;
label_1834dc:
    // 0x1834dc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1834e0: 0xc05f910  jal         func_17E440
    ctx->pc = 0x1834E0u;
    SET_GPR_U32(ctx, 31, 0x1834E8u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x1834E0u, 0x1834E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1834E8u;
label_1834e8:
    // 0x1834e8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1834e8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1834ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1834ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1834f0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1834f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1834F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1834F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1834FCu;
}
