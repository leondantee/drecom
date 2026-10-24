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

// Function: entry_00331284
// Address: 0x331284 - 0x3312e0
void entry_00331284_0x331284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331284_0x331284");
#endif

    ctx->pc = 0x331284u;

label_331284:
    // 0x331284: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x331284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_331288:
    // 0x331288: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x331288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
label_33128c:
    // 0x33128c: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x33128cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
label_331290:
    // 0x331290: 0x34c72b16  ori         $a3, $a2, 0x2B16
    ctx->pc = 0x331290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
label_331294:
    // 0x331294: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x331294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_331298:
    // 0x331298: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x331298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_33129c:
    // 0x33129c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x33129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3312a0:
    // 0x3312a0: 0x34680040  ori         $t0, $v1, 0x40
    ctx->pc = 0x3312a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_3312a4:
    // 0x3312a4: 0xae080004  sw          $t0, 0x4($s0)
    ctx->pc = 0x3312a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
label_3312a8:
    // 0x3312a8: 0x92c90006  lbu         $t1, 0x6($s6)
    ctx->pc = 0x3312a8u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 6)));
label_3312ac:
    // 0x3312ac: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x3312acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_3312b0:
    // 0x3312b0: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x3312b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3312b4:
    // 0x3312b4: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_3312b8:
    if (ctx->pc == 0x3312B8u) {
        ctx->pc = 0x3312BCu;
        goto label_3312bc;
    }
    ctx->pc = 0x3312B4u;
    {
        const bool branch_taken_0x3312b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3312b4) {
            ctx->pc = 0x331380u;
            return;
        }
    }
    ctx->pc = 0x3312BCu;
label_3312bc:
    // 0x3312bc: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3312bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3312c0:
    // 0x3312c0: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x3312c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
label_3312c4:
    // 0x3312c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3312c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3312c8:
    // 0x3312c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3312c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3312cc:
    // 0x3312cc: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3312ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3312d0:
    // 0x3312d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3312d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3312d4:
    // 0x3312d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3312d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3312d8:
    // 0x3312d8: 0x400008  jr          $v0
label_3312dc:
    if (ctx->pc == 0x3312DCu) {
        ctx->pc = 0x3312E0u;
        goto label_fallthrough_0x3312d8;
    }
    ctx->pc = 0x3312D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3312D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x3312d8:
    ctx->pc = 0x3312E0u;
}
