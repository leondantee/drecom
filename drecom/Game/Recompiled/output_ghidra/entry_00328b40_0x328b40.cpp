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

// Function: entry_00328b40
// Address: 0x328b40 - 0x328b8c
void entry_00328b40_0x328b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00328b40_0x328b40");
#endif

    switch (ctx->pc) {
        case 0x328b68u: goto label_328b68;
        default: break;
    }

    ctx->pc = 0x328b40u;

    // 0x328b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b44: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328b44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x328b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x328b4c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x328b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x328b50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b54: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x328b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328b58: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x328b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x328b5c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x328b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b60: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x328B60u;
    SET_GPR_U32(ctx, 31, 0x328B68u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x328B60u, 0x328B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328B68u;
label_328b68:
    // 0x328b68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x328b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x328b6c: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x328b6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x328b70: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x328B70u;
    {
        const bool branch_taken_0x328b70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x328b70) {
            ctx->pc = 0x328B8Cu;
            return;
        }
    }
    ctx->pc = 0x328B78u;
    // 0x328b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x328b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328b7c: 0x0  nop
    ctx->pc = 0x328b7cu;
    // NOP
    // 0x328b80: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x328b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x328b84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x328B84u;
    {
        const bool branch_taken_0x328b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328b84) {
            ctx->pc = 0x328BA8u;
            return;
        }
    }
    ctx->pc = 0x328B8Cu;
}
