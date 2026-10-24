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

// Function: entry_001afc60
// Address: 0x1afc60 - 0x1afc90
void entry_001afc60_0x1afc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afc60_0x1afc60");
#endif

    ctx->pc = 0x1afc60u;

label_1afc60:
    // 0x1afc60: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1afc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1afc64: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1afc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1afc68: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1afc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1afc6c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1afc6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1afc70: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1afc70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1afc74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1afc74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1afc78: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1afc78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1afc7c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1afc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1afc80: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1afc84: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1AFC84u;
    {
        const bool branch_taken_0x1afc84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afc84) {
            ctx->pc = 0x1AFC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1afc60;
        }
    }
    ctx->pc = 0x1AFC8Cu;
    // 0x1afc8c: 0x0  nop
    ctx->pc = 0x1afc8cu;
    // NOP
    ctx->pc = 0x1afc90u;
}
