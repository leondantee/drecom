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

// Function: entry_0029ce24
// Address: 0x29ce24 - 0x29ce40
void entry_0029ce24_0x29ce24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ce24_0x29ce24");
#endif

    ctx->pc = 0x29ce24u;

    // 0x29ce24: 0x3c024466  lui         $v0, 0x4466
    ctx->pc = 0x29ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17510 << 16));
    // 0x29ce28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x29ce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x29ce2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ce30: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x29ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x29ce34: 0x8c22bb5c  lw          $v0, -0x44A4($at)
    ctx->pc = 0x29ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB5Cu));
    // 0x29ce38: 0xe44012b0  swc1        $f0, 0x12B0($v0)
    ctx->pc = 0x29ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4784), bits); }
    // 0x29ce3c: 0x0  nop
    ctx->pc = 0x29ce3cu;
    // NOP
    ctx->pc = 0x29ce40u;
}
