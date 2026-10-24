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

// Function: entry_00172f8c
// Address: 0x172f8c - 0x172f9c
void entry_00172f8c_0x172f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172f8c_0x172f8c");
#endif

    ctx->pc = 0x172f8cu;

    // 0x172f8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x172f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x172f90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172f94: 0x0  nop
    ctx->pc = 0x172f94u;
    // NOP
    // 0x172f98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x172f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->pc = 0x172f9cu;
}
