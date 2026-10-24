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

// Function: entry_001867c8
// Address: 0x1867c8 - 0x1867f4
void entry_001867c8_0x1867c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001867c8_0x1867c8");
#endif

    ctx->pc = 0x1867c8u;

    // 0x1867c8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x1867c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1867cc: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1867CCu;
    {
        const bool branch_taken_0x1867cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1867cc) {
            ctx->pc = 0x186758u;
            return;
        }
    }
    ctx->pc = 0x1867D4u;
    // 0x1867d4: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x1867d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x1867d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1867d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1867dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1867dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867e0: 0x0  nop
    ctx->pc = 0x1867e0u;
    // NOP
    // 0x1867e4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1867e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1867e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1867e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1867ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1867ECu;
    {
        const bool branch_taken_0x1867ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1867ec) {
            ctx->pc = 0x186860u;
            return;
        }
    }
    ctx->pc = 0x1867F4u;
}
