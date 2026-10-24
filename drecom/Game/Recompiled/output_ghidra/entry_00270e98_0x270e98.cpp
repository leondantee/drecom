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

// Function: entry_00270e98
// Address: 0x270e98 - 0x270eec
void entry_00270e98_0x270e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270e98_0x270e98");
#endif

    ctx->pc = 0x270e98u;

    // 0x270e98: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x270e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x270e9c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x270e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x270ea0: 0x860210a6  lh          $v0, 0x10A6($s0)
    ctx->pc = 0x270ea0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x270ea4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x270ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x270ea8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x270ea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x270eac: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x270EACu;
    {
        const bool branch_taken_0x270eac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270eac) {
            ctx->pc = 0x270EECu;
            return;
        }
    }
    ctx->pc = 0x270EB4u;
    // 0x270eb4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x270eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270eb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x270eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x270ebc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x270EBCu;
    {
        const bool branch_taken_0x270ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ebc) {
            ctx->pc = 0x270EECu;
            return;
        }
    }
    ctx->pc = 0x270EC4u;
    // 0x270ec4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x270ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x270ec8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x270ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x270ecc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270ECCu;
    {
        const bool branch_taken_0x270ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ecc) {
            ctx->pc = 0x270EECu;
            return;
        }
    }
    ctx->pc = 0x270ED4u;
    // 0x270ed4: 0x920210a8  lbu         $v0, 0x10A8($s0)
    ctx->pc = 0x270ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4264)));
    // 0x270ed8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270ED8u;
    {
        const bool branch_taken_0x270ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ed8) {
            ctx->pc = 0x270EECu;
            return;
        }
    }
    ctx->pc = 0x270EE0u;
    // 0x270ee0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x270ee0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x270ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270EE4u;
    {
        const bool branch_taken_0x270ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ee4) {
            ctx->pc = 0x270F08u;
            return;
        }
    }
    ctx->pc = 0x270EECu;
}
