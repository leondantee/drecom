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

// Function: entry_001b29d4
// Address: 0x1b29d4 - 0x1b2a28
void entry_001b29d4_0x1b29d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b29d4_0x1b29d4");
#endif

    switch (ctx->pc) {
        case 0x1b29f8u: goto label_1b29f8;
        case 0x1b2a20u: goto label_1b2a20;
        default: break;
    }

    ctx->pc = 0x1b29d4u;

    // 0x1b29d4: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b29d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b29dc: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b29e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b29e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1b29e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b29e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1b29ec: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x1b29ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b29f0: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1B29F0u;
    SET_GPR_U32(ctx, 31, 0x1B29F8u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1B29F8u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B29F8u) { return; }
    ctx->pc = 0x1B29F8u;
label_1b29f8:
    // 0x1b29f8: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x1b29f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x1b29fc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2a00: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x1b2a04: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b2a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b2a08: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x1b2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1b2a0c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x1b2a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b2a10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1b2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2a14: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1b2a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1b2a18: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1B2A18u;
    SET_GPR_U32(ctx, 31, 0x1B2A20u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1B2A18u, 0x1B2A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A20u;
label_1b2a20:
    // 0x1b2a20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b2a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b2a24: 0x0  nop
    ctx->pc = 0x1b2a24u;
    // NOP
    ctx->pc = 0x1b2a28u;
}
