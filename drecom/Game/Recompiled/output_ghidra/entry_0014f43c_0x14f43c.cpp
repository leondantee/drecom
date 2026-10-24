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

// Function: entry_0014f43c
// Address: 0x14f43c - 0x14f47c
void entry_0014f43c_0x14f43c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f43c_0x14f43c");
#endif

    ctx->pc = 0x14f43cu;

    // 0x14f43c: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14f440: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14f444: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f448: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F498u;
            return;
        }
    }
    ctx->pc = 0x14F450u;
    // 0x14f450: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14f450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14f454: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x14f454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x14f458: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f45c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14F45Cu;
    {
        const bool branch_taken_0x14f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f45c) {
            ctx->pc = 0x14F47Cu;
            return;
        }
    }
    ctx->pc = 0x14F464u;
    // 0x14f464: 0x8ec20130  lw          $v0, 0x130($s6)
    ctx->pc = 0x14f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 304)));
    // 0x14f468: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x14f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x14f46c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x14f46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x14f470: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x14f470u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14f474: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14F474u;
    {
        const bool branch_taken_0x14f474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f474) {
            ctx->pc = 0x14F4ACu;
            return;
        }
    }
    ctx->pc = 0x14F47Cu;
}
