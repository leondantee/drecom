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

// Function: entry_00171f0c
// Address: 0x171f0c - 0x171f48
void entry_00171f0c_0x171f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f0c_0x171f0c");
#endif

    ctx->pc = 0x171f0cu;

label_171f0c:
    // 0x171f0c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x171f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f10: 0xe6c00070  swc1        $f0, 0x70($s6)
    ctx->pc = 0x171f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 112), bits); }
    // 0x171f14: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x171f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f18: 0xe6c00074  swc1        $f0, 0x74($s6)
    ctx->pc = 0x171f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 116), bits); }
    // 0x171f1c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x171f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171f20: 0xe6c00078  swc1        $f0, 0x78($s6)
    ctx->pc = 0x171f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 120), bits); }
    // 0x171f24: 0x26c50090  addiu       $a1, $s6, 0x90
    ctx->pc = 0x171f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x171f28: 0x70a0b628  paddub      $s6, $a1, $zero
    ctx->pc = 0x171f28u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x171f2c: 0x27c40010  addiu       $a0, $fp, 0x10
    ctx->pc = 0x171f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x171f30: 0x7080f628  paddub      $fp, $a0, $zero
    ctx->pc = 0x171f30u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x171f34: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x171f38: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x171f38u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x171f3c: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x171F3Cu;
    {
        const bool branch_taken_0x171f3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x171f3c) {
            ctx->pc = 0x171F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171f0c;
        }
    }
    ctx->pc = 0x171F44u;
    // 0x171f44: 0x0  nop
    ctx->pc = 0x171f44u;
    // NOP
    ctx->pc = 0x171f48u;
}
