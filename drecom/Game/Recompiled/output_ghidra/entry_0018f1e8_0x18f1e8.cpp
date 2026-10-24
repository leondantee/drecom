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

// Function: entry_0018f1e8
// Address: 0x18f1e8 - 0x18f214
void entry_0018f1e8_0x18f1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1e8_0x18f1e8");
#endif

    ctx->pc = 0x18f1e8u;

    // 0x18f1e8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x18f1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f1ec: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x18f1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x18f1f0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x18f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x18f1f4: 0x94630118  lhu         $v1, 0x118($v1)
    ctx->pc = 0x18f1f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x18f1f8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x18f1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x18f1fc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18f1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18f200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18F200u;
    {
        const bool branch_taken_0x18f200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f200) {
            ctx->pc = 0x18F214u;
            return;
        }
    }
    ctx->pc = 0x18F208u;
    // 0x18f208: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x18f208u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18f20c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18F20Cu;
    {
        const bool branch_taken_0x18f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f20c) {
            ctx->pc = 0x18F294u;
            return;
        }
    }
    ctx->pc = 0x18F214u;
}
