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

// Function: entry_002916e8
// Address: 0x2916e8 - 0x291708
void entry_002916e8_0x2916e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002916e8_0x2916e8");
#endif

    ctx->pc = 0x2916e8u;

    // 0x2916e8: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x2916e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x2916ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2916ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2916f0: 0x0  nop
    ctx->pc = 0x2916f0u;
    // NOP
    // 0x2916f4: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2916f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2916f8: 0x3c024374  lui         $v0, 0x4374
    ctx->pc = 0x2916f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17268 << 16));
    // 0x2916fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2916fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291700: 0x0  nop
    ctx->pc = 0x291700u;
    // NOP
    // 0x291704: 0xe7a001d4  swc1        $f0, 0x1D4($sp)
    ctx->pc = 0x291704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    ctx->pc = 0x291708u;
}
