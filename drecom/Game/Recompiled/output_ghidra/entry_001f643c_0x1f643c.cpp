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

// Function: entry_001f643c
// Address: 0x1f643c - 0x1f6520
void entry_001f643c_0x1f643c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f643c_0x1f643c");
#endif

    switch (ctx->pc) {
        case 0x1f644cu: goto label_1f644c;
        case 0x1f64e4u: goto label_1f64e4;
        case 0x1f6518u: goto label_1f6518;
        default: break;
    }

    ctx->pc = 0x1f643cu;

    // 0x1f643c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f6440: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f6440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f6444: 0xc040c24  jal         func_103090
    ctx->pc = 0x1F6444u;
    SET_GPR_U32(ctx, 31, 0x1F644Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x1F644Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F644Cu) { return; }
    ctx->pc = 0x1F644Cu;
label_1f644c:
    // 0x1f644c: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1f644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1f6450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6454: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6458: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f645c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6460: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f6460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6464: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x1f6464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x1f6468: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1f6468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1f646c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f646cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6470: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6474: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f6474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f6478: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f647c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f647cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f6480: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x1f6480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x1f6484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6488: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1f6488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f648c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1f648cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f6490: 0x2402ff47  addiu       $v0, $zero, -0xB9
    ctx->pc = 0x1f6490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967111));
    // 0x1f6494: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6498: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1f6498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1f649c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f649cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64a0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f64a4: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f64a8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1f64a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1f64ac: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1f64acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1f64b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f64b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f64b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64b8: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1f64b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x1f64bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64c0: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1f64c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x1f64c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1f64c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1f64c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1f64c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1f64cc: 0x2442fff6  addiu       $v0, $v0, -0xA
    ctx->pc = 0x1f64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
    // 0x1f64d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f64d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f64d4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f64d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f64d8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x1f64d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f64dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F64DCu;
    SET_GPR_U32(ctx, 31, 0x1F64E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F64DCu, 0x1F64E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F64E4u;
label_1f64e4:
    // 0x1f64e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f64e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f64e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f64e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f64ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F64ECu;
    {
        const bool branch_taken_0x1f64ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f64ec) {
            ctx->pc = 0x1F6520u;
            return;
        }
    }
    ctx->pc = 0x1F64F4u;
    // 0x1f64f4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1f64f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1f64f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1f64f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1f64fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f64fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6500: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f6500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6504: 0x24040521  addiu       $a0, $zero, 0x521
    ctx->pc = 0x1f6504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
    // 0x1f6508: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f6508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f650c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1f650cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f6510: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1F6510u;
    SET_GPR_U32(ctx, 31, 0x1F6518u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1F6510u, 0x1F6518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6518u;
label_1f6518:
    // 0x1f6518: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F6518u;
    {
        const bool branch_taken_0x1f6518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6518) {
            ctx->pc = 0x1F6544u;
            return;
        }
    }
    ctx->pc = 0x1F6520u;
}
