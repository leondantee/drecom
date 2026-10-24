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

// Function: entry_0018fbec
// Address: 0x18fbec - 0x18fc2c
void entry_0018fbec_0x18fbec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fbec_0x18fbec");
#endif

    switch (ctx->pc) {
        case 0x18fc10u: goto label_18fc10;
        default: break;
    }

    ctx->pc = 0x18fbecu;

    // 0x18fbec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fbf0: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fbf4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fbf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fbf8: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x18fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x18fbfc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18FBFCu;
    {
        const bool branch_taken_0x18fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbfc) {
            ctx->pc = 0x18FC3Cu;
            return;
        }
    }
    ctx->pc = 0x18FC04u;
    // 0x18fc04: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x18fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fc08: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18FC08u;
    SET_GPR_U32(ctx, 31, 0x18FC10u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18FC08u, 0x18FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC10u;
label_18fc10:
    // 0x18fc10: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18fc14: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x18fc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc18: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x18fc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fc1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC1Cu;
    {
        const bool branch_taken_0x18fc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc1c) {
            ctx->pc = 0x18FC2Cu;
            return;
        }
    }
    ctx->pc = 0x18FC24u;
    // 0x18fc24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc28: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18fc2cu;
}
