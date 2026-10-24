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

// Function: set_eff_pl00_denki_hensin
// Address: 0x2f3d40 - 0x2f4320
void set_eff_pl00_denki_hensin_0x2f3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_denki_hensin_0x2f3d40");
#endif

    switch (ctx->pc) {
        case 0x2f3e8cu: goto label_2f3e8c;
        case 0x2f3eb0u: goto label_2f3eb0;
        case 0x2f3ed4u: goto label_2f3ed4;
        case 0x2f3ef8u: goto label_2f3ef8;
        case 0x2f3fecu: goto label_2f3fec;
        case 0x2f406cu: goto label_2f406c;
        case 0x2f4090u: goto label_2f4090;
        case 0x2f40b4u: goto label_2f40b4;
        case 0x2f40ecu: goto label_2f40ec;
        case 0x2f41d0u: goto label_2f41d0;
        case 0x2f4270u: goto label_2f4270;
        case 0x2f430cu: goto label_2f430c;
        default: break;
    }

    ctx->pc = 0x2f3d40u;

    // 0x2f3d40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f3d44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2f3d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2f3d48: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f3d48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f3d4c: 0xa3a40088  sb          $a0, 0x88($sp)
    ctx->pc = 0x2f3d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 136), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f3d50: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3d54: 0x24428e60  addiu       $v0, $v0, -0x71A0
    ctx->pc = 0x2f3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938208));
    // 0x2f3d58: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3d5c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3d5cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E60u));
    // 0x2f3d60: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f3d60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3d64: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3d68: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x2f3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
    // 0x2f3d6c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2f3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3d70: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3d70u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E70u));
    // 0x2f3d74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f3d74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3d78: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3d7c: 0x24428e80  addiu       $v0, $v0, -0x7180
    ctx->pc = 0x2f3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938240));
    // 0x2f3d80: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2f3d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3d84: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2f3d84u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x398E80u));
    // 0x2f3d88: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x2f3d88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x2f3d8c: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f3d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f3d90: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3D90u;
    {
        const bool branch_taken_0x2f3d90 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3d90) {
            ctx->pc = 0x2F3DACu;
            goto label_2f3dac;
        }
    }
    ctx->pc = 0x2F3D98u;
    // 0x2f3d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3d9c: 0x0  nop
    ctx->pc = 0x2f3d9cu;
    // NOP
    // 0x2f3da0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3da0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3DA4u;
    {
        const bool branch_taken_0x2f3da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3da4) {
            ctx->pc = 0x2F3DC8u;
            goto label_2f3dc8;
        }
    }
    ctx->pc = 0x2F3DACu;
label_2f3dac:
    // 0x2f3dac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f3dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f3db0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3dbc: 0x0  nop
    ctx->pc = 0x2f3dbcu;
    // NOP
    // 0x2f3dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3dc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3dc8:
    // 0x2f3dc8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f3dcc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f3dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f3dd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F3DD0u;
    {
        const bool branch_taken_0x2f3dd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f3dd0) {
            ctx->pc = 0x2F3DECu;
            goto label_2f3dec;
        }
    }
    ctx->pc = 0x2F3DD8u;
    // 0x2f3dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3ddc: 0x0  nop
    ctx->pc = 0x2f3ddcu;
    // NOP
    // 0x2f3de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3de4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F3DE4u;
    {
        const bool branch_taken_0x2f3de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3de4) {
            ctx->pc = 0x2F3E08u;
            goto label_2f3e08;
        }
    }
    ctx->pc = 0x2F3DECu;
label_2f3dec:
    // 0x2f3dec: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f3decu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f3df0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f3df4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f3df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f3df8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f3df8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3dfc: 0x0  nop
    ctx->pc = 0x2f3dfcu;
    // NOP
    // 0x2f3e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f3e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f3e04: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f3e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f3e08:
    // 0x2f3e08: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2f3e0c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e10: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3e14: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3e18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3e1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3e20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e24: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3e28: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e2c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3e30: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3e34: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3e38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3e3c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3e40: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3e44: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3e48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3e4c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3e50: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f3e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e54: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f3e58: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f3e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f3e5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3e60: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3e64: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f3e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f3e68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3e6c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f3e6cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f3e70: 0x0  nop
    ctx->pc = 0x2f3e70u;
    // NOP
    // 0x2f3e74: 0x0  nop
    ctx->pc = 0x2f3e74u;
    // NOP
    // 0x2f3e78: 0x1010  mfhi        $v0
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f3e7c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2F3E7Cu;
    {
        const bool branch_taken_0x2f3e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3e7c) {
            ctx->pc = 0x2F3FECu;
            goto label_2f3fec;
        }
    }
    ctx->pc = 0x2F3E84u;
    // 0x2f3e84: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3E84u;
    SET_GPR_U32(ctx, 31, 0x2F3E8Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3E84u, 0x2F3E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E8Cu;
label_2f3e8c:
    // 0x2f3e8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3e90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3e94: 0x0  nop
    ctx->pc = 0x2f3e94u;
    // NOP
    // 0x2f3e98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3e98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3e9c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ea0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ea4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f3ea8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3EA8u;
    SET_GPR_U32(ctx, 31, 0x2F3EB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3EA8u, 0x2F3EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EB0u;
label_2f3eb0:
    // 0x2f3eb0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3eb8: 0x0  nop
    ctx->pc = 0x2f3eb8u;
    // NOP
    // 0x2f3ebc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ec0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ec4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ec4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3ec8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f3ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f3ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3ECCu;
    SET_GPR_U32(ctx, 31, 0x2F3ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3ECCu, 0x2F3ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3ED4u;
label_2f3ed4:
    // 0x2f3ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f3ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3edc: 0x0  nop
    ctx->pc = 0x2f3edcu;
    // NOP
    // 0x2f3ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3ee4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3eec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f3eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f3ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F3EF0u;
    SET_GPR_U32(ctx, 31, 0x2F3EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F3EF0u, 0x2F3EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EF8u;
label_2f3ef8:
    // 0x2f3ef8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2f3efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3f00: 0x0  nop
    ctx->pc = 0x2f3f00u;
    // NOP
    // 0x2f3f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f3f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f08: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f3f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f3f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3f10: 0x0  nop
    ctx->pc = 0x2f3f10u;
    // NOP
    // 0x2f3f14: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f3f14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f3f18: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f3f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3f20: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f3f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3f28: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f3f28u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f3f2c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f3f30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f3f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f3f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3f38: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f3f3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f40: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3f44: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3f48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3f4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3f50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3f54: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f3f58: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f5c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3f60: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3f64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3f6c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f3f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f3f70: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f3f74: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f3f78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3f7c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f3f7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f3f80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f3f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3f84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f3f88: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f3f88u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f3f8c: 0x0  nop
    ctx->pc = 0x2f3f8cu;
    // NOP
    // 0x2f3f90: 0x0  nop
    ctx->pc = 0x2f3f90u;
    // NOP
    // 0x2f3f94: 0x1810  mfhi        $v1
    ctx->pc = 0x2f3f94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f3f98: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f3f9c: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x2f3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x2f3fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3fa4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f3fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3fa8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f3fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f3fac: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f3facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2f3fb0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f3fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f3fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3fb8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f3fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fbc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f3fbcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f3fc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3fc4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3fc8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f3fcc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f3fd0: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f3fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f3fd4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f3fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3fd8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f3fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3fdc: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f3fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f3fe0: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f3fe0u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f3fe4: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F3FE4u;
    SET_GPR_U32(ctx, 31, 0x2F3FECu);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F3FE4u, 0x2F3FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FECu;
label_2f3fec:
    // 0x2f3fec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f3ff0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f3ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f3ff4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f3ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f3ff8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f3ffc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4000: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4004: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4008: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f400c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f400cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4010: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4014: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f401c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4020: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4024: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4028: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f402c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f402cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4030: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2f4030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4034: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x2f4034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f4038: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f4038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f403c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f403cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4040: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2f4040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f4044: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2f4044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2f4048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f404c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2f404cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2f4050: 0x0  nop
    ctx->pc = 0x2f4050u;
    // NOP
    // 0x2f4054: 0x0  nop
    ctx->pc = 0x2f4054u;
    // NOP
    // 0x2f4058: 0x1010  mfhi        $v0
    ctx->pc = 0x2f4058u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2f405c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F405Cu;
    {
        const bool branch_taken_0x2f405c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f405c) {
            ctx->pc = 0x2F41D0u;
            goto label_2f41d0;
        }
    }
    ctx->pc = 0x2F4064u;
    // 0x2f4064: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4064u;
    SET_GPR_U32(ctx, 31, 0x2F406Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4064u, 0x2F406Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F406Cu;
label_2f406c:
    // 0x2f406c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f406cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f4070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4074: 0x0  nop
    ctx->pc = 0x2f4074u;
    // NOP
    // 0x2f4078: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f4078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f407c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f4080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f4084: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f4084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f4088: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F4088u;
    SET_GPR_U32(ctx, 31, 0x2F4090u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F4088u, 0x2F4090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4090u;
label_2f4090:
    // 0x2f4090: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f4090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f4094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4098: 0x0  nop
    ctx->pc = 0x2f4098u;
    // NOP
    // 0x2f409c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f409cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40a0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f40a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f40a8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2f40a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f40ac: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F40ACu;
    SET_GPR_U32(ctx, 31, 0x2F40B4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F40ACu, 0x2F40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40B4u;
label_2f40b4:
    // 0x2f40b4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f40b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40bc: 0x0  nop
    ctx->pc = 0x2f40bcu;
    // NOP
    // 0x2f40c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f40c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40c4: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f40c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f40cc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2f40ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f40d0: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x2f40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x2f40d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f40d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f40d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40dc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f40dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f40e0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2f40e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40e4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F40E4u;
    SET_GPR_U32(ctx, 31, 0x2F40ECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F40E4u, 0x2F40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F40ECu;
label_2f40ec:
    // 0x2f40ec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2f40f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f40f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f40f4: 0x0  nop
    ctx->pc = 0x2f40f4u;
    // NOP
    // 0x2f40f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f40f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f40fc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f40fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f4100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4104: 0x0  nop
    ctx->pc = 0x2f4104u;
    // NOP
    // 0x2f4108: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f4108u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f410c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2f410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2f4110: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4114: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x2f4114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4118: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4118u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f411c: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x2f411cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f4120: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f4120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f4124: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f4124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f4128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f412c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f4130: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4134: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4134u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4138: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f413c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f413cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4148: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4148u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f414c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4150: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4150u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4158: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f415c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4160: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4164: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4164u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4168: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f416c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f416cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4170: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4174: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4178: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f417c: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2f417cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2f4180: 0x0  nop
    ctx->pc = 0x2f4180u;
    // NOP
    // 0x2f4184: 0x0  nop
    ctx->pc = 0x2f4184u;
    // NOP
    // 0x2f4188: 0x1810  mfhi        $v1
    ctx->pc = 0x2f4188u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f418c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f418cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f4190: 0x24428e90  addiu       $v0, $v0, -0x7170
    ctx->pc = 0x2f4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938256));
    // 0x2f4194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4198: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f4198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f419c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f41a0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f41a4: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f41a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f41a8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f41a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f41ac: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f41acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f41b0: 0x2447dbc0  addiu       $a3, $v0, -0x2440
    ctx->pc = 0x2f41b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f41b4: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2f41b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f41b8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2f41b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f41bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f41bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f41c0: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2f41c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f41c4: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f41c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f41c8: 0xc0bbe74  jal         func_2EF9D0
    ctx->pc = 0x2F41C8u;
    SET_GPR_U32(ctx, 31, 0x2F41D0u);
    ctx->pc = 0x2EF9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF9D0u, 0x2F41C8u, 0x2F41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41D0u;
label_2f41d0:
    // 0x2f41d0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x2f41d4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x2f41d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f41d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f41dc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f41dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f41e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F41E0u;
    {
        const bool branch_taken_0x2f41e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f41e0) {
            ctx->pc = 0x2F41FCu;
            goto label_2f41fc;
        }
    }
    ctx->pc = 0x2F41E8u;
    // 0x2f41e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f41e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f41ec: 0x0  nop
    ctx->pc = 0x2f41ecu;
    // NOP
    // 0x2f41f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f41f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f41f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F41F4u;
    {
        const bool branch_taken_0x2f41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41f4) {
            ctx->pc = 0x2F4218u;
            goto label_2f4218;
        }
    }
    ctx->pc = 0x2F41FCu;
label_2f41fc:
    // 0x2f41fc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2f41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2f4200: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f4204: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2f4204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2f4208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f4208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f420c: 0x0  nop
    ctx->pc = 0x2f420cu;
    // NOP
    // 0x2f4210: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4214: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f4214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2f4218:
    // 0x2f4218: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f4218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f421c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2f421cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2f4220: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x2f4220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x2f4224: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4228: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f422c: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x2f422cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4230: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x2f4234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4238: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f423c: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x2f423cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4240: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x2f4240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x2f4244: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4248: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f424c: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x2f424cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4250: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2f4250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2f4254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4258: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2f4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f425c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2f425cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f4260: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4264: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4264u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4268: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x2F4268u;
    SET_GPR_U32(ctx, 31, 0x2F4270u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x2F4268u, 0x2F4270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4270u;
label_2f4270:
    // 0x2f4270: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4274: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f4274u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4278: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2f4278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2f427c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f427cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f4280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4284: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4288: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f4288u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f428c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f428cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f4290: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2f4290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2f4294: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f4294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f4298: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f4298u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f429c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2f429cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2f42a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f42a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f42a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42a8: 0x0  nop
    ctx->pc = 0x2f42a8u;
    // NOP
    // 0x2f42ac: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2f42acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2f42b0: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f42b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f42b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f42b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f42b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f42b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f42bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42c0: 0x0  nop
    ctx->pc = 0x2f42c0u;
    // NOP
    // 0x2f42c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x2f42c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f42c8: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x2f42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x2f42cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2f42ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2f42d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f42d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f42d4: 0x0  nop
    ctx->pc = 0x2f42d4u;
    // NOP
    // 0x2f42d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f42d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f42dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2f42dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2f42e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f42e4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f42e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f42e8: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f42ec: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f42ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f42f0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f42f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f42f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f42f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f42f8: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2f42f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f42fc: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x2f42fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f4300: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4304: 0xc086488  jal         func_219220
    ctx->pc = 0x2F4304u;
    SET_GPR_U32(ctx, 31, 0x2F430Cu);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F4304u, 0x2F430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F430Cu;
label_2f430c:
    // 0x2f430c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f430cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4310: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f4310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4314: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2f4318: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4320u;
}
