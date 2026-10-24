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

// Function: entry_001966a0
// Address: 0x1966a0 - 0x1966dc
void entry_001966a0_0x1966a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001966a0_0x1966a0");
#endif

    ctx->pc = 0x1966a0u;

    // 0x1966a0: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x1966a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1966a4: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1966A4u;
    {
        const bool branch_taken_0x1966a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1966a4) {
            ctx->pc = 0x196664u;
            return;
        }
    }
    ctx->pc = 0x1966ACu;
    // 0x1966ac: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x1966acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1966b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1966b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1966b4: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1966B4u;
    {
        const bool branch_taken_0x1966b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1966b4) {
            ctx->pc = 0x196760u;
            return;
        }
    }
    ctx->pc = 0x1966BCu;
    // 0x1966bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1966bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1966c0: 0x162180  sll         $a0, $s6, 6
    ctx->pc = 0x1966c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1966c4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1966c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1966c8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1966c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1966cc: 0x8e750038  lw          $s5, 0x38($s3)
    ctx->pc = 0x1966ccu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1966d0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1966d0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1966d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1966D4u;
    {
        const bool branch_taken_0x1966d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1966d4) {
            ctx->pc = 0x196748u;
            return;
        }
    }
    ctx->pc = 0x1966DCu;
}
