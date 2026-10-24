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

// Function: entry_0018cba0
// Address: 0x18cba0 - 0x18cbcc
void entry_0018cba0_0x18cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cba0_0x18cba0");
#endif

    ctx->pc = 0x18cba0u;

    // 0x18cba0: 0x9202036c  lbu         $v0, 0x36C($s0)
    ctx->pc = 0x18cba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x18cba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cba8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x18CBA8u;
    {
        const bool branch_taken_0x18cba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cba8) {
            ctx->pc = 0x18CBD8u;
            return;
        }
    }
    ctx->pc = 0x18CBB0u;
    // 0x18cbb0: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CBB0u;
    {
        const bool branch_taken_0x18cbb0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cbb0) {
            ctx->pc = 0x18CBCCu;
            return;
        }
    }
    ctx->pc = 0x18CBB8u;
    // 0x18cbb8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18cbbc: 0xae020350  sw          $v0, 0x350($s0)
    ctx->pc = 0x18cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 2));
    // 0x18cbc0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18cbc0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18cbc4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x18CBC4u;
    {
        const bool branch_taken_0x18cbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbc4) {
            ctx->pc = 0x18CC78u;
            return;
        }
    }
    ctx->pc = 0x18CBCCu;
}
