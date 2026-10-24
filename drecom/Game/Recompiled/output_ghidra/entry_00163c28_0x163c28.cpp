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

// Function: entry_00163c28
// Address: 0x163c28 - 0x163c40
void entry_00163c28_0x163c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163c28_0x163c28");
#endif

    ctx->pc = 0x163c28u;

    // 0x163c28: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x163c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x163c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163c30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x163c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163c34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x163c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x163c38: 0xc420dc94  lwc1        $f0, -0x236C($at)
    ctx->pc = 0x163c38u;
    { uint32_t bits = FAST_READ32(0x3EDC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163c3c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x163c3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x163c40u;
}
