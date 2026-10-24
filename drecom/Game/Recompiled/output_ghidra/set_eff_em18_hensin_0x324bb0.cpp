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

// Function: set_eff_em18_hensin
// Address: 0x324bb0 - 0x3250d8
void set_eff_em18_hensin_0x324bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em18_hensin_0x324bb0");
#endif

    switch (ctx->pc) {
        case 0x324cfcu: goto label_324cfc;
        case 0x324d20u: goto label_324d20;
        case 0x324d44u: goto label_324d44;
        case 0x324d68u: goto label_324d68;
        case 0x324e54u: goto label_324e54;
        case 0x324ed4u: goto label_324ed4;
        case 0x324ef8u: goto label_324ef8;
        case 0x324f1cu: goto label_324f1c;
        case 0x324f40u: goto label_324f40;
        case 0x32502cu: goto label_32502c;
        case 0x3250c8u: goto label_3250c8;
        default: break;
    }

    ctx->pc = 0x324bb0u;

    // 0x324bb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x324bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x324bb4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x324bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x324bb8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x324bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x324bbc: 0xa3a50068  sb          $a1, 0x68($sp)
    ctx->pc = 0x324bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 5));
    // 0x324bc0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324bc4: 0x2442a160  addiu       $v0, $v0, -0x5EA0
    ctx->pc = 0x324bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943072));
    // 0x324bc8: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x324bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324bcc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x324bccu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A160u));
    // 0x324bd0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x324bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x324bd4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324bd8: 0x2442a170  addiu       $v0, $v0, -0x5E90
    ctx->pc = 0x324bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943088));
    // 0x324bdc: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x324bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324be0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x324be0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A170u));
    // 0x324be4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x324be4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x324be8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324bec: 0x2442a180  addiu       $v0, $v0, -0x5E80
    ctx->pc = 0x324becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943104));
    // 0x324bf0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x324bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324bf4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x324bf4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x39A180u));
    // 0x324bf8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x324bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x324bfc: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324c00: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324C00u;
    {
        const bool branch_taken_0x324c00 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324c00) {
            ctx->pc = 0x324C1Cu;
            goto label_324c1c;
        }
    }
    ctx->pc = 0x324C08u;
    // 0x324c08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c0c: 0x0  nop
    ctx->pc = 0x324c0cu;
    // NOP
    // 0x324c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324C14u;
    {
        const bool branch_taken_0x324c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324c14) {
            ctx->pc = 0x324C38u;
            goto label_324c38;
        }
    }
    ctx->pc = 0x324C1Cu;
label_324c1c:
    // 0x324c1c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x324c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x324c20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x324c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x324c24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x324c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324c28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324c28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c2c: 0x0  nop
    ctx->pc = 0x324c2cu;
    // NOP
    // 0x324c30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x324c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_324c38:
    // 0x324c38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324c3c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324c3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324c40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324C40u;
    {
        const bool branch_taken_0x324c40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324c40) {
            ctx->pc = 0x324C5Cu;
            goto label_324c5c;
        }
    }
    ctx->pc = 0x324C48u;
    // 0x324c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c4c: 0x0  nop
    ctx->pc = 0x324c4cu;
    // NOP
    // 0x324c50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324C54u;
    {
        const bool branch_taken_0x324c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324c54) {
            ctx->pc = 0x324C78u;
            goto label_324c78;
        }
    }
    ctx->pc = 0x324C5Cu;
label_324c5c:
    // 0x324c5c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x324c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x324c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x324c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x324c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x324c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x324c68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x324c68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324c6c: 0x0  nop
    ctx->pc = 0x324c6cu;
    // NOP
    // 0x324c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324c74: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x324c74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_324c78:
    // 0x324c78: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x324c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x324c7c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324c80: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324c80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324c84: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324c88: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324c8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324c94: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324c9c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324ca0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324ca4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324ca8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324cac: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324cb0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324cb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324cb8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324cbc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324cc0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x324cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324cc4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x324cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x324cc8: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ccc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324cd0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x324cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324cd4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x324cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x324cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324cdc: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x324cdcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x324ce0: 0x0  nop
    ctx->pc = 0x324ce0u;
    // NOP
    // 0x324ce4: 0x0  nop
    ctx->pc = 0x324ce4u;
    // NOP
    // 0x324ce8: 0x1010  mfhi        $v0
    ctx->pc = 0x324ce8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x324cec: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x324CECu;
    {
        const bool branch_taken_0x324cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324cec) {
            ctx->pc = 0x324E54u;
            goto label_324e54;
        }
    }
    ctx->pc = 0x324CF4u;
    // 0x324cf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x324CF4u;
    SET_GPR_U32(ctx, 31, 0x324CFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324CF4u, 0x324CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324CFCu;
label_324cfc:
    // 0x324cfc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d04: 0x0  nop
    ctx->pc = 0x324d04u;
    // NOP
    // 0x324d08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d14: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x324d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x324d18: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D18u;
    SET_GPR_U32(ctx, 31, 0x324D20u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D18u, 0x324D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D20u;
label_324d20:
    // 0x324d20: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d28: 0x0  nop
    ctx->pc = 0x324d28u;
    // NOP
    // 0x324d2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d30: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d38: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x324d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x324d3c: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D3Cu;
    SET_GPR_U32(ctx, 31, 0x324D44u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D3Cu, 0x324D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D44u;
label_324d44:
    // 0x324d44: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324d48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d4c: 0x0  nop
    ctx->pc = 0x324d4cu;
    // NOP
    // 0x324d50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d54: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d58: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324d5c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x324d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x324d60: 0xc067648  jal         func_19D920
    ctx->pc = 0x324D60u;
    SET_GPR_U32(ctx, 31, 0x324D68u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324D60u, 0x324D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324D68u;
label_324d68:
    // 0x324d68: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x324d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x324d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d70: 0x0  nop
    ctx->pc = 0x324d70u;
    // NOP
    // 0x324d74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d78: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x324d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x324d7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324d80: 0x0  nop
    ctx->pc = 0x324d80u;
    // NOP
    // 0x324d84: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x324d84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324d88: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324d8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324d90: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324d94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324d98: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324d98u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324da0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x324da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324da4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324da8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324da8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324dac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324db0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324db4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324db8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324dbc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324dc4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324dc8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324dcc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324dd4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324dd8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324ddc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324de0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324de4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324de4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324de8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324dec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x324decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x324df0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x324df0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324df4: 0x0  nop
    ctx->pc = 0x324df4u;
    // NOP
    // 0x324df8: 0x0  nop
    ctx->pc = 0x324df8u;
    // NOP
    // 0x324dfc: 0x1810  mfhi        $v1
    ctx->pc = 0x324dfcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324e00: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324e04: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x324e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x324e08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e0c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324e10: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e14: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x324e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x324e18: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x324e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x324e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324e20: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324e24: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x324e24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324e28: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324e2c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324e30: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x324e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324e34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x324e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x324e38: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x324e38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x324e3c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x324e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x324e40: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x324e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x324e44: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x324e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324e48: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x324e48u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324e4c: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x324E4Cu;
    SET_GPR_U32(ctx, 31, 0x324E54u);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x324E4Cu, 0x324E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E54u;
label_324e54:
    // 0x324e54: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e58: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324e58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324e5c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324e60: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324e64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e6c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324e70: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e74: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324e74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324e78: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324e7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324e80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324e84: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324e88: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324e8c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324e90: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324e94: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324e98: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x324e98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324e9c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x324e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x324ea0: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x324ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324ea4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324ea8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x324ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x324eac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x324eacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x324eb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324eb4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x324eb4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x324eb8: 0x0  nop
    ctx->pc = 0x324eb8u;
    // NOP
    // 0x324ebc: 0x0  nop
    ctx->pc = 0x324ebcu;
    // NOP
    // 0x324ec0: 0x1010  mfhi        $v0
    ctx->pc = 0x324ec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x324ec4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x324EC4u;
    {
        const bool branch_taken_0x324ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324ec4) {
            ctx->pc = 0x32502Cu;
            goto label_32502c;
        }
    }
    ctx->pc = 0x324ECCu;
    // 0x324ecc: 0xc067648  jal         func_19D920
    ctx->pc = 0x324ECCu;
    SET_GPR_U32(ctx, 31, 0x324ED4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324ECCu, 0x324ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324ED4u;
label_324ed4:
    // 0x324ed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324ed8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324edc: 0x0  nop
    ctx->pc = 0x324edcu;
    // NOP
    // 0x324ee0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324ee4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324eec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x324eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x324ef0: 0xc067648  jal         func_19D920
    ctx->pc = 0x324EF0u;
    SET_GPR_U32(ctx, 31, 0x324EF8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324EF0u, 0x324EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324EF8u;
label_324ef8:
    // 0x324ef8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f00: 0x0  nop
    ctx->pc = 0x324f00u;
    // NOP
    // 0x324f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f08: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324f10: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x324f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x324f14: 0xc067648  jal         func_19D920
    ctx->pc = 0x324F14u;
    SET_GPR_U32(ctx, 31, 0x324F1Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324F14u, 0x324F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F1Cu;
label_324f1c:
    // 0x324f1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x324f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x324f20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f24: 0x0  nop
    ctx->pc = 0x324f24u;
    // NOP
    // 0x324f28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f2c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x324f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x324f34: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x324f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x324f38: 0xc067648  jal         func_19D920
    ctx->pc = 0x324F38u;
    SET_GPR_U32(ctx, 31, 0x324F40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324F38u, 0x324F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F40u;
label_324f40:
    // 0x324f40: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x324f44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f48: 0x0  nop
    ctx->pc = 0x324f48u;
    // NOP
    // 0x324f4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x324f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f50: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x324f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x324f54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324f58: 0x0  nop
    ctx->pc = 0x324f58u;
    // NOP
    // 0x324f5c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x324f5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324f60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x324f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x324f64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324f64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324f68: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x324f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x324f6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x324f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324f70: 0x46020340  add.s       $f13, $f0, $f2
    ctx->pc = 0x324f70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x324f74: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324f78: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x324f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x324f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324f80: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x324f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x324f84: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324f84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324f88: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324f88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324f8c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324f98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x324f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324f9c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x324f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x324fa0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324fa4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x324fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x324fa8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x324fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x324fac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x324facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x324fb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324fb4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x324fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x324fb8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x324fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x324fbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x324fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x324fc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x324fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x324fc4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x324fc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x324fc8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x324fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x324fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x324fd0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x324fd0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x324fd4: 0x0  nop
    ctx->pc = 0x324fd4u;
    // NOP
    // 0x324fd8: 0x0  nop
    ctx->pc = 0x324fd8u;
    // NOP
    // 0x324fdc: 0x1810  mfhi        $v1
    ctx->pc = 0x324fdcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x324fe0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x324fe4: 0x2442a190  addiu       $v0, $v0, -0x5E70
    ctx->pc = 0x324fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943120));
    // 0x324fe8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x324fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x324fec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324ff0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x324ff4: 0x3c023f99  lui         $v0, 0x3F99
    ctx->pc = 0x324ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
    // 0x324ff8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x324ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x324ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325000: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x325000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325004: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x325004u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325008: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x325008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32500c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x32500cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x325010: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x325010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325014: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x325014u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x325018: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32501c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x32501cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325020: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x325020u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x325024: 0xc0c8be4  jal         func_322F90
    ctx->pc = 0x325024u;
    SET_GPR_U32(ctx, 31, 0x32502Cu);
    ctx->pc = 0x322F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322F90u, 0x325024u, 0x32502Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32502Cu;
label_32502c:
    // 0x32502c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x325030: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x325030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x325034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325038: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x325038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32503c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32503Cu;
    {
        const bool branch_taken_0x32503c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32503c) {
            ctx->pc = 0x325058u;
            goto label_325058;
        }
    }
    ctx->pc = 0x325044u;
    // 0x325044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325048: 0x0  nop
    ctx->pc = 0x325048u;
    // NOP
    // 0x32504c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32504cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325050u;
    {
        const bool branch_taken_0x325050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325050) {
            ctx->pc = 0x325074u;
            goto label_325074;
        }
    }
    ctx->pc = 0x325058u;
label_325058:
    // 0x325058: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x325058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x32505c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x325060: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x325060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x325064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x325064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325068: 0x0  nop
    ctx->pc = 0x325068u;
    // NOP
    // 0x32506c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32506cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325070: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x325070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_325074:
    // 0x325074: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x325074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x325078: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x325078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x32507c: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x32507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
    // 0x325080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325084: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x325084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325088: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x325088u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32508c: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x32508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x325090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325094: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x325094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325098: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x325098u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32509c: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x32509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x3250a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3250a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3250a4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3250a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3250a8: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x3250a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3250ac: 0x3c0242aa  lui         $v0, 0x42AA
    ctx->pc = 0x3250acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17066 << 16));
    // 0x3250b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3250b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3250b4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x3250b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3250b8: 0x46000bc2  mul.s       $f15, $f1, $f0
    ctx->pc = 0x3250b8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3250bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x3250bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3250c0: 0xc0c91ec  jal         func_3247B0
    ctx->pc = 0x3250C0u;
    SET_GPR_U32(ctx, 31, 0x3250C8u);
    ctx->pc = 0x3247B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247B0u, 0x3250C0u, 0x3250C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250C8u;
label_3250c8:
    // 0x3250c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3250c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3250cc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x3250ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3250d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3250D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3250D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3250D8u;
}
