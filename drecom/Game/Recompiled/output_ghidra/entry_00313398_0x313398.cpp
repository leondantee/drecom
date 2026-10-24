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

// Function: entry_00313398
// Address: 0x313398 - 0x3133ac
void entry_00313398_0x313398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313398_0x313398");
#endif

    ctx->pc = 0x313398u;

    // 0x313398: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x313398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31339c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x31339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3133a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3133a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3133a4: 0x0  nop
    ctx->pc = 0x3133a4u;
    // NOP
    // 0x3133a8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3133a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x3133acu;
}
