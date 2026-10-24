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

// Function: entry_001dd95c
// Address: 0x1dd95c - 0x1dd990
void entry_001dd95c_0x1dd95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd95c_0x1dd95c");
#endif

    ctx->pc = 0x1dd95cu;

label_1dd95c:
    // 0x1dd95c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1dd95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd960: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x1dd960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x1dd964: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x1dd964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd968: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x1dd968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x1dd96c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1dd96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd970: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x1dd970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x1dd974: 0x26d60090  addiu       $s6, $s6, 0x90
    ctx->pc = 0x1dd974u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x1dd978: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x1dd978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1dd97c: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x1dd97cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1dd980: 0x7e182b  sltu        $v1, $v1, $fp
    ctx->pc = 0x1dd980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x1dd984: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1DD984u;
    {
        const bool branch_taken_0x1dd984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd984) {
            ctx->pc = 0x1DD95Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd95c;
        }
    }
    ctx->pc = 0x1DD98Cu;
    // 0x1dd98c: 0x0  nop
    ctx->pc = 0x1dd98cu;
    // NOP
    ctx->pc = 0x1dd990u;
}
