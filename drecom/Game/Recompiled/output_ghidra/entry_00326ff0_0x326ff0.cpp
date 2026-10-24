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

// Function: entry_00326ff0
// Address: 0x326ff0 - 0x327020
void entry_00326ff0_0x326ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326ff0_0x326ff0");
#endif

    ctx->pc = 0x326ff0u;

    // 0x326ff0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x326ff0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ff4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x326ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326ff8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x326ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x326ffc: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x326ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x327000: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327004: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327008: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x327008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32700c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32700cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327010: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x327010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327014: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x327014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x327018: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x327018u;
    {
        const bool branch_taken_0x327018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327018) {
            ctx->pc = 0x32704Cu;
            return;
        }
    }
    ctx->pc = 0x327020u;
}
