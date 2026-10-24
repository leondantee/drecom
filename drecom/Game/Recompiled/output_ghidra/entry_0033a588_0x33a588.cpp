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

// Function: entry_0033a588
// Address: 0x33a588 - 0x33a5d0
void entry_0033a588_0x33a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a588_0x33a588");
#endif

    ctx->pc = 0x33a588u;

    // 0x33a588: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x33a588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x33a58c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33A58Cu;
    {
        const bool branch_taken_0x33a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a58c) {
            ctx->pc = 0x33A5D0u;
            return;
        }
    }
    ctx->pc = 0x33A594u;
    // 0x33a594: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x33a594u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a598: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33a598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33a59c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x33a59cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x33a5a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5a8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a5a8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a5ac: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a5b0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a5b4: 0x97a20048  lhu         $v0, 0x48($sp)
    ctx->pc = 0x33a5b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a5b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33a5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33a5bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5c0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33a5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a5c4: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x33a5c4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x33a5c8: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x33a5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a5cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x33a5ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x33a5d0u;
}
