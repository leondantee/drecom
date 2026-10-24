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

// Function: entry_0032309c
// Address: 0x32309c - 0x3230b8
void entry_0032309c_0x32309c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032309c_0x32309c");
#endif

    ctx->pc = 0x32309cu;

    // 0x32309c: 0x93a200e8  lbu         $v0, 0xE8($sp)
    ctx->pc = 0x32309cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3230a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3230a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3230a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3230A4u;
    {
        const bool branch_taken_0x3230a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3230a4) {
            ctx->pc = 0x3230B8u;
            return;
        }
    }
    ctx->pc = 0x3230ACu;
    // 0x3230ac: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x3230acu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3230b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3230B0u;
    {
        const bool branch_taken_0x3230b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3230b0) {
            ctx->pc = 0x3230BCu;
            return;
        }
    }
    ctx->pc = 0x3230B8u;
}
