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

// Function: entry_00157e20
// Address: 0x157e20 - 0x157f14
void entry_00157e20_0x157e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e20_0x157e20");
#endif

    switch (ctx->pc) {
        case 0x157e28u: goto label_157e28;
        default: break;
    }

    ctx->pc = 0x157e20u;

    // 0x157e20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157E20u;
    SET_GPR_U32(ctx, 31, 0x157E28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157E20u, 0x157E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E28u;
label_157e28:
    // 0x157e28: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x157e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x157e2c: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x157e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157e30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e34: 0x0  nop
    ctx->pc = 0x157e34u;
    // NOP
    // 0x157e38: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157e3c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157e40: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x157e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x157e44: 0x24a2f760  addiu       $v0, $a1, -0x8A0
    ctx->pc = 0x157e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
    // 0x157e48: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157e4c: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x157e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x157e50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e58: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157e58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157e5c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157e60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157e68: 0x0  nop
    ctx->pc = 0x157e68u;
    // NOP
    // 0x157e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157e70: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157e74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x157e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x157e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e7c: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x157e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157e84: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157e88: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157e8c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157e90: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x157e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157e98: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x157e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x157e9c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ea0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ea4: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ea8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157eac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157eb0: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x157eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157eb4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x157eb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157eb8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ebc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157ebcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157ec0: 0x0  nop
    ctx->pc = 0x157ec0u;
    // NOP
    // 0x157ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ec8: 0x0  nop
    ctx->pc = 0x157ec8u;
    // NOP
    // 0x157ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157ed0: 0x0  nop
    ctx->pc = 0x157ed0u;
    // NOP
    // 0x157ed4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157ED4u;
    {
        const bool branch_taken_0x157ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ed4) {
            ctx->pc = 0x157F14u;
            return;
        }
    }
    ctx->pc = 0x157EDCu;
    // 0x157edc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ee0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ee4: 0x2443f7d0  addiu       $v1, $v0, -0x830
    ctx->pc = 0x157ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ee8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157eec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ef0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157ef8: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x157ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157efc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157efcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157f00: 0x0  nop
    ctx->pc = 0x157f00u;
    // NOP
    // 0x157f04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157f04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157f08: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x157f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x157f0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157F0Cu;
    {
        const bool branch_taken_0x157f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f0c) {
            ctx->pc = 0x157F40u;
            return;
        }
    }
    ctx->pc = 0x157F14u;
}
