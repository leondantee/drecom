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

// Function: entry_00113e64
// Address: 0x113e64 - 0x113ed4
void entry_00113e64_0x113e64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113e64_0x113e64");
#endif

    switch (ctx->pc) {
        case 0x113e6cu: goto label_113e6c;
        default: break;
    }

    ctx->pc = 0x113e64u;

    // 0x113e64: 0xc04546c  jal         func_1151B0
    ctx->pc = 0x113E64u;
    SET_GPR_U32(ctx, 31, 0x113E6Cu);
    ctx->pc = 0x113E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E64u;
    // 0x113e68: 0x122023  negu        $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1151B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1151B0u, 0x113E64u, 0x113E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E6Cu;
label_113e6c:
    // 0x113e6c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x113e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x113e70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x113e70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x113e74: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x113e74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x113e78: 0x46140836  c.le.s      $f1, $f20
    ctx->pc = 0x113e78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113e7c: 0x0  nop
    ctx->pc = 0x113e7cu;
    // NOP
    // 0x113e80: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x113E80u;
    {
        const bool branch_taken_0x113e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E80u;
        // 0x113e84: 0x3be2021  addu        $a0, $sp, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e80) {
            ctx->pc = 0x113ED4u;
            return;
        }
    }
    ctx->pc = 0x113E88u;
    // 0x113e88: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x113e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x113e8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113e90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113e94: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x113e98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x113e98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x113e9c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113ea0: 0x32710007  andi        $s1, $s3, 0x7
    ctx->pc = 0x113ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x113ea4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x113ea8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x113ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x113eac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x113eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113eb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x113eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x113eb4: 0x46011002  mul.s       $f0, $f2, $f1
    ctx->pc = 0x113eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x113eb8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x113eb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x113ebc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x113ec0: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x113ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x113ec4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x113ec4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x113ec8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x113ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x113ecc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113ECCu;
    {
        const bool branch_taken_0x113ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ECCu;
        // 0x113ed0: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ecc) {
            ctx->pc = 0x113EECu;
            return;
        }
    }
    ctx->pc = 0x113ED4u;
}
