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

// Function: entry_0022b418
// Address: 0x22b418 - 0x22b51c
void entry_0022b418_0x22b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b418_0x22b418");
#endif

    switch (ctx->pc) {
        case 0x22b490u: goto label_22b490;
        case 0x22b4c8u: goto label_22b4c8;
        case 0x22b4e8u: goto label_22b4e8;
        default: break;
    }

    ctx->pc = 0x22b418u;

    // 0x22b418: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b41c: 0x84a2127e  lh          $v0, 0x127E($a1)
    ctx->pc = 0x22b41cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x22b420: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x22B420u;
    {
        const bool branch_taken_0x22b420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b420) {
            ctx->pc = 0x22B548u;
            return;
        }
    }
    ctx->pc = 0x22B428u;
    // 0x22b428: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b42c: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22b42cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b430: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22b430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x22b434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b438: 0x0  nop
    ctx->pc = 0x22b438u;
    // NOP
    // 0x22b43c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22b43cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b440: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b444: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22b444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22b448: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x22b448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x22b44c: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x22b44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x22b450: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x22b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x22b454: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b458: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b45c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b460: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x22b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x22b464: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x22b464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x22b468: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x22b468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x22b46c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x22b46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x22b470: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x22b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x22b474: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x22b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x22b478: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x22b478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x22b47c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x22b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x22b480: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x22b480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x22b484: 0x27a700ac  addiu       $a3, $sp, 0xAC
    ctx->pc = 0x22b484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x22b488: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x22B488u;
    SET_GPR_U32(ctx, 31, 0x22B490u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x22B488u, 0x22B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B490u;
label_22b490:
    // 0x22b490: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b494: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x22b494u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b498: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x22b498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x22b49c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b49cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b4a0: 0x0  nop
    ctx->pc = 0x22b4a0u;
    // NOP
    // 0x22b4a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22b4a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4a8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x22b4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x22b4ac: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x22b4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x22b4b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4b4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x22b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4b8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x22b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b4bc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22b4bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4c0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22B4C0u;
    SET_GPR_U32(ctx, 31, 0x22B4C8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22B4C0u, 0x22B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4C8u;
label_22b4c8:
    // 0x22b4c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x22b4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x22b4d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4d4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4d8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x22b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b4dc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x22b4dcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22b4e0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x22B4E0u;
    SET_GPR_U32(ctx, 31, 0x22B4E8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x22B4E0u, 0x22B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4E8u;
label_22b4e8:
    // 0x22b4e8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x22b4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x22b4f0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b4f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x22b4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b4f8: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x22b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x22b4fc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x22b4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22b500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b504: 0x0  nop
    ctx->pc = 0x22b504u;
    // NOP
    // 0x22b508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22b508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b510: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x22B510u;
    {
        const bool branch_taken_0x22b510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b510) {
            ctx->pc = 0x22B51Cu;
            return;
        }
    }
    ctx->pc = 0x22B518u;
    // 0x22b518: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x22b518u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x22b51cu;
}
