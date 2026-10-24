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

// Function: entry_002f1558
// Address: 0x2f1558 - 0x2f157c
void entry_002f1558_0x2f1558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f1558_0x2f1558");
#endif

    ctx->pc = 0x2f1558u;

    // 0x2f1558: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x2f1558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2f155c: 0x1460ff02  bnez        $v1, . + 4 + (-0xFE << 2)
    ctx->pc = 0x2F155Cu;
    {
        const bool branch_taken_0x2f155c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f155c) {
            ctx->pc = 0x2F1168u;
            return;
        }
    }
    ctx->pc = 0x2F1564u;
    // 0x2f1564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f1564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1568: 0x0  nop
    ctx->pc = 0x2f1568u;
    // NOP
    // 0x2f156c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2f156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2f1570: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f1570u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f1574: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x2F1574u;
    {
        const bool branch_taken_0x2f1574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f1574) {
            ctx->pc = 0x2F18F8u;
            return;
        }
    }
    ctx->pc = 0x2F157Cu;
}
