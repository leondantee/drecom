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

// Function: caseD_f
// Address: 0x1232d0 - 0x1232e0
void caseD_f_0x1232d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x1232d0");
#endif

    ctx->pc = 0x1232d0u;

    // 0x1232d0: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1232d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x1232d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1232d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1232d8: 0x0  nop
    ctx->pc = 0x1232d8u;
    // NOP
    // 0x1232dc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1232dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x1232e0u;
}
