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

// Function: entry_0031400c
// Address: 0x31400c - 0x314030
void entry_0031400c_0x31400c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031400c_0x31400c");
#endif

    ctx->pc = 0x31400cu;

    // 0x31400c: 0x3c024509  lui         $v0, 0x4509
    ctx->pc = 0x31400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17673 << 16));
    // 0x314010: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x314010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x314014: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314018: 0x0  nop
    ctx->pc = 0x314018u;
    // NOP
    // 0x31401c: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x31401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x314020: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x314020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x314024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314028: 0x0  nop
    ctx->pc = 0x314028u;
    // NOP
    // 0x31402c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x31402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x314030u;
}
