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

// Function: entry_001b3338
// Address: 0x1b3338 - 0x1b339c
void entry_001b3338_0x1b3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3338_0x1b3338");
#endif

    switch (ctx->pc) {
        case 0x1b3358u: goto label_1b3358;
        case 0x1b3368u: goto label_1b3368;
        default: break;
    }

    ctx->pc = 0x1b3338u;

    // 0x1b3338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b333c: 0xa20210a8  sb          $v0, 0x10A8($s0)
    ctx->pc = 0x1b333cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3340: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1b3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1b3344: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1b3344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b3348: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1b3348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b334c: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1b334cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b3350: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3350u;
    SET_GPR_U32(ctx, 31, 0x1B3358u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3350u, 0x1B3358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3358u;
label_1b3358:
    // 0x1b3358: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1b3358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b335c: 0xc7ad00c8  lwc1        $f13, 0xC8($sp)
    ctx->pc = 0x1b335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b3360: 0xc0455e6  jal         func_115798
    ctx->pc = 0x1B3360u;
    SET_GPR_U32(ctx, 31, 0x1B3368u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x1B3360u, 0x1B3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3368u;
label_1b3368:
    // 0x1b3368: 0xe60011f8  swc1        $f0, 0x11F8($s0)
    ctx->pc = 0x1b3368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4600), bits); }
    // 0x1b336c: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x1b336cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1b3370: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1b3370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1b3374: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3378: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B3378u;
    {
        const bool branch_taken_0x1b3378 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3378) {
            ctx->pc = 0x1B33C4u;
            return;
        }
    }
    ctx->pc = 0x1B3380u;
    // 0x1b3380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b3380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3384: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3384u;
    {
        const bool branch_taken_0x1b3384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b3384) {
            ctx->pc = 0x1B339Cu;
            return;
        }
    }
    ctx->pc = 0x1B338Cu;
    // 0x1b338c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B338Cu;
    {
        const bool branch_taken_0x1b338c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b338c) {
            ctx->pc = 0x1B339Cu;
            return;
        }
    }
    ctx->pc = 0x1B3394u;
    // 0x1b3394: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B3394u;
    {
        const bool branch_taken_0x1b3394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3394) {
            ctx->pc = 0x1B33D8u;
            return;
        }
    }
    ctx->pc = 0x1B339Cu;
}
