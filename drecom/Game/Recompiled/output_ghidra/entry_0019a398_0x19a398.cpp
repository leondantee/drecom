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

// Function: entry_0019a398
// Address: 0x19a398 - 0x19a4c0
void entry_0019a398_0x19a398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a398_0x19a398");
#endif

    switch (ctx->pc) {
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a450u: goto label_19a450;
        case 0x19a470u: goto label_19a470;
        default: break;
    }

    ctx->pc = 0x19a398u;

    // 0x19a398: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a39c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x19a3a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19a3a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a3a4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3a8: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a3ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19a3acu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5CD2F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5CD2F0u, _value); } while (0);
    // 0x19a3b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a3b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3b8: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a3c0: 0xc067844  jal         func_19E110
    ctx->pc = 0x19A3C0u;
    SET_GPR_U32(ctx, 31, 0x19A3C8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x19A3C0u, 0x19A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3C8u;
label_19a3c8:
    // 0x19a3c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a3cc: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19a3d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3d4: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3dc: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3e0: 0xc46c0440  lwc1        $f12, 0x440($v1)
    ctx->pc = 0x19a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a3e4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x19A3E4u;
    SET_GPR_U32(ctx, 31, 0x19A3ECu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x19A3ECu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A3ECu) { return; }
    ctx->pc = 0x19A3ECu;
label_19a3ec:
    // 0x19a3ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a3f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a3f4: 0xe420d35c  swc1        $f0, -0x2CA4($at)
    ctx->pc = 0x19a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD35Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD35Cu, _value); } while (0); }
    // 0x19a3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a3fc: 0xe420d350  swc1        $f0, -0x2CB0($at)
    ctx->pc = 0x19a3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD350u, _value); } while (0); }
    // 0x19a400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a404: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19a40c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x19a40cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a410: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19a410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19a414: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a418: 0xe420d354  swc1        $f0, -0x2CAC($at)
    ctx->pc = 0x19a418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD354u, _value); } while (0); }
    // 0x19a41c: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x19a420: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x19a424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a42c: 0xe420d358  swc1        $f0, -0x2CA8($at)
    ctx->pc = 0x19a42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD358u, _value); } while (0); }
    // 0x19a430: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a434: 0x2444d350  addiu       $a0, $v0, -0x2CB0
    ctx->pc = 0x19a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a438: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a43c: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a440: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a444: 0x2446d350  addiu       $a2, $v0, -0x2CB0
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a448: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A448u;
    SET_GPR_U32(ctx, 31, 0x19A450u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A450u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A450u) { return; }
    ctx->pc = 0x19A450u;
label_19a450:
    // 0x19a450: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a454: 0x2444d2f0  addiu       $a0, $v0, -0x2D10
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a458: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a45c: 0x2445d2f0  addiu       $a1, $v0, -0x2D10
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a460: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a464: 0x2446d350  addiu       $a2, $v0, -0x2CB0
    ctx->pc = 0x19a464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a468: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x19A468u;
    SET_GPR_U32(ctx, 31, 0x19A470u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x19A470u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A470u) { return; }
    ctx->pc = 0x19A470u;
label_19a470:
    // 0x19a470: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a474: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19a474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19a478: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A478u;
    {
        const bool branch_taken_0x19a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a478) {
            ctx->pc = 0x19A4F4u;
            return;
        }
    }
    ctx->pc = 0x19A480u;
    // 0x19a480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a484: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a484u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a48c: 0x0  nop
    ctx->pc = 0x19a48cu;
    // NOP
    // 0x19a490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a494: 0x0  nop
    ctx->pc = 0x19a494u;
    // NOP
    // 0x19a498: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A498u;
    {
        const bool branch_taken_0x19a498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a498) {
            ctx->pc = 0x19A4C0u;
            return;
        }
    }
    ctx->pc = 0x19A4A0u;
    // 0x19a4a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4a4: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a4a4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a4a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x19a4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4b0: 0x0  nop
    ctx->pc = 0x19a4b0u;
    // NOP
    // 0x19a4b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19a4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19a4b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4bc: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
    ctx->pc = 0x19a4c0u;
}
