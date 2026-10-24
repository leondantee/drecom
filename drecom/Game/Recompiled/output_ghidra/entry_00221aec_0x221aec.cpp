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

// Function: entry_00221aec
// Address: 0x221aec - 0x221c1c
void entry_00221aec_0x221aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00221aec_0x221aec");
#endif

    switch (ctx->pc) {
        case 0x221af8u: goto label_221af8;
        case 0x221bacu: goto label_221bac;
        case 0x221bf4u: goto label_221bf4;
        case 0x221c10u: goto label_221c10;
        default: break;
    }

    ctx->pc = 0x221aecu;

    // 0x221aec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x221aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x221af0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x221AF0u;
    SET_GPR_U32(ctx, 31, 0x221AF8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x221AF8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x221AF8u) { return; }
    ctx->pc = 0x221AF8u;
label_221af8:
    // 0x221af8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x221af8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221afc: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x221afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b00: 0xc4611200  lwc1        $f1, 0x1200($v1)
    ctx->pc = 0x221b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221b04: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b08: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x221b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221b0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x221b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221b10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x221b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b18: 0x0  nop
    ctx->pc = 0x221b18u;
    // NOP
    // 0x221b1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221b1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x221b20: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b24: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x221b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x221b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x221b2c: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x221b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x221b30: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b34: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x221b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221b38: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x221b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x221b3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b40: 0x0  nop
    ctx->pc = 0x221b40u;
    // NOP
    // 0x221b44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x221b44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221b48: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x221b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x221b4c: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x221b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b50: 0xc4811208  lwc1        $f1, 0x1208($a0)
    ctx->pc = 0x221b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221b54: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x221b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b58: 0xc4c00128  lwc1        $f0, 0x128($a2)
    ctx->pc = 0x221b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221b5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x221b5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x221b60: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x221b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x221b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x221b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b68: 0x0  nop
    ctx->pc = 0x221b68u;
    // NOP
    // 0x221b6c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x221b6cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x221b70: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221b74: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x221b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221b78: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x221b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x221b7c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x221b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x221b80: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x221b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x221b84: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x221b84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x221b88: 0x0  nop
    ctx->pc = 0x221b88u;
    // NOP
    // 0x221b8c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x221b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x221b90: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x221b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x221b94: 0x34460fdb  ori         $a2, $v0, 0xFDB
    ctx->pc = 0x221b94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x221b98: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x221b98u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221b9c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x221b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221ba0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x221ba0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x221ba4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x221BA4u;
    SET_GPR_U32(ctx, 31, 0x221BACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221BA4u, 0x221BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BACu;
label_221bac:
    // 0x221bac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x221bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x221bb0: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x221bb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x221bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x221bb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x221bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x221bbc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x221bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x221bc0: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x221bc4: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x221bc8: 0x432024  and         $a0, $v0, $v1
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x221bcc: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x221bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x221bd0: 0x34c20206  ori         $v0, $a2, 0x206
    ctx->pc = 0x221bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)518);
    // 0x221bd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x221bd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221bd8: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x221bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x221bdc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x221bdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x221be0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x221be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221be4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x221be4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221be8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x221be8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x221bec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x221BECu;
    SET_GPR_U32(ctx, 31, 0x221BF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x221BECu, 0x221BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221BF4u;
label_221bf4:
    // 0x221bf4: 0x3c114049  lui         $s1, 0x4049
    ctx->pc = 0x221bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16457 << 16));
    // 0x221bf8: 0x36220fdb  ori         $v0, $s1, 0xFDB
    ctx->pc = 0x221bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4059);
    // 0x221bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x221bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x221c00: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x221c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221c04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x221c04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x221c08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x221C08u;
    SET_GPR_U32(ctx, 31, 0x221C10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x221C08u, 0x221C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221C10u;
label_221c10:
    // 0x221c10: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x221c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x221c14: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x221C14u;
    {
        const bool branch_taken_0x221c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221c14) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221C1Cu;
}
