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

// Function: entry_00230014
// Address: 0x230014 - 0x23007c
void entry_00230014_0x230014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230014_0x230014");
#endif

    ctx->pc = 0x230014u;

label_230014:
    // 0x230014: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x230014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_230018:
    // 0x230018: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x230018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23001c:
    // 0x23001c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_230020:
    // 0x230020: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230024:
    // 0x230024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230028:
    // 0x230028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23002c:
    // 0x23002c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x23002cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_230030:
    // 0x230030: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x230030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230034:
    // 0x230034: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x230034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_230038:
    // 0x230038: 0x24723520  addiu       $s2, $v1, 0x3520
    ctx->pc = 0x230038u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 13600));
label_23003c:
    // 0x23003c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_230040:
    // 0x230040: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x230040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_230044:
    // 0x230044: 0x24740880  addiu       $s4, $v1, 0x880
    ctx->pc = 0x230044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
label_230048:
    // 0x230048: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_23004c:
    // 0x23004c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x23004cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_230050:
    // 0x230050: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x230050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_230054:
    // 0x230054: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x230054u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_230058:
    // 0x230058: 0x102001ce  beqz        $at, . + 4 + (0x1CE << 2)
label_23005c:
    if (ctx->pc == 0x23005Cu) {
        ctx->pc = 0x230060u;
        goto label_230060;
    }
    ctx->pc = 0x230058u;
    {
        const bool branch_taken_0x230058 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x230058) {
            ctx->pc = 0x230794u;
            return;
        }
    }
    ctx->pc = 0x230060u;
label_230060:
    // 0x230060: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_230064:
    // 0x230064: 0x24641190  addiu       $a0, $v1, 0x1190
    ctx->pc = 0x230064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4496));
label_230068:
    // 0x230068: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x230068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_23006c:
    // 0x23006c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_230070:
    // 0x230070: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x230070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_230074:
    // 0x230074: 0x600008  jr          $v1
label_230078:
    if (ctx->pc == 0x230078u) {
        ctx->pc = 0x23007Cu;
        goto label_fallthrough_0x230074;
    }
    ctx->pc = 0x230074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x230074:
    ctx->pc = 0x23007Cu;
}
