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

// Function: entry_002ceb28
// Address: 0x2ceb28 - 0x2ceb3c
void entry_002ceb28_0x2ceb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ceb28_0x2ceb28");
#endif

    ctx->pc = 0x2ceb28u;

    // 0x2ceb28: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x2ceb28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x2ceb2c: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x2ceb2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2ceb30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ceb30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ceb34: 0x0  nop
    ctx->pc = 0x2ceb34u;
    // NOP
    // 0x2ceb38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2ceb38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->pc = 0x2ceb3cu;
}
