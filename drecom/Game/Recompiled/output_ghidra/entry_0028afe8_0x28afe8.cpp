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

// Function: entry_0028afe8
// Address: 0x28afe8 - 0x28affc
void entry_0028afe8_0x28afe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028afe8_0x28afe8");
#endif

    ctx->pc = 0x28afe8u;

    // 0x28afe8: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x28afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
    // 0x28afec: 0x44881000  mtc1        $t0, $f2
    ctx->pc = 0x28afecu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28aff0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28aff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28aff4: 0x8c292040  lw          $t1, 0x2040($at)
    ctx->pc = 0x28aff4u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x622040u));
    // 0x28aff8: 0xe522009c  swc1        $f2, 0x9C($t1)
    ctx->pc = 0x28aff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 156), bits); }
    ctx->pc = 0x28affcu;
}
