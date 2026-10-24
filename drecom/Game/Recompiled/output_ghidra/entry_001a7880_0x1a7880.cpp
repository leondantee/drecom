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

// Function: entry_001a7880
// Address: 0x1a7880 - 0x1a78cc
void entry_001a7880_0x1a7880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7880_0x1a7880");
#endif

    ctx->pc = 0x1a7880u;

    // 0x1a7880: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x1a7880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1a7884: 0x26260003  addiu       $a2, $s1, 0x3
    ctx->pc = 0x1a7884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1a7888: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a7888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a788c: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1a788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1a7890: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1a7890u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1a7894: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x1a7894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1a7898: 0x90a400b3  lbu         $a0, 0xB3($a1)
    ctx->pc = 0x1a7898u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 179)));
    // 0x1a789c: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x1a789cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x1a78a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a78a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a78a4: 0x2406ffc3  addiu       $a2, $zero, -0x3D
    ctx->pc = 0x1a78a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a78a8: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x1a78a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1a78ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1a78acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a78b0: 0xa0a300b3  sb          $v1, 0xB3($a1)
    ctx->pc = 0x1a78b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a78b4: 0x92050317  lbu         $a1, 0x317($s0)
    ctx->pc = 0x1a78b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a78b8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A78B8u;
    {
        const bool branch_taken_0x1a78b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a78b8) {
            ctx->pc = 0x1A78CCu;
            return;
        }
    }
    ctx->pc = 0x1A78C0u;
    // 0x1a78c0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1a78c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a78c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A78C4u;
    {
        const bool branch_taken_0x1a78c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a78c4) {
            ctx->pc = 0x1A78D8u;
            return;
        }
    }
    ctx->pc = 0x1A78CCu;
}
