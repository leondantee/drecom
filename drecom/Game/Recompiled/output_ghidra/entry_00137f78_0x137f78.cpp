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

// Function: entry_00137f78
// Address: 0x137f78 - 0x138068
void entry_00137f78_0x137f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137f78_0x137f78");
#endif

    switch (ctx->pc) {
        case 0x137fc0u: goto label_137fc0;
        case 0x137fe0u: goto label_137fe0;
        case 0x137ffcu: goto label_137ffc;
        case 0x138014u: goto label_138014;
        case 0x13802cu: goto label_13802c;
        default: break;
    }

    ctx->pc = 0x137f78u;

    // 0x137f78: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137f7c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x137f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x137f80: 0x24634ea8  addiu       $v1, $v1, 0x4EA8
    ctx->pc = 0x137f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20136));
    // 0x137f84: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x137f88: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x137f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137f8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x137f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x137f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137f98: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x137f98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137f9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x137f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x137fa0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x137fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x137fa4: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x137fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x137fa8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x137fac: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x137facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137fb0: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x137fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137fb4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x137fb8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x137FB8u;
    SET_GPR_U32(ctx, 31, 0x137FC0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x137FB8u, 0x137FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FC0u;
label_137fc0:
    // 0x137fc0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x137fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x137fc4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x137fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137fc8: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x137fc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x137fcc: 0x26340030  addiu       $s4, $s1, 0x30
    ctx->pc = 0x137fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x137fd0: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x137fd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x137fd4: 0x24660120  addiu       $a2, $v1, 0x120
    ctx->pc = 0x137fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x137fd8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x137FD8u;
    SET_GPR_U32(ctx, 31, 0x137FE0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x137FD8u, 0x137FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FE0u;
label_137fe0:
    // 0x137fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x137fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137fe4: 0x0  nop
    ctx->pc = 0x137fe4u;
    // NOP
    // 0x137fe8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x137fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x137fec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137ff0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x137ff4: 0xc040c24  jal         func_103090
    ctx->pc = 0x137FF4u;
    SET_GPR_U32(ctx, 31, 0x137FFCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x137FFCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x137FFCu) { return; }
    ctx->pc = 0x137FFCu;
label_137ffc:
    // 0x137ffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138000: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x138000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138004: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x138004u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x138008: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x138008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13800c: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x13800Cu;
    SET_GPR_U32(ctx, 31, 0x138014u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x138014u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x138014u) { return; }
    ctx->pc = 0x138014u;
label_138014:
    // 0x138014: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x138014u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x138018: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13801c: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x13801cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x138020: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x138020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x138024: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x138024u;
    SET_GPR_U32(ctx, 31, 0x13802Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x138024u, 0x13802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13802Cu;
label_13802c:
    // 0x13802c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x13802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138030: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x138030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138034: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x138038: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x13803c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x13803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138040: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x138040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x138044: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x138044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138048: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138048u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13804c: 0x0  nop
    ctx->pc = 0x13804cu;
    // NOP
    // 0x138050: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x138050u;
    {
        const bool branch_taken_0x138050 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138050) {
            ctx->pc = 0x138068u;
            return;
        }
    }
    ctx->pc = 0x138058u;
    // 0x138058: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13805c: 0xc4a00124  lwc1        $f0, 0x124($a1)
    ctx->pc = 0x13805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138060: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x138060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x138064: 0x0  nop
    ctx->pc = 0x138064u;
    // NOP
    ctx->pc = 0x138068u;
}
