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

// Function: entry_002a9cb4
// Address: 0x2a9cb4 - 0x2a9ddc
void entry_002a9cb4_0x2a9cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a9cb4_0x2a9cb4");
#endif

    switch (ctx->pc) {
        case 0x2a9d14u: goto label_2a9d14;
        case 0x2a9d34u: goto label_2a9d34;
        case 0x2a9d54u: goto label_2a9d54;
        case 0x2a9d74u: goto label_2a9d74;
        case 0x2a9d94u: goto label_2a9d94;
        case 0x2a9db4u: goto label_2a9db4;
        default: break;
    }

    ctx->pc = 0x2a9cb4u;

    // 0x2a9cb4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2a9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2a9cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cbc: 0x0  nop
    ctx->pc = 0x2a9cbcu;
    // NOP
    // 0x2a9cc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9cc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9cc8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2a9cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a9ccc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cd4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9cd8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2a9cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2a9cdc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a9cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9ce4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9ce8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2a9ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2a9cec: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a9cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9cf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9cf8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2a9cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2a9cfc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2a9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2a9d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9d04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9d08: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2a9d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2a9d0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9D0Cu, 0x2A9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D14u;
label_2a9d14:
    // 0x2a9d14: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a9d18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d1c: 0x0  nop
    ctx->pc = 0x2a9d1cu;
    // NOP
    // 0x2a9d20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9d24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9d28: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2a9d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x2a9d2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9D2Cu, 0x2A9D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D34u;
label_2a9d34:
    // 0x2a9d34: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a9d38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d3c: 0x0  nop
    ctx->pc = 0x2a9d3cu;
    // NOP
    // 0x2a9d40: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9d44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9d48: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2a9d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x2a9d4c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9D4Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D54u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9D4Cu, 0x2A9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D54u;
label_2a9d54:
    // 0x2a9d54: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2a9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2a9d58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9d58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d5c: 0x0  nop
    ctx->pc = 0x2a9d5cu;
    // NOP
    // 0x2a9d60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9d64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9d68: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2a9d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2a9d6c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9D6Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D74u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9D6Cu, 0x2A9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D74u;
label_2a9d74:
    // 0x2a9d74: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2a9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2a9d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d7c: 0x0  nop
    ctx->pc = 0x2a9d7cu;
    // NOP
    // 0x2a9d80: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9d84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9d88: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2a9d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2a9d8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A9D94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9D8Cu, 0x2A9D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9D94u;
label_2a9d94:
    // 0x2a9d94: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x2a9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x2a9d98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a9d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9d9c: 0x0  nop
    ctx->pc = 0x2a9d9cu;
    // NOP
    // 0x2a9da0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9da0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9da4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9da8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x2a9da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x2a9dac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A9DACu;
    SET_GPR_U32(ctx, 31, 0x2A9DB4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A9DACu, 0x2A9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9DB4u;
label_2a9db4:
    // 0x2a9db4: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x2a9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x2a9db8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a9db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a9dbc: 0x0  nop
    ctx->pc = 0x2a9dbcu;
    // NOP
    // 0x2a9dc0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a9dc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9dc4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2a9dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9dc8: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x2a9dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
    // 0x2a9dcc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2a9dccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9dd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a9dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9DD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9DDCu;
}
