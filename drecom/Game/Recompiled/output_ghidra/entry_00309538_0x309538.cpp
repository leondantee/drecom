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

// Function: entry_00309538
// Address: 0x309538 - 0x309550
void entry_00309538_0x309538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00309538_0x309538");
#endif

    ctx->pc = 0x309538u;

    // 0x309538: 0x3c033f20  lui         $v1, 0x3F20
    ctx->pc = 0x309538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16160 << 16));
    // 0x30953c: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x30953cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
    // 0x309540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309544: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309548: 0x24631334  addiu       $v1, $v1, 0x1334
    ctx->pc = 0x309548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4916));
    // 0x30954c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x30954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    ctx->pc = 0x309550u;
}
