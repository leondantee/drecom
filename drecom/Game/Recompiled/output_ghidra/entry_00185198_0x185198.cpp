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

// Function: entry_00185198
// Address: 0x185198 - 0x18526c
void entry_00185198_0x185198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185198_0x185198");
#endif

    switch (ctx->pc) {
        case 0x1851d4u: goto label_1851d4;
        case 0x1851e4u: goto label_1851e4;
        case 0x1851fcu: goto label_1851fc;
        case 0x18520cu: goto label_18520c;
        case 0x18522cu: goto label_18522c;
        case 0x185240u: goto label_185240;
        case 0x185268u: goto label_185268;
        default: break;
    }

    ctx->pc = 0x185198u;

    // 0x185198: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x185198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18519c: 0x90230344  lbu         $v1, 0x344($at)
    ctx->pc = 0x18519cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x480344u));
    // 0x1851a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1851a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1851a4: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1851a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1851a8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1851A8u;
    {
        const bool branch_taken_0x1851a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1851a8) {
            ctx->pc = 0x185274u;
            return;
        }
    }
    ctx->pc = 0x1851B0u;
    // 0x1851b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1851b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1851b4: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x1851b4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1851b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1851b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1851bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1851bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1851c0: 0x24450280  addiu       $a1, $v0, 0x280
    ctx->pc = 0x1851c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
    // 0x1851c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1851c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1851c8: 0x244602a0  addiu       $a2, $v0, 0x2A0
    ctx->pc = 0x1851c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x1851cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1851CCu;
    SET_GPR_U32(ctx, 31, 0x1851D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1851CCu, 0x1851D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851D4u;
label_1851d4:
    // 0x1851d4: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x1851d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1851d8: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x1851d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1851dc: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1851DCu;
    SET_GPR_U32(ctx, 31, 0x1851E4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1851DCu, 0x1851E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851E4u;
label_1851e4:
    // 0x1851e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1851e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1851e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1851e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1851ec: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x1851ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1851f0: 0x260601a0  addiu       $a2, $s0, 0x1A0
    ctx->pc = 0x1851f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x1851f4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1851F4u;
    SET_GPR_U32(ctx, 31, 0x1851FCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1851F4u, 0x1851FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1851FCu;
label_1851fc:
    // 0x1851fc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1851fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185200: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x185200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185204: 0xc0455e6  jal         func_115798
    ctx->pc = 0x185204u;
    SET_GPR_U32(ctx, 31, 0x18520Cu);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x185204u, 0x18520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18520Cu;
label_18520c:
    // 0x18520c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18520cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185210: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x185210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x185214: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x185214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x185218: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x185218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x18521c: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x18521cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185220: 0xc7ad0098  lwc1        $f13, 0x98($sp)
    ctx->pc = 0x185220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x185224: 0xc058fa4  jal         func_163E90
    ctx->pc = 0x185224u;
    SET_GPR_U32(ctx, 31, 0x18522Cu);
    ctx->pc = 0x163E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163E90u, 0x185224u, 0x18522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18522Cu;
label_18522c:
    // 0x18522c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x18522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x185230: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x185234: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x185234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x185238: 0xc067844  jal         func_19E110
    ctx->pc = 0x185238u;
    SET_GPR_U32(ctx, 31, 0x185240u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x185238u, 0x185240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185240u;
label_185240:
    // 0x185240: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x185240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x185244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x185244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x185248: 0x0  nop
    ctx->pc = 0x185248u;
    // NOP
    // 0x18524c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x18524cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x185250: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x185250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x185254: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x185254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x185258: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18525c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x18525cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x185260: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x185260u;
    SET_GPR_U32(ctx, 31, 0x185268u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x185268u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x185268u) { return; }
    ctx->pc = 0x185268u;
label_185268:
    // 0x185268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x185268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x18526cu;
}
