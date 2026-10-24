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

// Function: entry_001a4aec
// Address: 0x1a4aec - 0x1a4b34
void entry_001a4aec_0x1a4aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4aec_0x1a4aec");
#endif

    switch (ctx->pc) {
        case 0x1a4b30u: goto label_1a4b30;
        default: break;
    }

    ctx->pc = 0x1a4aecu;

    // 0x1a4aec: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x1a4aecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4af0: 0x8e64030c  lw          $a0, 0x30C($s3)
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x1a4af4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4af8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a4af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a4afc: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1a4afcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1a4b00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1a4b04: 0x2465cca0  addiu       $a1, $v1, -0x3360
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x1a4b08: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a4b0c: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1a4b0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1a4b10: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1a4b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a4b14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4b18: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4B18u;
    {
        const bool branch_taken_0x1a4b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4b18) {
            ctx->pc = 0x1A4B34u;
            return;
        }
    }
    ctx->pc = 0x1A4B20u;
    // 0x1a4b20: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x1a4b20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4b24: 0x8e64030c  lw          $a0, 0x30C($s3)
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 780)));
    // 0x1a4b28: 0xc05e964  jal         func_17A590
    ctx->pc = 0x1A4B28u;
    SET_GPR_U32(ctx, 31, 0x1A4B30u);
    ctx->pc = 0x17A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A590u, 0x1A4B28u, 0x1A4B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1a4b30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a4b34u;
}
