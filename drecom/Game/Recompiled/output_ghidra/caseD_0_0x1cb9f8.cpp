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

// Function: caseD_0
// Address: 0x1cb9f8 - 0x1cba34
void caseD_0_0x1cb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1cb9f8");
#endif

    switch (ctx->pc) {
        case 0x1cba14u: goto label_1cba14;
        default: break;
    }

    ctx->pc = 0x1cb9f8u;

    // 0x1cb9f8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1cb9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x1cb9fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cb9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1cba00: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cba00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cba04: 0xc60c1b54  lwc1        $f12, 0x1B54($s0)
    ctx->pc = 0x1cba04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cba08: 0xc60d00d4  lwc1        $f13, 0xD4($s0)
    ctx->pc = 0x1cba08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cba0c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1CBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA14u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1CBA0Cu, 0x1CBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1cba14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1cba18: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1cba18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cba1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cba1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cba20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cba20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cba24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cba24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba28: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBA34u;
}
