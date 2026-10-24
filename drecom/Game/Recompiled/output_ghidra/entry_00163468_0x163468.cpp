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

// Function: entry_00163468
// Address: 0x163468 - 0x163484
void entry_00163468_0x163468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163468_0x163468");
#endif

    ctx->pc = 0x163468u;

    // 0x163468: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x163468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16346c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x16346cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x163470: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x163470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x163474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x163474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163478: 0x0  nop
    ctx->pc = 0x163478u;
    // NOP
    // 0x16347c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x16347cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163480: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x163480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->pc = 0x163484u;
}
