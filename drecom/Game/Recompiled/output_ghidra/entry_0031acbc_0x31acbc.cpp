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

// Function: entry_0031acbc
// Address: 0x31acbc - 0x31accc
void entry_0031acbc_0x31acbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031acbc_0x31acbc");
#endif

    ctx->pc = 0x31acbcu;

    // 0x31acbc: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x31acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x31acc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31acc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31acc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x31acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x31acc8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x31acc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x31acccu;
}
