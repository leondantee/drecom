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

// Function: entry_00112630
// Address: 0x112630 - 0x112678
void entry_00112630_0x112630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112630_0x112630");
#endif

    ctx->pc = 0x112630u;

label_112630:
    // 0x112630: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x112630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x112634: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x112634u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x112638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11263c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11263cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112640: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x112640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x112644: 0x46006041  sub.s       $f1, $f12, $f0
    ctx->pc = 0x112644u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x112648: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x112648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x11264c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x112650: 0x461fff7  bgez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x112650u;
    {
        const bool branch_taken_0x112650 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x112654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112650u;
        // 0x112654: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112650) {
            ctx->pc = 0x112630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112630;
        }
    }
    ctx->pc = 0x112658u;
    // 0x112658: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x112658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11265c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x11265cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112660: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x112660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x112664: 0x0  nop
    ctx->pc = 0x112664u;
    // NOP
    // 0x112668: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x112668u;
    {
        const bool branch_taken_0x112668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112668u;
        // 0x11266c: 0xe7ac0008  swc1        $f12, 0x8($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x112668) {
            ctx->pc = 0x11269Cu;
            return;
        }
    }
    ctx->pc = 0x112670u;
    // 0x112670: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x112670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112674: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x112674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x112678u;
}
