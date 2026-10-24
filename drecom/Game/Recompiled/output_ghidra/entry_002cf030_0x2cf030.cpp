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

// Function: entry_002cf030
// Address: 0x2cf030 - 0x2cf08c
void entry_002cf030_0x2cf030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf030_0x2cf030");
#endif

    ctx->pc = 0x2cf030u;

    // 0x2cf030: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2cf034: 0x16050015  bne         $s0, $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CF034u;
    {
        const bool branch_taken_0x2cf034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x2cf034) {
            ctx->pc = 0x2CF08Cu;
            return;
        }
    }
    ctx->pc = 0x2CF03Cu;
    // 0x2cf03c: 0x8fb40118  lw          $s4, 0x118($sp)
    ctx->pc = 0x2cf03cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf040: 0x2684134c  addiu       $a0, $s4, 0x134C
    ctx->pc = 0x2cf040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4940));
    // 0x2cf044: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf048: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf04c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2cf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cf050: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cf054: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2cf054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2cf058: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cf05c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2cf05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf060: 0x2465134c  addiu       $a1, $v1, 0x134C
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2cf064: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf068: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x2cf068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf06c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x2cf06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2cf070: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf074: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2cf074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cf078: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x2cf078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf07c: 0xc73823  subu        $a3, $a2, $a3
    ctx->pc = 0x2cf07cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2cf080: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x2cf080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x2cf084: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2CF084u;
    {
        const bool branch_taken_0x2cf084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf084) {
            ctx->pc = 0x2CF0D8u;
            return;
        }
    }
    ctx->pc = 0x2CF08Cu;
}
