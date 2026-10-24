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

// Function: entry_00114038
// Address: 0x114038 - 0x114058
void entry_00114038_0x114038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114038_0x114038");
#endif

    ctx->pc = 0x114038u;

label_114038:
    // 0x114038: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x114038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11403c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114040: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x114044: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114048: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x114048u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11404c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11404Cu;
    {
        const bool branch_taken_0x11404c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11404c) {
            ctx->pc = 0x114038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114038;
        }
    }
    ctx->pc = 0x114054u;
    // 0x114054: 0xe6e20000  swc1        $f2, 0x0($s7)
    ctx->pc = 0x114054u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    ctx->pc = 0x114058u;
}
