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

// Function: entry_001af8f8
// Address: 0x1af8f8 - 0x1af930
void entry_001af8f8_0x1af8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af8f8_0x1af8f8");
#endif

    ctx->pc = 0x1af8f8u;

label_1af8f8:
    // 0x1af8f8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1af8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af8fc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1af8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af900: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1af900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af904: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1af904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1af908: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1af908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1af90c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1af90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1af910: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1af914: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1af918: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af91c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AF91Cu;
    {
        const bool branch_taken_0x1af91c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af91c) {
            ctx->pc = 0x1AF8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af8f8;
        }
    }
    ctx->pc = 0x1AF924u;
    // 0x1af924: 0x8eb40018  lw          $s4, 0x18($s5)
    ctx->pc = 0x1af924u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1af928: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1af928u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1af92c: 0xaeb20028  sw          $s2, 0x28($s5)
    ctx->pc = 0x1af92cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 18));
    ctx->pc = 0x1af930u;
}
