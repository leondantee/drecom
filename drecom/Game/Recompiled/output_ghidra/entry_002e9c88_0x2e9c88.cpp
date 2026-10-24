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

// Function: entry_002e9c88
// Address: 0x2e9c88 - 0x2e9f08
void entry_002e9c88_0x2e9c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e9c88_0x2e9c88");
#endif

    switch (ctx->pc) {
        case 0x2e9cf8u: goto label_2e9cf8;
        case 0x2e9d1cu: goto label_2e9d1c;
        case 0x2e9d40u: goto label_2e9d40;
        case 0x2e9d64u: goto label_2e9d64;
        case 0x2e9da0u: goto label_2e9da0;
        case 0x2e9dd0u: goto label_2e9dd0;
        case 0x2e9eccu: goto label_2e9ecc;
        case 0x2e9eecu: goto label_2e9eec;
        default: break;
    }

    ctx->pc = 0x2e9c88u;

    // 0x2e9c88: 0x3c130054  lui         $s3, 0x54
    ctx->pc = 0x2e9c88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
    // 0x2e9c8c: 0x2663a610  addiu       $v1, $s3, -0x59F0
    ctx->pc = 0x2e9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294944272));
    // 0x2e9c90: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x2e9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x2e9c94: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2e9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2e9c98: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2e9c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9c9c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2e9c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2e9ca0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2e9ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2e9ca4: 0x12030098  beq         $s0, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2E9CA4u;
    {
        const bool branch_taken_0x2e9ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e9ca4) {
            ctx->pc = 0x2E9F08u;
            return;
        }
    }
    ctx->pc = 0x2E9CACu;
    // 0x2e9cac: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x2e9cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9cb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9cb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cb4: 0x0  nop
    ctx->pc = 0x2e9cb4u;
    // NOP
    // 0x2e9cb8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9cbc: 0x3c034133  lui         $v1, 0x4133
    ctx->pc = 0x2e9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16691 << 16));
    // 0x2e9cc0: 0x34623333  ori         $v0, $v1, 0x3333
    ctx->pc = 0x2e9cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e9cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cc8: 0x0  nop
    ctx->pc = 0x2e9cc8u;
    // NOP
    // 0x2e9ccc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9cd0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2e9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2e9cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9cd8: 0x0  nop
    ctx->pc = 0x2e9cd8u;
    // NOP
    // 0x2e9cdc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9ce0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2e9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2e9ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9ce8: 0x0  nop
    ctx->pc = 0x2e9ce8u;
    // NOP
    // 0x2e9cec: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9cf0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9CF0u;
    SET_GPR_U32(ctx, 31, 0x2E9CF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9CF0u, 0x2E9CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9CF8u;
label_2e9cf8:
    // 0x2e9cf8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d00: 0x0  nop
    ctx->pc = 0x2e9d00u;
    // NOP
    // 0x2e9d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d08: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d10: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2e9d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2e9d14: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D14u;
    SET_GPR_U32(ctx, 31, 0x2E9D1Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D14u, 0x2E9D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D1Cu;
label_2e9d1c:
    // 0x2e9d1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d24: 0x0  nop
    ctx->pc = 0x2e9d24u;
    // NOP
    // 0x2e9d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d2c: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d34: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2e9d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2e9d38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D38u;
    SET_GPR_U32(ctx, 31, 0x2E9D40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D38u, 0x2E9D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D40u;
label_2e9d40:
    // 0x2e9d40: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9d44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d48: 0x0  nop
    ctx->pc = 0x2e9d48u;
    // NOP
    // 0x2e9d4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d50: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d58: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2e9d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2e9d5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E9D64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9D5Cu, 0x2E9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9D64u;
label_2e9d64:
    // 0x2e9d64: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2e9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2e9d68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9d6c: 0x0  nop
    ctx->pc = 0x2e9d6cu;
    // NOP
    // 0x2e9d70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e9d70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9d74: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9d78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e9d78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e9d7c: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2e9d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2e9d80: 0x3c023f7c  lui         $v0, 0x3F7C
    ctx->pc = 0x2e9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16252 << 16));
    // 0x2e9d84: 0x344228f6  ori         $v0, $v0, 0x28F6
    ctx->pc = 0x2e9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10486);
    // 0x2e9d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9d8c: 0x0  nop
    ctx->pc = 0x2e9d8cu;
    // NOP
    // 0x2e9d90: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2e9d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2e9d94: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2e9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9d98: 0xc0453e6  jal         func_114F98
    ctx->pc = 0x2E9D98u;
    SET_GPR_U32(ctx, 31, 0x2E9DA0u);
    ctx->pc = 0x114F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114F98u, 0x2E9D98u, 0x2E9DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DA0u;
label_2e9da0:
    // 0x2e9da0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e9da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e9da4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9da8: 0x0  nop
    ctx->pc = 0x2e9da8u;
    // NOP
    // 0x2e9dac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9db0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2e9db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2e9db4: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x2e9db4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9db8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2e9db8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dbc: 0x0  nop
    ctx->pc = 0x2e9dbcu;
    // NOP
    // 0x2e9dc0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2e9dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2e9dc4: 0xc7ac00bc  lwc1        $f12, 0xBC($sp)
    ctx->pc = 0x2e9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e9dc8: 0xc0454c4  jal         func_115310
    ctx->pc = 0x2E9DC8u;
    SET_GPR_U32(ctx, 31, 0x2E9DD0u);
    ctx->pc = 0x115310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115310u, 0x2E9DC8u, 0x2E9DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9DD0u;
label_2e9dd0:
    // 0x2e9dd0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2e9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x2e9dd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9dd8: 0x0  nop
    ctx->pc = 0x2e9dd8u;
    // NOP
    // 0x2e9ddc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9de0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2e9de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2e9de4: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e9de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e9de8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9de8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dec: 0x0  nop
    ctx->pc = 0x2e9decu;
    // NOP
    // 0x2e9df0: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x2e9df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x2e9df4: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x2e9df4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x2e9df8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2e9df8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9dfc: 0x0  nop
    ctx->pc = 0x2e9dfcu;
    // NOP
    // 0x2e9e00: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x2e9e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x2e9e04: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2e9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2e9e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e0c: 0x0  nop
    ctx->pc = 0x2e9e0cu;
    // NOP
    // 0x2e9e10: 0xe6000068  swc1        $f0, 0x68($s0)
    ctx->pc = 0x2e9e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
    // 0x2e9e14: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e9e18: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e9e1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e20: 0x0  nop
    ctx->pc = 0x2e9e20u;
    // NOP
    // 0x2e9e24: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2e9e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2e9e28: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x2e9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x2e9e2c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x2e9e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x2e9e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e34: 0x0  nop
    ctx->pc = 0x2e9e34u;
    // NOP
    // 0x2e9e38: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2e9e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2e9e3c: 0x3c04425c  lui         $a0, 0x425C
    ctx->pc = 0x2e9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16988 << 16));
    // 0x2e9e40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e9e40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e44: 0x0  nop
    ctx->pc = 0x2e9e44u;
    // NOP
    // 0x2e9e48: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2e9e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2e9e4c: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x2e9e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x2e9e50: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e9e50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e54: 0x0  nop
    ctx->pc = 0x2e9e54u;
    // NOP
    // 0x2e9e58: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2e9e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2e9e5c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2e9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2e9e60: 0x34626666  ori         $v0, $v1, 0x6666
    ctx->pc = 0x2e9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2e9e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e9e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9e68: 0x0  nop
    ctx->pc = 0x2e9e68u;
    // NOP
    // 0x2e9e6c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x2e9e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x2e9e70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9e74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9e78: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2e9e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2e9e7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e9e80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e9e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9e88: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2e9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e9e8c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9e90: 0x8c277508  lw          $a3, 0x7508($at)
    ctx->pc = 0x2e9e90u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x387508u));
    // 0x2e9e94: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x2e9e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2e9e98: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2e9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2e9e9c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2e9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e9ea0: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x2e9ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e9ea4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2e9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2e9ea8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x2e9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2e9eac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2e9eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2e9eb0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2e9eb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2e9eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9eb8: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x2e9eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x2e9ebc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e9ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e9ec0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x2e9ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e9ec4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9EC4u;
    SET_GPR_U32(ctx, 31, 0x2E9ECCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9EC4u, 0x2E9ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9ECCu;
label_2e9ecc:
    // 0x2e9ecc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2e9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2e9ed0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2e9ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e9ed4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e9ed4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ed8: 0x0  nop
    ctx->pc = 0x2e9ed8u;
    // NOP
    // 0x2e9edc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9ee0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2e9ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2e9ee4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2E9EE4u;
    SET_GPR_U32(ctx, 31, 0x2E9EECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2E9EE4u, 0x2E9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9EECu;
label_2e9eec:
    // 0x2e9eec: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2e9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2e9ef0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2e9ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2e9ef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9ef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e9ef8: 0x0  nop
    ctx->pc = 0x2e9ef8u;
    // NOP
    // 0x2e9efc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e9efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e9f00: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x2e9f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2e9f04: 0x0  nop
    ctx->pc = 0x2e9f04u;
    // NOP
    ctx->pc = 0x2e9f08u;
}
