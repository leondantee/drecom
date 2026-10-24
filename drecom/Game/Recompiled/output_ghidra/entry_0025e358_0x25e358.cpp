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

// Function: entry_0025e358
// Address: 0x25e358 - 0x25e39c
void entry_0025e358_0x25e358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e358_0x25e358");
#endif

    switch (ctx->pc) {
        case 0x25e390u: goto label_25e390;
        default: break;
    }

    ctx->pc = 0x25e358u;

    // 0x25e358: 0x96220140  lhu         $v0, 0x140($s1)
    ctx->pc = 0x25e358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x25e35c: 0x34440040  ori         $a0, $v0, 0x40
    ctx->pc = 0x25e35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x25e360: 0xa6240140  sh          $a0, 0x140($s1)
    ctx->pc = 0x25e360u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x25e364: 0x8e05034c  lw          $a1, 0x34C($s0)
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 844)));
    // 0x25e368: 0xb43021  addu        $a2, $a1, $s4
    ctx->pc = 0x25e368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x25e36c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x25e36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25e370: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x25e370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25e374: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25e374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25e378: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25E378u;
    {
        const bool branch_taken_0x25e378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25e378) {
            ctx->pc = 0x25E39Cu;
            return;
        }
    }
    ctx->pc = 0x25E380u;
    // 0x25e380: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x25e380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x25e384: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e388: 0xc0986d8  jal         func_261B60
    ctx->pc = 0x25E388u;
    SET_GPR_U32(ctx, 31, 0x25E390u);
    ctx->pc = 0x261B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261B60u, 0x25E388u, 0x25E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E390u;
label_25e390:
    // 0x25e390: 0xe60015e4  swc1        $f0, 0x15E4($s0)
    ctx->pc = 0x25e390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5604), bits); }
    // 0x25e394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25E394u;
    {
        const bool branch_taken_0x25e394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e394) {
            ctx->pc = 0x25E3B0u;
            return;
        }
    }
    ctx->pc = 0x25E39Cu;
}
