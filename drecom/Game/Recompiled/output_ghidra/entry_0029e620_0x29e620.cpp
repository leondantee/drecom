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

// Function: entry_0029e620
// Address: 0x29e620 - 0x29e684
void entry_0029e620_0x29e620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029e620_0x29e620");
#endif

    switch (ctx->pc) {
        case 0x29e628u: goto label_29e628;
        default: break;
    }

    ctx->pc = 0x29e620u;

    // 0x29e620: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29E620u;
    SET_GPR_U32(ctx, 31, 0x29E628u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29E620u, 0x29E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E628u;
label_29e628:
    // 0x29e628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e62c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x29e62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x29e630: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x29e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x29e634: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x29e634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29e638: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x29e638u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29e63c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e640: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x29e640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x29e644: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x29e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x29e648: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29e648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29e64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e650: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e654: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e658: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x29e65c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x29e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x29e660: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e664: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29E664u;
    {
        const bool branch_taken_0x29e664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e664) {
            ctx->pc = 0x29E684u;
            return;
        }
    }
    ctx->pc = 0x29E66Cu;
    // 0x29e66c: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x29e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x29e670: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x29e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x29e674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29e678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29e67c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x29e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29e680: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x29e680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    ctx->pc = 0x29e684u;
}
