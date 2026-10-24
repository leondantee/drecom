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

// Function: entry_0013ece8
// Address: 0x13ece8 - 0x13ed24
void entry_0013ece8_0x13ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ece8_0x13ece8");
#endif

    ctx->pc = 0x13ece8u;

    // 0x13ece8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x13ece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13ecec: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x13ececu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13ecf0: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x13ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x13ecf4: 0x90450240  lbu         $a1, 0x240($v0)
    ctx->pc = 0x13ecf4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x13ecf8: 0x30a600ff  andi        $a2, $a1, 0xFF
    ctx->pc = 0x13ecf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ecfc: 0x30c70002  andi        $a3, $a2, 0x2
    ctx->pc = 0x13ecfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x13ed00: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED00u;
    {
        const bool branch_taken_0x13ed00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ed00) {
            ctx->pc = 0x13ED24u;
            return;
        }
    }
    ctx->pc = 0x13ED08u;
    // 0x13ed08: 0x8fa51684  lw          $a1, 0x1684($sp)
    ctx->pc = 0x13ed08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed0c: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x13ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13ed10: 0xafa61684  sw          $a2, 0x1684($sp)
    ctx->pc = 0x13ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5764), GPR_U32(ctx, 6));
    // 0x13ed14: 0x8fa71684  lw          $a3, 0x1684($sp)
    ctx->pc = 0x13ed14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5764)));
    // 0x13ed18: 0x70e09628  paddub      $s2, $a3, $zero
    ctx->pc = 0x13ed18u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13ed1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13ED1Cu;
    {
        const bool branch_taken_0x13ed1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ed1c) {
            ctx->pc = 0x13ED40u;
            return;
        }
    }
    ctx->pc = 0x13ED24u;
}
