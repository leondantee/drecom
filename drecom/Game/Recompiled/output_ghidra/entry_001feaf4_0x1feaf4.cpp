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

// Function: entry_001feaf4
// Address: 0x1feaf4 - 0x1feb40
void entry_001feaf4_0x1feaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feaf4_0x1feaf4");
#endif

    switch (ctx->pc) {
        case 0x1feb1cu: goto label_1feb1c;
        default: break;
    }

    ctx->pc = 0x1feaf4u;

    // 0x1feaf4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feaf8: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feafc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1feafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1feb00: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1feb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1feb04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1feb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1feb0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1feb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1feb10: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x1feb10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb14: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1FEB14u;
    SET_GPR_U32(ctx, 31, 0x1FEB1Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1FEB14u, 0x1FEB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB1Cu;
label_1feb1c:
    // 0x1feb1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feb20: 0x90420344  lbu         $v0, 0x344($v0)
    ctx->pc = 0x1feb20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x1feb24: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEB24u;
    {
        const bool branch_taken_0x1feb24 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1feb24) {
            ctx->pc = 0x1FEB40u;
            return;
        }
    }
    ctx->pc = 0x1FEB2Cu;
    // 0x1feb2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1feb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1feb30: 0x0  nop
    ctx->pc = 0x1feb30u;
    // NOP
    // 0x1feb34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1feb34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1feb38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB38u;
    {
        const bool branch_taken_0x1feb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb38) {
            ctx->pc = 0x1FEB5Cu;
            return;
        }
    }
    ctx->pc = 0x1FEB40u;
}
