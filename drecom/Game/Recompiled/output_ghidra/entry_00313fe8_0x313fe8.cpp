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

// Function: entry_00313fe8
// Address: 0x313fe8 - 0x31400c
void entry_00313fe8_0x313fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00313fe8_0x313fe8");
#endif

    ctx->pc = 0x313fe8u;

    // 0x313fe8: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x313fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x313fec: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x313fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x313ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x313ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ff4: 0x0  nop
    ctx->pc = 0x313ff4u;
    // NOP
    // 0x313ff8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x313ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x313ffc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x313ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x314000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x314000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x314004: 0x0  nop
    ctx->pc = 0x314004u;
    // NOP
    // 0x314008: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x314008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x31400cu;
}
