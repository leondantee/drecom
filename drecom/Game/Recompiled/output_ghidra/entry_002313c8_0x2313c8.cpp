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

// Function: entry_002313c8
// Address: 0x2313c8 - 0x231424
void entry_002313c8_0x2313c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002313c8_0x2313c8");
#endif

    ctx->pc = 0x2313c8u;

label_2313c8:
    // 0x2313c8: 0x3c043dc9  lui         $a0, 0x3DC9
    ctx->pc = 0x2313c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15817 << 16));
label_2313cc:
    // 0x2313cc: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2313ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
label_2313d0:
    // 0x2313d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2313d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313d4:
    // 0x2313d4: 0x0  nop
    ctx->pc = 0x2313d4u;
    // NOP
label_2313d8:
    // 0x2313d8: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2313d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_2313dc:
    // 0x2313dc: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x2313dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
label_2313e0:
    // 0x2313e0: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x2313e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_2313e4:
    // 0x2313e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2313e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2313e8:
    // 0x2313e8: 0x0  nop
    ctx->pc = 0x2313e8u;
    // NOP
label_2313ec:
    // 0x2313ec: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x2313ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_2313f0:
    // 0x2313f0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2313f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_2313f4:
    // 0x2313f4: 0x90850029  lbu         $a1, 0x29($a0)
    ctx->pc = 0x2313f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 41)));
label_2313f8:
    // 0x2313f8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2313f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2313fc:
    // 0x2313fc: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_231400:
    // 0x231400: 0x1020050b  beqz        $at, . + 4 + (0x50B << 2)
label_231404:
    if (ctx->pc == 0x231404u) {
        ctx->pc = 0x231408u;
        goto label_231408;
    }
    ctx->pc = 0x231400u;
    {
        const bool branch_taken_0x231400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x231400) {
            ctx->pc = 0x232830u;
            return;
        }
    }
    ctx->pc = 0x231408u;
label_231408:
    // 0x231408: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x231408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_23140c:
    // 0x23140c: 0x246511b0  addiu       $a1, $v1, 0x11B0
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4528));
label_231410:
    // 0x231410: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_231414:
    // 0x231414: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_231418:
    // 0x231418: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x231418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23141c:
    // 0x23141c: 0x600008  jr          $v1
label_231420:
    if (ctx->pc == 0x231420u) {
        ctx->pc = 0x231424u;
        goto label_fallthrough_0x23141c;
    }
    ctx->pc = 0x23141Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23141Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x23141c:
    ctx->pc = 0x231424u;
}
