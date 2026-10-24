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

// Function: entry_003762b8
// Address: 0x3762b8 - 0x3763c0
void entry_003762b8_0x3762b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003762b8_0x3762b8");
#endif

    switch (ctx->pc) {
        case 0x376324u: goto label_376324;
        case 0x37635cu: goto label_37635c;
        case 0x37637cu: goto label_37637c;
        default: break;
    }

    ctx->pc = 0x3762b8u;

    // 0x3762b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3762b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3762bc: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3762bcu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3762c0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3762c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3762c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3762c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3762c8: 0x0  nop
    ctx->pc = 0x3762c8u;
    // NOP
    // 0x3762cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3762ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3762d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3762d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3762d4: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x3762d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3762d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3762d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762dc: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x3762dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3762e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3762e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3762e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3762e8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3762e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x3762ec: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3762ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x3762f0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3762f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3762f4: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x3762f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x3762f8: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x3762f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x3762fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x3762fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x376300: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x376300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x376304: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x376304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x376308: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x376308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37630c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x376310: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x376310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x376314: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x376314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x376318: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x376318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37631c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37631Cu;
    SET_GPR_U32(ctx, 31, 0x376324u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37631Cu, 0x376324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376324u;
label_376324:
    // 0x376324: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x376324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376328: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x376328u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37632c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37632cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x376330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376334: 0x0  nop
    ctx->pc = 0x376334u;
    // NOP
    // 0x376338: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x376338u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37633c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x376340: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x376340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x376344: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376348: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x376348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37634c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376350: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376350u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376354: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376354u;
    SET_GPR_U32(ctx, 31, 0x37635Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376354u, 0x37635Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37635Cu;
label_37635c:
    // 0x37635c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376360: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x376360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x376364: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376368: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37636c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x376370: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x376370u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x376374: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x376374u;
    SET_GPR_U32(ctx, 31, 0x37637Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x376374u, 0x37637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37637Cu;
label_37637c:
    // 0x37637c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376380: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x376380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x376384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x376384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x376388: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x376388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37638c: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x37638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x376390: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x376390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x376394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376398: 0x0  nop
    ctx->pc = 0x376398u;
    // NOP
    // 0x37639c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x37639cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3763a0: 0x0  nop
    ctx->pc = 0x3763a0u;
    // NOP
    // 0x3763a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3763A4u;
    {
        const bool branch_taken_0x3763a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3763a4) {
            ctx->pc = 0x3763C0u;
            return;
        }
    }
    ctx->pc = 0x3763ACu;
    // 0x3763ac: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3763acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3763b0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3763b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3763b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3763b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3763b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3763b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3763bc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3763bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x3763c0u;
}
