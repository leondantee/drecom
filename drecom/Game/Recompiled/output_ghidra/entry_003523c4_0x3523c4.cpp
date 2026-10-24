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

// Function: entry_003523c4
// Address: 0x3523c4 - 0x35241c
void entry_003523c4_0x3523c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003523c4_0x3523c4");
#endif

    switch (ctx->pc) {
        case 0x3523dcu: goto label_3523dc;
        case 0x352404u: goto label_352404;
        default: break;
    }

    ctx->pc = 0x3523c4u;

    // 0x3523c4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x3523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523c8: 0xc7ac004c  lwc1        $f12, 0x4C($sp)
    ctx->pc = 0x3523c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3523cc: 0xc64d011c  lwc1        $f13, 0x11C($s2)
    ctx->pc = 0x3523ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3523d0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3523d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3523d4: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3523D4u;
    SET_GPR_U32(ctx, 31, 0x3523DCu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3523D4u, 0x3523DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3523DCu;
label_3523dc:
    // 0x3523dc: 0xe640011c  swc1        $f0, 0x11C($s2)
    ctx->pc = 0x3523dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
    // 0x3523e0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x3523e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3523e4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3523e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x3523e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3523e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3523ec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3523ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3523f0: 0x46000b82  mul.s       $f14, $f1, $f0
    ctx->pc = 0x3523f0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3523f4: 0xc7ac0048  lwc1        $f12, 0x48($sp)
    ctx->pc = 0x3523f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3523f8: 0xc64d0120  lwc1        $f13, 0x120($s2)
    ctx->pc = 0x3523f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3523fc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x3523FCu;
    SET_GPR_U32(ctx, 31, 0x352404u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x3523FCu, 0x352404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352404u;
label_352404:
    // 0x352404: 0xe6400120  swc1        $f0, 0x120($s2)
    ctx->pc = 0x352404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 288), bits); }
    // 0x352408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x352408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35240c: 0x0  nop
    ctx->pc = 0x35240cu;
    // NOP
    // 0x352410: 0xe6400124  swc1        $f0, 0x124($s2)
    ctx->pc = 0x352410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 292), bits); }
    // 0x352414: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x352414u;
    {
        const bool branch_taken_0x352414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x352414) {
            ctx->pc = 0x352488u;
            return;
        }
    }
    ctx->pc = 0x35241Cu;
}
