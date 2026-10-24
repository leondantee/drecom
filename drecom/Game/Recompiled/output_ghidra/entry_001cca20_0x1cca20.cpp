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

// Function: entry_001cca20
// Address: 0x1cca20 - 0x1cca74
void entry_001cca20_0x1cca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cca20_0x1cca20");
#endif

    switch (ctx->pc) {
        case 0x1cca54u: goto label_1cca54;
        default: break;
    }

    ctx->pc = 0x1cca20u;

    // 0x1cca20: 0x3c05c396  lui         $a1, 0xC396
    ctx->pc = 0x1cca20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50070 << 16));
    // 0x1cca24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cca24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cca28: 0x0  nop
    ctx->pc = 0x1cca28u;
    // NOP
    // 0x1cca2c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cca2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cca30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca38: 0x8c620130  lw          $v0, 0x130($v1)
    ctx->pc = 0x1cca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cca3c: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x1cca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cca40: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cca44: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cca48: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cca4c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CCA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CCA54u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CCA4Cu, 0x1CCA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCA54u;
label_1cca54:
    // 0x1cca54: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CCA54u;
    {
        const bool branch_taken_0x1cca54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca54) {
            ctx->pc = 0x1CCA74u;
            return;
        }
    }
    ctx->pc = 0x1CCA5Cu;
    // 0x1cca5c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cca60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cca64: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1cca64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cca68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cca6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cca70: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cca70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cca74u;
}
