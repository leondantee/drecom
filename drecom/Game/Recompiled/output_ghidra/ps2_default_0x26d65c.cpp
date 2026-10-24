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

// Function: default
// Address: 0x26d65c - 0x26d690
void ps2_default_0x26d65c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x26d65c");
#endif

    ctx->pc = 0x26d65cu;

    // 0x26d65c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d660: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x26d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26d664: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26d664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d668: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x26d668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x26d66c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26d670: 0x84a3127c  lh          $v1, 0x127C($a1)
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4732)));
    // 0x26d674: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26d678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26d67c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26d67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26d680: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D680u;
    {
        const bool branch_taken_0x26d680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d680) {
            ctx->pc = 0x26D690u;
            return;
        }
    }
    ctx->pc = 0x26D688u;
    // 0x26d688: 0xc0bc094  jal         func_2F0250
    ctx->pc = 0x26D688u;
    SET_GPR_U32(ctx, 31, 0x26D690u);
    ctx->pc = 0x2F0250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0250u, 0x26D688u, 0x26D690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D690u;
}
