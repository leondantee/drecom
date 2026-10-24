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

// Function: entry_001a4570
// Address: 0x1a4570 - 0x1a45c0
void entry_001a4570_0x1a4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4570_0x1a4570");
#endif

    ctx->pc = 0x1a4570u;

    // 0x1a4570: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4574: 0xac7202fc  sw          $s2, 0x2FC($v1)
    ctx->pc = 0x1a4574u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 764), GPR_U32(ctx, 18));
    // 0x1a4578: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a457c: 0x90650312  lbu         $a1, 0x312($v1)
    ctx->pc = 0x1a457cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 786)));
    // 0x1a4580: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1a4580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a4584: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1a4588: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1a4588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1a458c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1a458cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1a4590: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a4590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4594: 0x8c630300  lw          $v1, 0x300($v1)
    ctx->pc = 0x1a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x1a4598: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a459c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45a0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1a45a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1a45a4: 0x85082b  sltu        $at, $a0, $a1
    ctx->pc = 0x1a45a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1a45a8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A45A8u;
    {
        const bool branch_taken_0x1a45a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45a8) {
            ctx->pc = 0x1A45C0u;
            return;
        }
    }
    ctx->pc = 0x1A45B0u;
    // 0x1a45b0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1a45b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45b4: 0x8c730300  lw          $s3, 0x300($v1)
    ctx->pc = 0x1a45b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 768)));
    // 0x1a45b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A45B8u;
    {
        const bool branch_taken_0x1a45b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45b8) {
            ctx->pc = 0x1A45E4u;
            return;
        }
    }
    ctx->pc = 0x1A45C0u;
}
