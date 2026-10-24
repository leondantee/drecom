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

// Function: entry_00170fc4
// Address: 0x170fc4 - 0x170ff0
void entry_00170fc4_0x170fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170fc4_0x170fc4");
#endif

    ctx->pc = 0x170fc4u;

label_170fc4:
    // 0x170fc4: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x170fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fc8: 0xe6a00070  swc1        $f0, 0x70($s5)
    ctx->pc = 0x170fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
    // 0x170fcc: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x170fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fd0: 0xe6a00074  swc1        $f0, 0x74($s5)
    ctx->pc = 0x170fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 116), bits); }
    // 0x170fd4: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x170fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170fd8: 0xe6a00078  swc1        $f0, 0x78($s5)
    ctx->pc = 0x170fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 120), bits); }
    // 0x170fdc: 0x26b50090  addiu       $s5, $s5, 0x90
    ctx->pc = 0x170fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x170fe0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x170fe0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x170fe4: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x170fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x170fe8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x170FE8u;
    {
        const bool branch_taken_0x170fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x170fe8) {
            ctx->pc = 0x170FC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170fc4;
        }
    }
    ctx->pc = 0x170FF0u;
}
