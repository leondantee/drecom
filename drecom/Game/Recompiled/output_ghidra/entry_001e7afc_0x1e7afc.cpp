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

// Function: entry_001e7afc
// Address: 0x1e7afc - 0x1e7b2c
void entry_001e7afc_0x1e7afc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e7afc_0x1e7afc");
#endif

    ctx->pc = 0x1e7afcu;

    // 0x1e7afc: 0x8fa503b8  lw          $a1, 0x3B8($sp)
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x1e7b00: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e7b04: 0xafa303b8  sw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 3));
    // 0x1e7b08: 0x8fa303b8  lw          $v1, 0x3B8($sp)
    ctx->pc = 0x1e7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x1e7b0c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1e7b10: 0x90630220  lbu         $v1, 0x220($v1)
    ctx->pc = 0x1e7b10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 544)));
    // 0x1e7b14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7B14u;
    {
        const bool branch_taken_0x1e7b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b14) {
            ctx->pc = 0x1E7B2Cu;
            return;
        }
    }
    ctx->pc = 0x1E7B1Cu;
    // 0x1e7b1c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x1e7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e7b20: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x1e7b20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e7b24: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x1E7B24u;
    {
        const bool branch_taken_0x1e7b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b24) {
            ctx->pc = 0x1E80F0u;
            return;
        }
    }
    ctx->pc = 0x1E7B2Cu;
}
