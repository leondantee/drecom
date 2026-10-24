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

// Function: entry_001fa21c
// Address: 0x1fa21c - 0x1fa268
void entry_001fa21c_0x1fa21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa21c_0x1fa21c");
#endif

    switch (ctx->pc) {
        case 0x1fa234u: goto label_1fa234;
        case 0x1fa250u: goto label_1fa250;
        default: break;
    }

    ctx->pc = 0x1fa21cu;

    // 0x1fa21c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa220: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x1fa220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa224: 0xc60d011c  lwc1        $f13, 0x11C($s0)
    ctx->pc = 0x1fa224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa228: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x1fa228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa22c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1FA22Cu;
    SET_GPR_U32(ctx, 31, 0x1FA234u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1FA22Cu, 0x1FA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA234u;
label_1fa234:
    // 0x1fa234: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x1fa234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x1fa238: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x1fa238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1fa23c: 0xc7ac0028  lwc1        $f12, 0x28($sp)
    ctx->pc = 0x1fa23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fa240: 0xc60d0120  lwc1        $f13, 0x120($s0)
    ctx->pc = 0x1fa240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1fa244: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x1fa244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1fa248: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1FA248u;
    SET_GPR_U32(ctx, 31, 0x1FA250u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1FA248u, 0x1FA250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA250u;
label_1fa250:
    // 0x1fa250: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1fa250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1fa254: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa254u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa258: 0x0  nop
    ctx->pc = 0x1fa258u;
    // NOP
    // 0x1fa25c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x1fa25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x1fa260: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FA260u;
    {
        const bool branch_taken_0x1fa260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa260) {
            ctx->pc = 0x1FA28Cu;
            return;
        }
    }
    ctx->pc = 0x1FA268u;
}
