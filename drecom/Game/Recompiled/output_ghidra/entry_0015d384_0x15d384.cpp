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

// Function: entry_0015d384
// Address: 0x15d384 - 0x15d3a0
void entry_0015d384_0x15d384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d384_0x15d384");
#endif

    ctx->pc = 0x15d384u;

    // 0x15d384: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d38c: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d390: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d394: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d398: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d39c: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->pc = 0x15d3a0u;
}
