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

// Function: entry_001aff00
// Address: 0x1aff00 - 0x1aff38
void entry_001aff00_0x1aff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aff00_0x1aff00");
#endif

    ctx->pc = 0x1aff00u;

label_1aff00:
    // 0x1aff00: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1aff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aff04: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1aff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aff08: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1aff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aff0c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1aff0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1aff10: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1aff10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1aff14: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1aff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1aff18: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1aff18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1aff1c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1aff1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1aff20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1aff20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1aff24: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFF24u;
    {
        const bool branch_taken_0x1aff24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aff24) {
            ctx->pc = 0x1AFF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aff00;
        }
    }
    ctx->pc = 0x1AFF2Cu;
    // 0x1aff2c: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1aff2cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1aff30: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1aff34: 0xaeb2002c  sw          $s2, 0x2C($s5)
    ctx->pc = 0x1aff34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 18));
    ctx->pc = 0x1aff38u;
}
