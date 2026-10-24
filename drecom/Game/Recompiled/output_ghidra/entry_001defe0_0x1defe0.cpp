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

// Function: entry_001defe0
// Address: 0x1defe0 - 0x1df028
void entry_001defe0_0x1defe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001defe0_0x1defe0");
#endif

    ctx->pc = 0x1defe0u;

label_1defe0:
    // 0x1defe0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x1defe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1defe4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1defe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1defe8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1defe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1defec: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1defecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1deff0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1deff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1deff4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1deff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1deff8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1deff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1deffc: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1deffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1df000: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1df000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1df004: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DF004u;
    {
        const bool branch_taken_0x1df004 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df004) {
            ctx->pc = 0x1DEFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1defe0;
        }
    }
    ctx->pc = 0x1DF00Cu;
    // 0x1df00c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df00cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df010: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df014: 0x8c740018  lw          $s4, 0x18($v1)
    ctx->pc = 0x1df014u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1df018: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1df018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1df01c: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1df01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1df020: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1df020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1df024: 0xac720028  sw          $s2, 0x28($v1)
    ctx->pc = 0x1df024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 18));
    ctx->pc = 0x1df028u;
}
