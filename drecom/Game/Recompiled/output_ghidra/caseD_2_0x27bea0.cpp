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

// Function: caseD_2
// Address: 0x27bea0 - 0x27c090
void caseD_2_0x27bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x27bea0");
#endif

    switch (ctx->pc) {
        case 0x27bf7cu: goto label_27bf7c;
        case 0x27bf98u: goto label_27bf98;
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c004u: goto label_27c004;
        case 0x27c028u: goto label_27c028;
        case 0x27c03cu: goto label_27c03c;
        default: break;
    }

    ctx->pc = 0x27bea0u;

    // 0x27bea0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bea4: 0x8c31f9ec  lw          $s1, -0x614($at)
    ctx->pc = 0x27bea4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x27bea8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27beac: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27beacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Au));
    // 0x27beb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27beb4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x27beb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27beb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x27beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x27bebc: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x27bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x27bec0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bec4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x27bec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x27bec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27becc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27beccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bed0: 0xc4201b40  lwc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bed0u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bed4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x27bed4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x27bed8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27bed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bedc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bedcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27bee0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bee4: 0xc4201b40  lwc1        $f0, 0x1B40($at)
    ctx->pc = 0x27bee4u;
    { uint32_t bits = FAST_READ32(0x621B40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27bee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27beec: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x27beecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27bef0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27bef4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27bef8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27befc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27befcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27bf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bf04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27bf08: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x27bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27bf0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bf0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27bf10: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27bf14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27bf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27bf18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x27bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27bf1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bf20: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x27bf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27bf24: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27bf24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27bf28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27bf2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x27bf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27bf30: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x27bf30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27bf34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27bf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27bf38: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x27bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x27bf3c: 0x31182  srl         $v0, $v1, 6
    ctx->pc = 0x27bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x27bf40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x27bf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27bf44: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bf48: 0x90221b4a  lbu         $v0, 0x1B4A($at)
    ctx->pc = 0x27bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Au));
    // 0x27bf4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27bf50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bf54: 0xa0221b4a  sb          $v0, 0x1B4A($at)
    ctx->pc = 0x27bf54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Au, _value); } while (0);
    // 0x27bf58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bf5c: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bf5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B44u));
    // 0x27bf60: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bf60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27bf64: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x27bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27bf68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bf6c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x27bf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bf70: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27bf70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27bf74: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x27BF74u;
    SET_GPR_U32(ctx, 31, 0x27BF7Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x27BF74u, 0x27BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF7Cu;
label_27bf7c:
    // 0x27bf7c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27bf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27bf80: 0x94221b44  lhu         $v0, 0x1B44($at)
    ctx->pc = 0x27bf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B44u));
    // 0x27bf84: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x27bf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27bf88: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x27bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x27bf8c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27bf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27bf90: 0xc05db20  jal         func_176C80
    ctx->pc = 0x27BF90u;
    SET_GPR_U32(ctx, 31, 0x27BF98u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x27BF90u, 0x27BF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BF98u;
label_27bf98:
    // 0x27bf98: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27BF98u;
    SET_GPR_U32(ctx, 31, 0x27BFA0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27BF98u, 0x27BFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFA0u;
label_27bfa0:
    // 0x27bfa0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x27bfa4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27bfa8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x27BFA8u;
    SET_GPR_U32(ctx, 31, 0x27BFB0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x27BFA8u, 0x27BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFB0u;
label_27bfb0:
    // 0x27bfb0: 0x3c024692  lui         $v0, 0x4692
    ctx->pc = 0x27bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18066 << 16));
    // 0x27bfb4: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x27bfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x27bfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bfbc: 0x0  nop
    ctx->pc = 0x27bfbcu;
    // NOP
    // 0x27bfc0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x27bfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27bfc4: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x27bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
    // 0x27bfc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27bfc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27bfcc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bfd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27bfd4: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x27bfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27bfd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27bfd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27bfdc: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x27bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
    // 0x27bfe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27bfe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27bfe4: 0x0  nop
    ctx->pc = 0x27bfe4u;
    // NOP
    // 0x27bfe8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27bfe8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27bfec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x27bfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27bff0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27bff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27bff4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27BFF4u;
    SET_GPR_U32(ctx, 31, 0x27BFFCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27BFFCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27BFFCu) { return; }
    ctx->pc = 0x27BFFCu;
label_27bffc:
    // 0x27bffc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27BFFCu;
    SET_GPR_U32(ctx, 31, 0x27C004u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27BFFCu, 0x27C004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C004u;
label_27c004:
    // 0x27c004: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x27c004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x27c008: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x27c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x27c00c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27c00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27c010: 0x0  nop
    ctx->pc = 0x27c010u;
    // NOP
    // 0x27c014: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x27c014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27c018: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27c01c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27c020: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x27C020u;
    SET_GPR_U32(ctx, 31, 0x27C028u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x27C028u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27C028u) { return; }
    ctx->pc = 0x27C028u;
label_27c028:
    // 0x27c028: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x27c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27c02c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27c02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27c030: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27c034: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x27C034u;
    SET_GPR_U32(ctx, 31, 0x27C03Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x27C03Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27C03Cu) { return; }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x27c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27c040: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x27c040u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c044: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27c044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27c048: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x27c048u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27c04c: 0x3c0246e1  lui         $v0, 0x46E1
    ctx->pc = 0x27c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18145 << 16));
    // 0x27c050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c054: 0x0  nop
    ctx->pc = 0x27c054u;
    // NOP
    // 0x27c058: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x27c058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27c05c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c060: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Du));
    // 0x27c064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27C064u;
    {
        const bool branch_taken_0x27c064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c064) {
            ctx->pc = 0x27C0E0u;
            return;
        }
    }
    ctx->pc = 0x27C06Cu;
    // 0x27c06c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c070: 0x90221b4d  lbu         $v0, 0x1B4D($at)
    ctx->pc = 0x27c070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Du));
    // 0x27c074: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C074u;
    {
        const bool branch_taken_0x27c074 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27c074) {
            ctx->pc = 0x27C090u;
            return;
        }
    }
    ctx->pc = 0x27C07Cu;
    // 0x27c07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c080: 0x0  nop
    ctx->pc = 0x27c080u;
    // NOP
    // 0x27c084: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27c084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27c088: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27C088u;
    {
        const bool branch_taken_0x27c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c088) {
            ctx->pc = 0x27C0ACu;
            return;
        }
    }
    ctx->pc = 0x27C090u;
}
