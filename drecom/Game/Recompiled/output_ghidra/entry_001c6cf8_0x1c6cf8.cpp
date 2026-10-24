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

// Function: entry_001c6cf8
// Address: 0x1c6cf8 - 0x1c6dec
void entry_001c6cf8_0x1c6cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6cf8_0x1c6cf8");
#endif

    switch (ctx->pc) {
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d1cu: goto label_1c6d1c;
        case 0x1c6d34u: goto label_1c6d34;
        case 0x1c6d44u: goto label_1c6d44;
        case 0x1c6db8u: goto label_1c6db8;
        default: break;
    }

    ctx->pc = 0x1c6cf8u;

    // 0x1c6cf8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6cfc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6cfcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6d00: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C6D00u;
    SET_GPR_U32(ctx, 31, 0x1C6D08u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C6D00u, 0x1C6D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D08u;
label_1c6d08:
    // 0x1c6d08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6d08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6d0c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c6d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6d10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c6d10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c6d14: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C6D14u;
    SET_GPR_U32(ctx, 31, 0x1C6D1Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C6D14u, 0x1C6D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D1Cu;
label_1c6d1c:
    // 0x1c6d1c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c6d1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6d20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c6d20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6d24: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c6d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6d28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c6d28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6d2c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C6D2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D34u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C6D2Cu, 0x1C6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D34u;
label_1c6d34:
    // 0x1c6d34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1c6d34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c6d38: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1c6d38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c6d3c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C6D3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D44u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C6D3Cu, 0x1C6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D44u;
label_1c6d44:
    // 0x1c6d44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6d48: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1c6d48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1c6d4c: 0x10a00079  beqz        $a1, . + 4 + (0x79 << 2)
    ctx->pc = 0x1C6D4Cu;
    {
        const bool branch_taken_0x1c6d4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d4c) {
            ctx->pc = 0x1C6F34u;
            return;
        }
    }
    ctx->pc = 0x1C6D54u;
    // 0x1c6d54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6d58: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c6d5c: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x1c6d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x1c6d60: 0xe83024  and         $a2, $a3, $t0
    ctx->pc = 0x1c6d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1c6d64: 0x10c0006e  beqz        $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x1C6D64u;
    {
        const bool branch_taken_0x1c6d64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d64) {
            ctx->pc = 0x1C6F20u;
            return;
        }
    }
    ctx->pc = 0x1C6D6Cu;
    // 0x1c6d6c: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c6d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6d70: 0xc4e11388  lwc1        $f1, 0x1388($a3)
    ctx->pc = 0x1c6d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6d74: 0x3c084240  lui         $t0, 0x4240
    ctx->pc = 0x1c6d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16960 << 16));
    // 0x1c6d78: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c6d78u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6d7c: 0x0  nop
    ctx->pc = 0x1c6d7cu;
    // NOP
    // 0x1c6d80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6d80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6d84: 0x0  nop
    ctx->pc = 0x1c6d84u;
    // NOP
    // 0x1c6d88: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x1C6D88u;
    {
        const bool branch_taken_0x1c6d88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d88) {
            ctx->pc = 0x1C6F08u;
            return;
        }
    }
    ctx->pc = 0x1C6D90u;
    // 0x1c6d90: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1c6d94: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c6d98: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6E4Cu;
            return;
        }
    }
    ctx->pc = 0x1C6DA0u;
    // 0x1c6da0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c6da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6da4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c6da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6da8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1c6da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6dac: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1c6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6db0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1C6DB0u;
    SET_GPR_U32(ctx, 31, 0x1C6DB8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1C6DB0u, 0x1C6DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6DB8u;
label_1c6db8:
    // 0x1c6db8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1c6dbc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c6dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6dc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c6dc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6dc4: 0x0  nop
    ctx->pc = 0x1c6dc4u;
    // NOP
    // 0x1c6dc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6dcc: 0x0  nop
    ctx->pc = 0x1c6dccu;
    // NOP
    // 0x1c6dd0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6DD0u;
    {
        const bool branch_taken_0x1c6dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6dd0) {
            ctx->pc = 0x1C6DECu;
            return;
        }
    }
    ctx->pc = 0x1C6DD8u;
    // 0x1c6dd8: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1c6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1c6ddc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6ddcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6de0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6de4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6de8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1c6de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1c6decu;
}
