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

// Function: entry_001afe68
// Address: 0x1afe68 - 0x1afea0
void entry_001afe68_0x1afe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afe68_0x1afe68");
#endif

    ctx->pc = 0x1afe68u;

label_1afe68:
    // 0x1afe68: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1afe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afe6c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1afe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afe70: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1afe70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afe74: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1afe74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1afe78: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1afe78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1afe7c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1afe7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1afe80: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1afe84: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1afe84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afe88: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1afe88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1afe8c: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFE8Cu;
    {
        const bool branch_taken_0x1afe8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afe8c) {
            ctx->pc = 0x1AFE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afe68;
        }
    }
    ctx->pc = 0x1AFE94u;
    // 0x1afe94: 0x8eb40018  lw          $s4, 0x18($s5)
    ctx->pc = 0x1afe94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1afe98: 0x8eb10010  lw          $s1, 0x10($s5)
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1afe9c: 0xaeb20028  sw          $s2, 0x28($s5)
    ctx->pc = 0x1afe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 18));
    ctx->pc = 0x1afea0u;
}
