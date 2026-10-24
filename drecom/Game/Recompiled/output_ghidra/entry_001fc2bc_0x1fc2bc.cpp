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

// Function: entry_001fc2bc
// Address: 0x1fc2bc - 0x1fc308
void entry_001fc2bc_0x1fc2bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc2bc_0x1fc2bc");
#endif

    switch (ctx->pc) {
        case 0x1fc2e4u: goto label_1fc2e4;
        default: break;
    }

    ctx->pc = 0x1fc2bcu;

    // 0x1fc2bc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2c0: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc2c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc2c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1fc2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fc2c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fc2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1fc2cc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2d0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1fc2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fc2d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1fc2d8: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1fc2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2dc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FC2DCu;
    SET_GPR_U32(ctx, 31, 0x1FC2E4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FC2DCu, 0x1FC2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2E4u;
label_1fc2e4:
    // 0x1fc2e4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fc2e8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1fc2e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1fc2ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC2ECu;
    {
        const bool branch_taken_0x1fc2ec = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc2ec) {
            ctx->pc = 0x1FC308u;
            return;
        }
    }
    ctx->pc = 0x1FC2F4u;
    // 0x1fc2f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fc2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fc2f8: 0x0  nop
    ctx->pc = 0x1fc2f8u;
    // NOP
    // 0x1fc2fc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1fc2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1fc300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC300u;
    {
        const bool branch_taken_0x1fc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc300) {
            ctx->pc = 0x1FC324u;
            return;
        }
    }
    ctx->pc = 0x1FC308u;
}
