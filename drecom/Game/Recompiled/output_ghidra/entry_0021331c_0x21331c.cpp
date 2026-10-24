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

// Function: entry_0021331c
// Address: 0x21331c - 0x213328
void entry_0021331c_0x21331c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021331c_0x21331c");
#endif

    ctx->pc = 0x21331cu;

    // 0x21331c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x213320: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x213320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x213324: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x213324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    ctx->pc = 0x213328u;
}
