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

// Function: entry_0019a860
// Address: 0x19a860 - 0x19a928
void entry_0019a860_0x19a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a860_0x19a860");
#endif

    switch (ctx->pc) {
        case 0x19a890u: goto label_19a890;
        case 0x19a8b4u: goto label_19a8b4;
        default: break;
    }

    ctx->pc = 0x19a860u;

    // 0x19a860: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a864: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19a864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x19a868: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19a868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a86c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a870: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a874: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19a874u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5CD2F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5CD2F0u, _value); } while (0);
    // 0x19a878: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a87c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a880: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a884: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a888: 0xc067844  jal         func_19E110
    ctx->pc = 0x19A888u;
    SET_GPR_U32(ctx, 31, 0x19A890u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x19A888u, 0x19A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A890u;
label_19a890:
    // 0x19a890: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a894: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19a898: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a89c: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a8a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a8a4: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a8a8: 0xc46c0440  lwc1        $f12, 0x440($v1)
    ctx->pc = 0x19a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a8ac: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x19A8ACu;
    SET_GPR_U32(ctx, 31, 0x19A8B4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x19A8B4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A8B4u) { return; }
    ctx->pc = 0x19A8B4u;
label_19a8b4:
    // 0x19a8b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a8b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8bc: 0xe420d37c  swc1        $f0, -0x2C84($at)
    ctx->pc = 0x19a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD37Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD37Cu, _value); } while (0); }
    // 0x19a8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8c4: 0xe420d370  swc1        $f0, -0x2C90($at)
    ctx->pc = 0x19a8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD370u, _value); } while (0); }
    // 0x19a8c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a8cc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a8d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19a8d4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x19a8d4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a8d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19a8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19a8dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8e0: 0xe420d374  swc1        $f0, -0x2C8C($at)
    ctx->pc = 0x19a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD374u, _value); } while (0); }
    // 0x19a8e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a8e8: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x19a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a8ec: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x19a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x19a8f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19a8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a8f8: 0x0  nop
    ctx->pc = 0x19a8f8u;
    // NOP
    // 0x19a8fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a900: 0x0  nop
    ctx->pc = 0x19a900u;
    // NOP
    // 0x19a904: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19A904u;
    {
        const bool branch_taken_0x19a904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a904) {
            ctx->pc = 0x19A928u;
            return;
        }
    }
    ctx->pc = 0x19A90Cu;
    // 0x19a90c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x19a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x19a910: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a918: 0x0  nop
    ctx->pc = 0x19a918u;
    // NOP
    // 0x19a91c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x19a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x19a920: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19A920u;
    {
        const bool branch_taken_0x19a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a920) {
            ctx->pc = 0x19A980u;
            return;
        }
    }
    ctx->pc = 0x19A928u;
}
