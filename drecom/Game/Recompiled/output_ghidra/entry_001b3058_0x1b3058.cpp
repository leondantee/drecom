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

// Function: entry_001b3058
// Address: 0x1b3058 - 0x1b3138
void entry_001b3058_0x1b3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3058_0x1b3058");
#endif

    switch (ctx->pc) {
        case 0x1b3098u: goto label_1b3098;
        case 0x1b30bcu: goto label_1b30bc;
        case 0x1b30f8u: goto label_1b30f8;
        case 0x1b311cu: goto label_1b311c;
        default: break;
    }

    ctx->pc = 0x1b3058u;

    // 0x1b3058: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1b3058u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b305c: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3060: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3064: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3068: 0x0  nop
    ctx->pc = 0x1b3068u;
    // NOP
    // 0x1b306c: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1B306Cu;
    {
        const bool branch_taken_0x1b306c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b306c) {
            ctx->pc = 0x1B3138u;
            return;
        }
    }
    ctx->pc = 0x1B3074u;
    // 0x1b3074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3078: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x1b3078u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b307c: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1b307cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x1b3080: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b3084: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b3084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b3088: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b3088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b308c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x1b308cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1b3090: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3090u;
    SET_GPR_U32(ctx, 31, 0x1B3098u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3090u, 0x1B3098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3098u;
label_1b3098:
    // 0x1b3098: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b3098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b309c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b30a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30a4: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b30a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30a8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b30a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b30acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b30b0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b30b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b30b4: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B30B4u;
    SET_GPR_U32(ctx, 31, 0x1B30BCu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B30B4u, 0x1B30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30BCu;
label_1b30bc:
    // 0x1b30bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b30bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b30c0: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b30c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30c4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b30c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b30c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b30c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b30cc: 0x0  nop
    ctx->pc = 0x1b30ccu;
    // NOP
    // 0x1b30d0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B30D0u;
    {
        const bool branch_taken_0x1b30d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b30d0) {
            ctx->pc = 0x1B3138u;
            return;
        }
    }
    ctx->pc = 0x1B30D8u;
    // 0x1b30d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b30d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b30dc: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x1b30dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1b30e0: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x1b30e0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x1b30e4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1b30e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b30e8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b30ec: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1b30ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b30f0: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B30F0u;
    SET_GPR_U32(ctx, 31, 0x1B30F8u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B30F0u, 0x1B30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B30F8u;
label_1b30f8:
    // 0x1b30f8: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1b30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b30fc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1b30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3100: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1b3100u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3104: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x1b3104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3108: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1b3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b310c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b310cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b3110: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1b3110u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1b3114: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1B3114u;
    SET_GPR_U32(ctx, 31, 0x1B311Cu);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1B3114u, 0x1B311Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B311Cu;
label_1b311c:
    // 0x1b311c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b311cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b3120: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x1b3120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3124: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b3124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3128: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b312c: 0x0  nop
    ctx->pc = 0x1b312cu;
    // NOP
    // 0x1b3130: 0x450000d2  bc1f        . + 4 + (0xD2 << 2)
    ctx->pc = 0x1B3130u;
    {
        const bool branch_taken_0x1b3130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3130) {
            ctx->pc = 0x1B347Cu;
            return;
        }
    }
    ctx->pc = 0x1B3138u;
}
