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

// Function: entry_001af990
// Address: 0x1af990 - 0x1af9c8
void entry_001af990_0x1af990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af990_0x1af990");
#endif

    ctx->pc = 0x1af990u;

label_1af990:
    // 0x1af990: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1af990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af994: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1af994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af998: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1af998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af99c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1af99cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1af9a0: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1af9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1af9a4: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1af9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1af9a8: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1af9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1af9ac: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1af9acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af9b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af9b4: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF9B4u;
    {
        const bool branch_taken_0x1af9b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af9b4) {
            ctx->pc = 0x1AF990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af990;
        }
    }
    ctx->pc = 0x1AF9BCu;
    // 0x1af9bc: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1af9bcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1af9c0: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1af9c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1af9c4: 0xaeb2002c  sw          $s2, 0x2C($s5)
    ctx->pc = 0x1af9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 18));
    ctx->pc = 0x1af9c8u;
}
