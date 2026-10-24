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

// Function: e2d_id00_type0c
// Address: 0x2a9c00 - 0x2a9ddc
void e2d_id00_type0c_0x2a9c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0c_0x2a9c00");
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

    ctx->pc = 0x2a9c00u;

    // 0x2a9c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a9c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a9c04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2a9c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2a9c08: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2a9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2a9c0c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2a9c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2a9c10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9c14: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x2a9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x2a9c18: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a9c1c: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2a9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9c20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2a9c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2a9c24: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2a9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2a9c28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a9c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a9c2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a9c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9c34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2a9c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a9c38: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2a9c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2a9c3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2a9c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2a9c40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2a9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2a9c44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2a9c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a9c48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a9c4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a9c50: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2a9c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2a9c54: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2a9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a9c58: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a9c5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2a9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2a9c60: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2a9c60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2a9c64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2a9c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2a9c68: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2a9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2a9c6c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2a9c6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2a9c70: 0x0  nop
    ctx->pc = 0x2a9c70u;
    // NOP
    // 0x2a9c74: 0x0  nop
    ctx->pc = 0x2a9c74u;
    // NOP
    // 0x2a9c78: 0x1010  mfhi        $v0
    ctx->pc = 0x2a9c78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2a9c7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9C7Cu;
    {
        const bool branch_taken_0x2a9c7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2a9c7c) {
            ctx->pc = 0x2A9C98u;
            goto label_2a9c98;
        }
    }
    ctx->pc = 0x2A9C84u;
    // 0x2a9c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a9c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9c88: 0x0  nop
    ctx->pc = 0x2a9c88u;
    // NOP
    // 0x2a9c8c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a9c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9c90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9C90u;
    {
        const bool branch_taken_0x2a9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9c90) {
            ctx->pc = 0x2A9CB4u;
            goto label_2a9cb4;
        }
    }
    ctx->pc = 0x2A9C98u;
label_2a9c98:
    // 0x2a9c98: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2a9c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2a9c9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a9c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a9ca0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2a9ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9ca4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9ca4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9ca8: 0x0  nop
    ctx->pc = 0x2a9ca8u;
    // NOP
    // 0x2a9cac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2a9cacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2a9cb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a9cb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2a9cb4:
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
