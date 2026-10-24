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

// Function: entry_001f9290
// Address: 0x1f9290 - 0x1f9384
void entry_001f9290_0x1f9290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f9290_0x1f9290");
#endif

    switch (ctx->pc) {
        case 0x1f9304u: goto label_1f9304;
        case 0x1f9348u: goto label_1f9348;
        case 0x1f9354u: goto label_1f9354;
        default: break;
    }

    ctx->pc = 0x1f9290u;

    // 0x1f9290: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f9290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f9294: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f9294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9298: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f9298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f929c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f929cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f92a0: 0x0  nop
    ctx->pc = 0x1f92a0u;
    // NOP
    // 0x1f92a4: 0x45000037  bc1f        . + 4 + (0x37 << 2)
    ctx->pc = 0x1F92A4u;
    {
        const bool branch_taken_0x1f92a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f92a4) {
            ctx->pc = 0x1F9384u;
            return;
        }
    }
    ctx->pc = 0x1F92ACu;
    // 0x1f92ac: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x1f92acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92b0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1f92b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f92b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f92b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f92b8: 0x0  nop
    ctx->pc = 0x1f92b8u;
    // NOP
    // 0x1f92bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f92bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f92c0: 0x0  nop
    ctx->pc = 0x1f92c0u;
    // NOP
    // 0x1f92c4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1F92C4u;
    {
        const bool branch_taken_0x1f92c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f92c4) {
            ctx->pc = 0x1F9384u;
            return;
        }
    }
    ctx->pc = 0x1F92CCu;
    // 0x1f92cc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f92d0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f92d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92d4: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x1f92d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f92d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f92dc: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1f92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1f92e0: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x1f92e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f92e4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f92e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f92e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f92ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f92ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f92f0: 0x24040527  addiu       $a0, $zero, 0x527
    ctx->pc = 0x1f92f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1319));
    // 0x1f92f4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1f92f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f92f8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f92f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f92fc: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F92FCu;
    SET_GPR_U32(ctx, 31, 0x1F9304u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F92FCu, 0x1F9304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9304u;
label_1f9304:
    // 0x1f9304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9308: 0x0  nop
    ctx->pc = 0x1f9308u;
    // NOP
    // 0x1f930c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1f930cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1f9310: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x1f9310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x1f9314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9318: 0x0  nop
    ctx->pc = 0x1f9318u;
    // NOP
    // 0x1f931c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1f931cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1f9320: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f9320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9324: 0x0  nop
    ctx->pc = 0x1f9324u;
    // NOP
    // 0x1f9328: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1f9328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1f932c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f932cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f9330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9334: 0x0  nop
    ctx->pc = 0x1f9334u;
    // NOP
    // 0x1f9338: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1f9338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1f933c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1f933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f9340: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1F9340u;
    SET_GPR_U32(ctx, 31, 0x1F9348u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1F9340u, 0x1F9348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9348u;
label_1f9348:
    // 0x1f9348: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1f9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f934c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1F934Cu;
    SET_GPR_U32(ctx, 31, 0x1F9354u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1F934Cu, 0x1F9354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9354u;
label_1f9354:
    // 0x1f9354: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1f9354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1f9358: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1f9358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x1f935c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1f935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f9360: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1f9360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1f9364: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f9364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f9368: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x1f9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f936c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1f936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1f9370: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1f9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1f9374: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1f9374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1f9378: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x1f9378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1f937c: 0xc086a38  jal         func_21A8E0
    ctx->pc = 0x1F937Cu;
    SET_GPR_U32(ctx, 31, 0x1F9384u);
    ctx->pc = 0x21A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A8E0u, 0x1F937Cu, 0x1F9384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9384u;
}
