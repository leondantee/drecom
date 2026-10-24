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

// Function: caseD_7
// Address: 0x2605fc - 0x260614
void caseD_7_0x2605fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x2605fc");
#endif

    ctx->pc = 0x2605fcu;

    // 0x2605fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2605fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260600: 0x0  nop
    ctx->pc = 0x260600u;
    // NOP
    // 0x260604: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x260604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x260608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x260608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26060c: 0x0  nop
    ctx->pc = 0x26060cu;
    // NOP
    // 0x260610: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x260610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    ctx->pc = 0x260614u;
}
