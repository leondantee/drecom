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

// Function: entry_001ce954
// Address: 0x1ce954 - 0x1ce988
void entry_001ce954_0x1ce954(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce954_0x1ce954");
#endif

    ctx->pc = 0x1ce954u;

label_1ce954:
    // 0x1ce954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ce954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1ce958:
    // 0x1ce958: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1ce958u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_1ce95c:
    // 0x1ce95c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1ce95cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ce960:
    // 0x1ce960: 0x2ca10012  sltiu       $at, $a1, 0x12
    ctx->pc = 0x1ce960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_1ce964:
    // 0x1ce964: 0x1020058c  beqz        $at, . + 4 + (0x58C << 2)
label_1ce968:
    if (ctx->pc == 0x1CE968u) {
        ctx->pc = 0x1CE96Cu;
        goto label_1ce96c;
    }
    ctx->pc = 0x1CE964u;
    {
        const bool branch_taken_0x1ce964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce964) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CE96Cu;
label_1ce96c:
    // 0x1ce96c: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1ce96cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
label_1ce970:
    // 0x1ce970: 0x2607f530  addiu       $a3, $s0, -0xAD0
    ctx->pc = 0x1ce970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964528));
label_1ce974:
    // 0x1ce974: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x1ce974u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ce978:
    // 0x1ce978: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_1ce97c:
    // 0x1ce97c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ce97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce980:
    // 0x1ce980: 0x600008  jr          $v1
label_1ce984:
    if (ctx->pc == 0x1CE984u) {
        ctx->pc = 0x1CE988u;
        goto label_fallthrough_0x1ce980;
    }
    ctx->pc = 0x1CE980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ce980:
    ctx->pc = 0x1CE988u;
}
