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

// Function: entry_001e9954
// Address: 0x1e9954 - 0x1e9a80
void entry_001e9954_0x1e9954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9954_0x1e9954");
#endif

    switch (ctx->pc) {
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a74u: goto label_1e9a74;
        default: break;
    }

    ctx->pc = 0x1e9954u;

    // 0x1e9954: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1e9954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1e9958: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1E9958u;
    SET_GPR_U32(ctx, 31, 0x1E9960u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1E9960u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E9960u) { return; }
    ctx->pc = 0x1E9960u;
label_1e9960:
    // 0x1e9960: 0x8fb10198  lw          $s1, 0x198($sp)
    ctx->pc = 0x1e9960u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9964: 0xc6211200  lwc1        $f1, 0x1200($s1)
    ctx->pc = 0x1e9964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e9968: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e996c: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1e996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9970: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e9970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e9974: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e9974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e9978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e9978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e997c: 0x0  nop
    ctx->pc = 0x1e997cu;
    // NOP
    // 0x1e9980: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e9980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e9984: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9988: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x1e9988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e998c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e998cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e9990: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1e9990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1e9994: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e9994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9998: 0xc4411204  lwc1        $f1, 0x1204($v0)
    ctx->pc = 0x1e9998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e999c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1e999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1e99a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e99a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e99a4: 0x0  nop
    ctx->pc = 0x1e99a4u;
    // NOP
    // 0x1e99a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e99a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e99ac: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x1e99acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x1e99b0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x1e99b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e99b4: 0xc4611208  lwc1        $f1, 0x1208($v1)
    ctx->pc = 0x1e99b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e99b8: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x1e99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e99bc: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1e99bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e99c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e99c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e99c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e99c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e99c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e99c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e99cc: 0x0  nop
    ctx->pc = 0x1e99ccu;
    // NOP
    // 0x1e99d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1e99d0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e99d4: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e99d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e99d8: 0xc4801208  lwc1        $f0, 0x1208($a0)
    ctx->pc = 0x1e99d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e99dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e99dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e99e0: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x1e99e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1e99e4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1e99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1e99e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1e99e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e99ec: 0x0  nop
    ctx->pc = 0x1e99ecu;
    // NOP
    // 0x1e99f0: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x1e99f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x1e99f4: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x1e99f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x1e99f8: 0x34a30fdb  ori         $v1, $a1, 0xFDB
    ctx->pc = 0x1e99f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1e99fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e99fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9a00: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9a04: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9a04u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e9a08: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E9A08u;
    SET_GPR_U32(ctx, 31, 0x1E9A10u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9A08u, 0x1E9A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A10u;
label_1e9a10:
    // 0x1e9a10: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e9a14: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x1e9a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1e9a18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1e9a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1e9a1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1e9a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1e9a20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e9a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e9a24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1e9a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1e9a28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e9a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e9a2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e9a30: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1e9a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e9a34: 0x34820206  ori         $v0, $a0, 0x206
    ctx->pc = 0x1e9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)518);
    // 0x1e9a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e9a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9a3c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1e9a40: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1e9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e9a44: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1e9a44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9a48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9a48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9a4c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1E9A4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A54u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1E9A4Cu, 0x1E9A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A54u;
label_1e9a54:
    // 0x1e9a54: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e9a54u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9a58: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x1e9a5c: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1e9a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1e9a60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e9a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e9a64: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9a68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1e9a68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e9a6c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1E9A6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9A74u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1E9A6Cu, 0x1E9A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A74u;
label_1e9a74:
    // 0x1e9a74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1e9a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1e9a78: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1E9A78u;
    {
        const bool branch_taken_0x1e9a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a78) {
            ctx->pc = 0x1E9C30u;
            return;
        }
    }
    ctx->pc = 0x1E9A80u;
}
