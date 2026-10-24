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

// Function: entry_001f33a8
// Address: 0x1f33a8 - 0x1f3404
void entry_001f33a8_0x1f33a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f33a8_0x1f33a8");
#endif

    switch (ctx->pc) {
        case 0x1f33c0u: goto label_1f33c0;
        case 0x1f33d8u: goto label_1f33d8;
        default: break;
    }

    ctx->pc = 0x1f33a8u;

    // 0x1f33a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f33ac: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f33acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f33b0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x1f33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1f33b4: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x1f33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1f33b8: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1F33B8u;
    SET_GPR_U32(ctx, 31, 0x1F33C0u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1F33B8u, 0x1F33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33C0u;
label_1f33c0:
    // 0x1f33c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f33c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f33c4: 0x0  nop
    ctx->pc = 0x1f33c4u;
    // NOP
    // 0x1f33c8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f33c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f33cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1f33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f33d0: 0xc067588  jal         func_19D620
    ctx->pc = 0x1F33D0u;
    SET_GPR_U32(ctx, 31, 0x1F33D8u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x1F33D0u, 0x1F33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F33D8u;
label_1f33d8:
    // 0x1f33d8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f33d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1f33dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1f33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f33e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1f33e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1f33e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1f33e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f33e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f33e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f33ec: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F33ECu;
    {
        const bool branch_taken_0x1f33ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f33ec) {
            ctx->pc = 0x1F3464u;
            return;
        }
    }
    ctx->pc = 0x1F33F4u;
    // 0x1f33f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F33F4u;
    {
        const bool branch_taken_0x1f33f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33f4) {
            ctx->pc = 0x1F3404u;
            return;
        }
    }
    ctx->pc = 0x1F33FCu;
    // 0x1f33fc: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x1F33FCu;
    {
        const bool branch_taken_0x1f33fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f33fc) {
            ctx->pc = 0x1F3A14u;
            return;
        }
    }
    ctx->pc = 0x1F3404u;
}
