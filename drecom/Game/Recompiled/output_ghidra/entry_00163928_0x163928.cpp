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

// Function: entry_00163928
// Address: 0x163928 - 0x163938
void entry_00163928_0x163928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163928_0x163928");
#endif

    ctx->pc = 0x163928u;

    // 0x163928: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x163928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x16392c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16392cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163930: 0x0  nop
    ctx->pc = 0x163930u;
    // NOP
    // 0x163934: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x163934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->pc = 0x163938u;
}
