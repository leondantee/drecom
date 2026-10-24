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

// Function: entry_001b2410
// Address: 0x1b2410 - 0x1b2430
void entry_001b2410_0x1b2410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2410_0x1b2410");
#endif

    ctx->pc = 0x1b2410u;

    // 0x1b2410: 0x3c024cbe  lui         $v0, 0x4CBE
    ctx->pc = 0x1b2410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19646 << 16));
    // 0x1b2414: 0x3443bc20  ori         $v1, $v0, 0xBC20
    ctx->pc = 0x1b2414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
    // 0x1b2418: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b2418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b241c: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x1b241cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x1b2420: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b2420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2424: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b242c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b242cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->pc = 0x1b2430u;
}
