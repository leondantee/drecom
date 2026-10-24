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

// Function: entry_002cf9c8
// Address: 0x2cf9c8 - 0x2cfba8
void entry_002cf9c8_0x2cf9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf9c8_0x2cf9c8");
#endif

    switch (ctx->pc) {
        case 0x2cfa18u: goto label_2cfa18;
        case 0x2cfa44u: goto label_2cfa44;
        case 0x2cfab4u: goto label_2cfab4;
        default: break;
    }

    ctx->pc = 0x2cf9c8u;

    // 0x2cf9c8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cf9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cf9cc: 0x90234f11  lbu         $v1, 0x4F11($at)
    ctx->pc = 0x2cf9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F11u));
    // 0x2cf9d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2cf9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf9d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf9d8: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x2CF9D8u;
    {
        const bool branch_taken_0x2cf9d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cf9d8) {
            ctx->pc = 0x2CFBA8u;
            return;
        }
    }
    ctx->pc = 0x2CF9E0u;
    // 0x2cf9e0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cf9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cf9e4: 0x90274f12  lbu         $a3, 0x4F12($at)
    ctx->pc = 0x2cf9e4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x3F4F12u));
    // 0x2cf9e8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2cf9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2cf9ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf9f0: 0x1465006d  bne         $v1, $a1, . + 4 + (0x6D << 2)
    ctx->pc = 0x2CF9F0u;
    {
        const bool branch_taken_0x2cf9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf9f0) {
            ctx->pc = 0x2CFBA8u;
            return;
        }
    }
    ctx->pc = 0x2CF9F8u;
    // 0x2cf9f8: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf9fc: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x2cf9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x2cfa00: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2cfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cfa04: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x2cfa04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x2cfa08: 0x24a5e550  addiu       $a1, $a1, -0x1AB0
    ctx->pc = 0x2cfa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960464));
    // 0x2cfa0c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2cfa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2cfa10: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x2CFA10u;
    SET_GPR_U32(ctx, 31, 0x2CFA18u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x2CFA18u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CFA18u) { return; }
    ctx->pc = 0x2CFA18u;
label_2cfa18:
    // 0x2cfa18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x2cfa18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cfa1c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa20: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2cfa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2cfa24: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2cfa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfa28: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2cfa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa2c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2cfa2cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2cfa30: 0x0  nop
    ctx->pc = 0x2cfa30u;
    // NOP
    // 0x2cfa34: 0x0  nop
    ctx->pc = 0x2cfa34u;
    // NOP
    // 0x2cfa38: 0x0  nop
    ctx->pc = 0x2cfa38u;
    // NOP
    // 0x2cfa3c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2CFA3Cu;
    SET_GPR_U32(ctx, 31, 0x2CFA44u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2CFA3Cu, 0x2CFA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFA44u;
label_2cfa44:
    // 0x2cfa44: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2cfa44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cfa48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfa4c: 0xac284f14  sw          $t0, 0x4F14($at)
    ctx->pc = 0x2cfa4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3F4F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F14u, _value); } while (0);
    // 0x2cfa50: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfa54: 0x8c264f14  lw          $a2, 0x4F14($at)
    ctx->pc = 0x2cfa54u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F4F14u));
    // 0x2cfa58: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cfa5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfa60: 0xac254f14  sw          $a1, 0x4F14($at)
    ctx->pc = 0x2cfa60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F4F14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F14u, _value); } while (0);
    // 0x2cfa64: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cfa68: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cfa68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cfa6c: 0x8c290af0  lw          $t1, 0xAF0($at)
    ctx->pc = 0x2cfa6cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2cfa70: 0xc48111e0  lwc1        $f1, 0x11E0($a0)
    ctx->pc = 0x2cfa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfa74: 0xc52001b4  lwc1        $f0, 0x1B4($t1)
    ctx->pc = 0x2cfa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cfa78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfa7c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2cfa80: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2cfa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cfa84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2cfa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2cfa88: 0x8c240af0  lw          $a0, 0xAF0($at)
    ctx->pc = 0x2cfa88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x2cfa8c: 0xc4a111e4  lwc1        $f1, 0x11E4($a1)
    ctx->pc = 0x2cfa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfa90: 0xc48001b4  lwc1        $f0, 0x1B4($a0)
    ctx->pc = 0x2cfa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfa94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2cfa94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cfa98: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2cfa9c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2cfa9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cfaa0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2cfaa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2cfaa4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2cfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cfaa8: 0xc7ac0100  lwc1        $f12, 0x100($sp)
    ctx->pc = 0x2cfaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cfaac: 0xc040c60  jal         func_103180
    ctx->pc = 0x2CFAACu;
    SET_GPR_U32(ctx, 31, 0x2CFAB4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x2CFAB4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2CFAB4u) { return; }
    ctx->pc = 0x2CFAB4u;
label_2cfab4:
    // 0x2cfab4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2cfab4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2cfab8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2cfab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cfabc: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2cfabcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfac0: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2cfac4: 0x7d270000  sq          $a3, 0x0($t1)
    ctx->pc = 0x2cfac4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 7));
    // 0x2cfac8: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x2cfac8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2cfacc: 0x79570000  lq          $s7, 0x0($t2)
    ctx->pc = 0x2cfaccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2cfad0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2cfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2cfad4: 0x7c770000  sq          $s7, 0x0($v1)
    ctx->pc = 0x2cfad4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 23));
    // 0x2cfad8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x2cfad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfadc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfae4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2cfae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2cfae8: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x2cfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfaec: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2cfaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfaf0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cfaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cfaf4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cfaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2cfaf8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2cfaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfafc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2cfafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cfb04: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2cfb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2cfb08: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x2cfb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb10: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F20u, _value); } while (0); }
    // 0x2cfb14: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb18: 0xc4214f20  lwc1        $f1, 0x4F20($at)
    ctx->pc = 0x2cfb18u;
    { uint32_t bits = FAST_READ32(0x3F4F20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfb1c: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x2cfb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x2cfb20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfb20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfb24: 0x0  nop
    ctx->pc = 0x2cfb24u;
    // NOP
    // 0x2cfb28: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfb2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb30: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F20u, _value); } while (0); }
    // 0x2cfb34: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2cfb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
    // 0x2cfb38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2cfb38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cfb3c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb40: 0xc4204f20  lwc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb40u;
    { uint32_t bits = FAST_READ32(0x3F4F20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cfb44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cfb48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb4c: 0xe4204f20  swc1        $f0, 0x4F20($at)
    ctx->pc = 0x2cfb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F20u, _value); } while (0); }
    // 0x2cfb50: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2cfb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb54: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb58: 0xe4204f18  swc1        $f0, 0x4F18($at)
    ctx->pc = 0x2cfb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F18u, _value); } while (0); }
    // 0x2cfb5c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb60: 0xc4214f18  lwc1        $f1, 0x4F18($at)
    ctx->pc = 0x2cfb60u;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfb64: 0x3c0344e0  lui         $v1, 0x44E0
    ctx->pc = 0x2cfb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17632 << 16));
    // 0x2cfb68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cfb68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfb6c: 0x0  nop
    ctx->pc = 0x2cfb6cu;
    // NOP
    // 0x2cfb70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfb74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb78: 0xe4204f18  swc1        $f0, 0x4F18($at)
    ctx->pc = 0x2cfb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F18u, _value); } while (0); }
    // 0x2cfb7c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cfb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfb80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb84: 0xe4204f1c  swc1        $f0, 0x4F1C($at)
    ctx->pc = 0x2cfb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F1Cu, _value); } while (0); }
    // 0x2cfb88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfb88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfb8c: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x2cfb8cu;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfb90: 0x3c1644e0  lui         $s6, 0x44E0
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17632 << 16));
    // 0x2cfb94: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x2cfb94u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cfb98: 0x0  nop
    ctx->pc = 0x2cfb98u;
    // NOP
    // 0x2cfb9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cfb9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cfba0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2cfba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2cfba4: 0xe4204f1c  swc1        $f0, 0x4F1C($at)
    ctx->pc = 0x2cfba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F4F1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F4F1Cu, _value); } while (0); }
    ctx->pc = 0x2cfba8u;
}
