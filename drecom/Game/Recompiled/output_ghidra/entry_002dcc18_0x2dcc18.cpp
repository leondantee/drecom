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

// Function: entry_002dcc18
// Address: 0x2dcc18 - 0x2dcd64
void entry_002dcc18_0x2dcc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dcc18_0x2dcc18");
#endif

    switch (ctx->pc) {
        case 0x2dcc34u: goto label_2dcc34;
        case 0x2dcc48u: goto label_2dcc48;
        case 0x2dcc5cu: goto label_2dcc5c;
        case 0x2dcc7cu: goto label_2dcc7c;
        case 0x2dcc98u: goto label_2dcc98;
        case 0x2dcca4u: goto label_2dcca4;
        case 0x2dcce8u: goto label_2dcce8;
        case 0x2dccfcu: goto label_2dccfc;
        case 0x2dcd18u: goto label_2dcd18;
        case 0x2dcd28u: goto label_2dcd28;
        case 0x2dcd3cu: goto label_2dcd3c;
        case 0x2dcd58u: goto label_2dcd58;
        default: break;
    }

    ctx->pc = 0x2dcc18u;

    // 0x2dcc18: 0x3c023bc9  lui         $v0, 0x3BC9
    ctx->pc = 0x2dcc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15305 << 16));
    // 0x2dcc1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2dcc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2dcc20: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2dcc20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2dcc24: 0xc7ac00f8  lwc1        $f12, 0xF8($sp)
    ctx->pc = 0x2dcc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc28: 0xc60d009c  lwc1        $f13, 0x9C($s0)
    ctx->pc = 0x2dcc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcc2c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x2DCC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC34u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x2DCC2Cu, 0x2DCC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC34u;
label_2dcc34:
    // 0x2dcc34: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2dcc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2dcc38: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc3c: 0xc60c009c  lwc1        $f12, 0x9C($s0)
    ctx->pc = 0x2dcc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc40: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x2DCC40u;
    SET_GPR_U32(ctx, 31, 0x2DCC48u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x2DCC40u, 0x2DCC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC48u;
label_2dcc48:
    // 0x2dcc48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2dcc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc4c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dcc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dcc50: 0xc60c0098  lwc1        $f12, 0x98($s0)
    ctx->pc = 0x2dcc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dcc54: 0xc067808  jal         func_19E020
    ctx->pc = 0x2DCC54u;
    SET_GPR_U32(ctx, 31, 0x2DCC5Cu);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x2DCC54u, 0x2DCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC5Cu;
label_2dcc5c:
    // 0x2dcc5c: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x2dcc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcc60: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x2dcc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x2dcc64: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2dcc68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dcc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcc6c: 0x0  nop
    ctx->pc = 0x2dcc6cu;
    // NOP
    // 0x2dcc70: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2dcc70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dcc74: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2DCC74u;
    SET_GPR_U32(ctx, 31, 0x2DCC7Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2DCC74u, 0x2DCC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC7Cu;
label_2dcc7c:
    // 0x2dcc7c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2dcc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2dcc80: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dcc84: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2dcc88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2dcc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2dcc8c: 0x244507b0  addiu       $a1, $v0, 0x7B0
    ctx->pc = 0x2dcc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1968));
    // 0x2dcc90: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCC90u;
    SET_GPR_U32(ctx, 31, 0x2DCC98u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCC98u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCC98u) { return; }
    ctx->pc = 0x2DCC98u;
label_2dcc98:
    // 0x2dcc98: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcc9c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2DCC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCCA4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2DCC9Cu, 0x2DCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCA4u;
label_2dcca4:
    // 0x2dcca4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dcca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcca8: 0x0  nop
    ctx->pc = 0x2dcca8u;
    // NOP
    // 0x2dccac: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2dccacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2dccb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dccb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dccb4: 0x0  nop
    ctx->pc = 0x2dccb4u;
    // NOP
    // 0x2dccb8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2dccb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dccbc: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2dccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dccc0: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x2dccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2dccc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dccc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dccc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dcccc: 0x0  nop
    ctx->pc = 0x2dccccu;
    // NOP
    // 0x2dccd0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x2dccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x2dccd4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dccd8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dccd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dccdc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcce0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DCCE0u;
    SET_GPR_U32(ctx, 31, 0x2DCCE8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DCCE8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCCE8u) { return; }
    ctx->pc = 0x2DCCE8u;
label_2dcce8:
    // 0x2dcce8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dcce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dccec: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2dccecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2dccf0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dccf4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2DCCF4u;
    SET_GPR_U32(ctx, 31, 0x2DCCFCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2DCCFCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCCFCu) { return; }
    ctx->pc = 0x2DCCFCu;
label_2dccfc:
    // 0x2dccfc: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x2dcd00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcd04: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2dcd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd08: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd0c: 0xc60d0094  lwc1        $f13, 0x94($s0)
    ctx->pc = 0x2dcd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2dcd10: 0xc0c8b6c  jal         func_322DB0
    ctx->pc = 0x2DCD10u;
    SET_GPR_U32(ctx, 31, 0x2DCD18u);
    ctx->pc = 0x322DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DB0u, 0x2DCD10u, 0x2DCD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD18u;
label_2dcd18:
    // 0x2dcd18: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dcd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dcd1c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2dcd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd20: 0xc040c9e  jal         func_103278
    ctx->pc = 0x2DCD20u;
    SET_GPR_U32(ctx, 31, 0x2DCD28u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x2DCD28u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCD28u) { return; }
    ctx->pc = 0x2DCD28u;
label_2dcd28:
    // 0x2dcd28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd2c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dcd30: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2dcd34: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x2DCD34u;
    SET_GPR_U32(ctx, 31, 0x2DCD3Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x2DCD34u, 0x2DCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD3Cu;
label_2dcd3c:
    // 0x2dcd3c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2dcd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
    // 0x2dcd40: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2dcd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
    // 0x2dcd44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2dcd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dcd48: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2dcd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd4c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2dcd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dcd50: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2DCD50u;
    SET_GPR_U32(ctx, 31, 0x2DCD58u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x2DCD58u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2DCD58u) { return; }
    ctx->pc = 0x2DCD58u;
label_2dcd58:
    // 0x2dcd58: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2dcd58u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dcd5c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCD5Cu;
    {
        const bool branch_taken_0x2dcd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd5c) {
            ctx->pc = 0x2DCDB8u;
            return;
        }
    }
    ctx->pc = 0x2DCD64u;
}
