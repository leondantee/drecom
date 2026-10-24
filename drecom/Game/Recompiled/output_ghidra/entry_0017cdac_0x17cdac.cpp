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

// Function: entry_0017cdac
// Address: 0x17cdac - 0x17cdbc
void entry_0017cdac_0x17cdac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cdac_0x17cdac");
#endif

    ctx->pc = 0x17cdacu;

    // 0x17cdac: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x17cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x17cdb0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17cdb0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cdb4: 0x0  nop
    ctx->pc = 0x17cdb4u;
    // NOP
    // 0x17cdb8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17cdb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x17cdbcu;
}
