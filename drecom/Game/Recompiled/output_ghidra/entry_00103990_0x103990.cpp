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

// Function: entry_00103990
// Address: 0x103990 - 0x103a70
void entry_00103990_0x103990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103990_0x103990");
#endif

    ctx->pc = 0x103990u;

    // 0x103990: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x103990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x103994: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x103994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x103998: 0x46028142  mul.s       $f5, $f16, $f2
    ctx->pc = 0x103998u;
    ctx->f[5] = FPU_MUL_S(ctx->f[16], ctx->f[2]);
    // 0x10399c: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x10399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1039a0: 0x46047982  mul.s       $f6, $f15, $f4
    ctx->pc = 0x1039a0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[15], ctx->f[4]);
    // 0x1039a4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1039a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1039a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1039a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1039ac: 0x46077202  mul.s       $f8, $f14, $f7
    ctx->pc = 0x1039acu;
    ctx->f[8] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
    // 0x1039b0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1039b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1039b4: 0x46001247  neg.s       $f9, $f2
    ctx->pc = 0x1039b4u;
    ctx->f[9] = FPU_NEG_S(ctx->f[2]);
    // 0x1039b8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1039b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1039bc: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x1039bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1039c0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1039c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1039c4: 0x46047282  mul.s       $f10, $f14, $f4
    ctx->pc = 0x1039c4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
    // 0x1039c8: 0x460022c7  neg.s       $f11, $f4
    ctx->pc = 0x1039c8u;
    ctx->f[11] = FPU_NEG_S(ctx->f[4]);
    // 0x1039cc: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1039ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1039d0: 0x460278c2  mul.s       $f3, $f15, $f2
    ctx->pc = 0x1039d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[15], ctx->f[2]);
    // 0x1039d4: 0x46078302  mul.s       $f12, $f16, $f7
    ctx->pc = 0x1039d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[16], ctx->f[7]);
    // 0x1039d8: 0x0  nop
    ctx->pc = 0x1039d8u;
    // NOP
    // 0x1039dc: 0x0  nop
    ctx->pc = 0x1039dcu;
    // NOP
    // 0x1039e0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1039e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1039e4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x1039e4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x1039e8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x1039e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x1039ec: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x1039ecu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
    // 0x1039f0: 0x46077b42  mul.s       $f13, $f15, $f7
    ctx->pc = 0x1039f0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
    // 0x1039f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1039f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1039f8: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x1039f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x1039fc: 0x46048102  mul.s       $f4, $f16, $f4
    ctx->pc = 0x1039fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[16], ctx->f[4]);
    // 0x103a00: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x103a00u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
    // 0x103a04: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x103a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x103a08: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x103a08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x103a0c: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x103a0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x103a10: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x103a10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x103a14: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x103a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x103a18: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x103a18u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x103a1c: 0xe4850000  swc1        $f5, 0x0($a0)
    ctx->pc = 0x103a1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x103a20: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x103a20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x103a24: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x103a24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x103a28: 0x46060982  mul.s       $f6, $f1, $f6
    ctx->pc = 0x103a28u;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x103a2c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x103a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x103a30: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x103a30u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x103a34: 0xe4890030  swc1        $f9, 0x30($a0)
    ctx->pc = 0x103a34u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x103a38: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x103a38u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x103a3c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x103a3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x103a40: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x103a40u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x103a44: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x103a44u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x103a48: 0x460d0b42  mul.s       $f13, $f1, $f13
    ctx->pc = 0x103a48u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x103a4c: 0xe48a0024  swc1        $f10, 0x24($a0)
    ctx->pc = 0x103a4cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x103a50: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x103a50u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x103a54: 0xe48b0034  swc1        $f11, 0x34($a0)
    ctx->pc = 0x103a54u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x103a58: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x103a58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x103a5c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x103a5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x103a60: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x103a60u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x103a64: 0xe4880028  swc1        $f8, 0x28($a0)
    ctx->pc = 0x103a64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x103a68: 0x3e00008  jr          $ra
    ctx->pc = 0x103A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103A68u;
        // 0x103a6c: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103A70u;
}
