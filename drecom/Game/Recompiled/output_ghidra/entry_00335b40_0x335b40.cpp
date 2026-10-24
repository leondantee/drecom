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

// Function: entry_00335b40
// Address: 0x335b40 - 0x335b74
void entry_00335b40_0x335b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335b40_0x335b40");
#endif

    ctx->pc = 0x335b40u;

    // 0x335b40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b44: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x335b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x335b48: 0xac239a08  sw          $v1, -0x65F8($at)
    ctx->pc = 0x335b48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3A9A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A9A08u, _value); } while (0);
    // 0x335b4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b50: 0xae035dc8  sw          $v1, 0x5DC8($s0)
    ctx->pc = 0x335b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24008), GPR_U32(ctx, 3));
    // 0x335b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b58: 0x0  nop
    ctx->pc = 0x335b58u;
    // NOP
    // 0x335b5c: 0xe6005e00  swc1        $f0, 0x5E00($s0)
    ctx->pc = 0x335b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24064), bits); }
    // 0x335b60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x335b60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335b64: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x335b64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x335b68: 0xe4203340  swc1        $f0, 0x3340($at)
    ctx->pc = 0x335b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x893340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x893340u, _value); } while (0); }
    // 0x335b6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b70: 0xa20365a8  sb          $v1, 0x65A8($s0)
    ctx->pc = 0x335b70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26024), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x335b74u;
}
