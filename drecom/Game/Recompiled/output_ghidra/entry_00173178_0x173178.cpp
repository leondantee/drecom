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

// Function: entry_00173178
// Address: 0x173178 - 0x17318c
void entry_00173178_0x173178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173178_0x173178");
#endif

    ctx->pc = 0x173178u;

    // 0x173178: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x173178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x17317c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x17317cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x173180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x173180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x173184: 0x0  nop
    ctx->pc = 0x173184u;
    // NOP
    // 0x173188: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x173188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->pc = 0x17318cu;
}
