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

// Function: entry_00207ac0
// Address: 0x207ac0 - 0x207cb8
void entry_00207ac0_0x207ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00207ac0_0x207ac0");
#endif

    switch (ctx->pc) {
        case 0x207b48u: goto label_207b48;
        case 0x207b7cu: goto label_207b7c;
        case 0x207be4u: goto label_207be4;
        case 0x207c00u: goto label_207c00;
        case 0x207c2cu: goto label_207c2c;
        case 0x207c38u: goto label_207c38;
        default: break;
    }

    ctx->pc = 0x207ac0u;

    // 0x207ac0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ac4: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x207ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x207ac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x207acc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x207accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x207ad0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x207AD0u;
    {
        const bool branch_taken_0x207ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207ad0) {
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207AD8u;
    // 0x207ad8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207adc: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x207adcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x207ae0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207ae4: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x207ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x207ae8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207aec: 0x8462127a  lh          $v0, 0x127A($v1)
    ctx->pc = 0x207aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x207af0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x207af4: 0xa462127a  sh          $v0, 0x127A($v1)
    ctx->pc = 0x207af4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x207af8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207afc: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x207afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x207b00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x207b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207b04: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x207b04u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x207b08: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x207b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x207b0c: 0x1462006a  bne         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x207B0Cu;
    {
        const bool branch_taken_0x207b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207b0c) {
            ctx->pc = 0x207CB8u;
            return;
        }
    }
    ctx->pc = 0x207B14u;
    // 0x207b14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b18: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x207b18u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x207b1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b20: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x207b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x207b24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x207b24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207b28: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207b2c: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x207b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207b30: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x207b30u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192C0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192C0u, _value); } while (0);
    // 0x207b34: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b38: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x207b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207b3c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x207b40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x207B40u;
    SET_GPR_U32(ctx, 31, 0x207B48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x207B40u, 0x207B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B48u;
label_207b48:
    // 0x207b48: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x207b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x207b4c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x207b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x207b50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x207b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x207b54: 0x0  nop
    ctx->pc = 0x207b54u;
    // NOP
    // 0x207b58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x207b58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x207b5c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x207b60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207b60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207b64: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x207b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x207b68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207b6c: 0x24449280  addiu       $a0, $v0, -0x6D80
    ctx->pc = 0x207b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x207b70: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x207b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x207b74: 0xc067844  jal         func_19E110
    ctx->pc = 0x207B74u;
    SET_GPR_U32(ctx, 31, 0x207B7Cu);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x207B74u, 0x207B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B7Cu;
label_207b7c:
    // 0x207b7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207b80: 0x0  nop
    ctx->pc = 0x207b80u;
    // NOP
    // 0x207b84: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x207b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x207b88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x207b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x207b8c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x207b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x207b90: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x207b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207b94: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x207b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x207b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207b9c: 0x0  nop
    ctx->pc = 0x207b9cu;
    // NOP
    // 0x207ba0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x207ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x207ba4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x207ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x207ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207bac: 0x0  nop
    ctx->pc = 0x207bacu;
    // NOP
    // 0x207bb0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x207bb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x207bb4: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x207bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x207bb8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x207bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x207bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207bc0: 0x0  nop
    ctx->pc = 0x207bc0u;
    // NOP
    // 0x207bc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x207bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x207bc8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x207bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x207bcc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x207bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bd0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207bd4: 0x24459280  addiu       $a1, $v0, -0x6D80
    ctx->pc = 0x207bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939264));
    // 0x207bd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x207bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bdc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x207BDCu;
    SET_GPR_U32(ctx, 31, 0x207BE4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x207BE4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207BE4u) { return; }
    ctx->pc = 0x207BE4u;
label_207be4:
    // 0x207be4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207be8: 0x244492c0  addiu       $a0, $v0, -0x6D40
    ctx->pc = 0x207be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207bec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207bf0: 0x244592c0  addiu       $a1, $v0, -0x6D40
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207bf4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x207bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207bf8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x207BF8u;
    SET_GPR_U32(ctx, 31, 0x207C00u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x207C00u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207C00u) { return; }
    ctx->pc = 0x207C00u;
label_207c00:
    // 0x207c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x207c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c04: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c08: 0xe42092c4  swc1        $f0, -0x6D3C($at)
    ctx->pc = 0x207c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192C4u, _value); } while (0); }
    // 0x207c0c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x207c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207c10: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x207c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x207c14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x207c14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x207c18: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c1c: 0x244692c0  addiu       $a2, $v0, -0x6D40
    ctx->pc = 0x207c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207c20: 0x246700d0  addiu       $a3, $v1, 0xD0
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x207c24: 0xc0bb3e8  jal         func_2ECFA0
    ctx->pc = 0x207C24u;
    SET_GPR_U32(ctx, 31, 0x207C2Cu);
    ctx->pc = 0x2ECFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECFA0u, 0x207C24u, 0x207C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C2Cu;
label_207c2c:
    // 0x207c2c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x207c30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x207C30u;
    SET_GPR_U32(ctx, 31, 0x207C38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x207C38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x207C38u) { return; }
    ctx->pc = 0x207C38u;
label_207c38:
    // 0x207c38: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x207c3c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c40: 0xac2292e0  sw          $v0, -0x6D20($at)
    ctx->pc = 0x207c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6192E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192E0u, _value); } while (0);
    // 0x207c44: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c48: 0x244292c0  addiu       $v0, $v0, -0x6D40
    ctx->pc = 0x207c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939328));
    // 0x207c4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x207c4cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x6192C0u));
    // 0x207c50: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207c54: 0x244292f0  addiu       $v0, $v0, -0x6D10
    ctx->pc = 0x207c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939376));
    // 0x207c58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x207c58u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x6192F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x6192F0u, _value); } while (0);
    // 0x207c5c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c60: 0xc42192f4  lwc1        $f1, -0x6D0C($at)
    ctx->pc = 0x207c60u;
    { uint32_t bits = FAST_READ32(0x6192F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x207c64: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x207c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c6c: 0x0  nop
    ctx->pc = 0x207c6cu;
    // NOP
    // 0x207c70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x207c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x207c74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c78: 0xe42092f4  swc1        $f0, -0x6D0C($at)
    ctx->pc = 0x207c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6192F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6192F4u, _value); } while (0); }
    // 0x207c7c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x207c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x207c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x207c84: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c88: 0xe4209300  swc1        $f0, -0x6D00($at)
    ctx->pc = 0x207c88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x619300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x619300u, _value); } while (0); }
    // 0x207c8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c90: 0xa4209304  sh          $zero, -0x6CFC($at)
    ctx->pc = 0x207c90u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619304u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619304u, _value); } while (0);
    // 0x207c94: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207c98: 0xa0209306  sb          $zero, -0x6CFA($at)
    ctx->pc = 0x207c98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619306u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619306u, _value); } while (0);
    // 0x207c9c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x207c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x207ca0: 0xa0209307  sb          $zero, -0x6CF9($at)
    ctx->pc = 0x207ca0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x619307u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x619307u, _value); } while (0);
    // 0x207ca4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x207ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x207ca8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x207ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x207cac: 0x244592e0  addiu       $a1, $v0, -0x6D20
    ctx->pc = 0x207cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939360));
    // 0x207cb0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x207CB0u;
    SET_GPR_U32(ctx, 31, 0x207CB8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x207CB0u, 0x207CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CB8u;
}
