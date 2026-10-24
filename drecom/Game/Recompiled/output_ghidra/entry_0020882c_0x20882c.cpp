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

// Function: entry_0020882c
// Address: 0x20882c - 0x2088b0
void entry_0020882c_0x20882c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020882c_0x20882c");
#endif

    switch (ctx->pc) {
        case 0x208860u: goto label_208860;
        default: break;
    }

    ctx->pc = 0x20882cu;

    // 0x20882c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208830: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x208830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x208834: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x208834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x208838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x208838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20883c: 0x0  nop
    ctx->pc = 0x20883cu;
    // NOP
    // 0x208840: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x208840u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208844: 0x0  nop
    ctx->pc = 0x208844u;
    // NOP
    // 0x208848: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x208848u;
    {
        const bool branch_taken_0x208848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208848) {
            ctx->pc = 0x2088B0u;
            return;
        }
    }
    ctx->pc = 0x208850u;
    // 0x208850: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x208850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208854: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x208854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x208858: 0xc067588  jal         func_19D620
    ctx->pc = 0x208858u;
    SET_GPR_U32(ctx, 31, 0x208860u);
    ctx->pc = 0x19D620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D620u, 0x208858u, 0x208860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208860u;
label_208860:
    // 0x208860: 0x3c034662  lui         $v1, 0x4662
    ctx->pc = 0x208860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18018 << 16));
    // 0x208864: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x208864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x208868: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x208868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20886c: 0x0  nop
    ctx->pc = 0x20886cu;
    // NOP
    // 0x208870: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x208870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x208874: 0x0  nop
    ctx->pc = 0x208874u;
    // NOP
    // 0x208878: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x208878u;
    {
        const bool branch_taken_0x208878 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x208878) {
            ctx->pc = 0x2088B0u;
            return;
        }
    }
    ctx->pc = 0x208880u;
    // 0x208880: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208884: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208888: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x208888u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20888c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x20888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x208890: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208894: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x208898: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20889c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x20889cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2088a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088a4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2088a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2088a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088ac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2088acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2088b0u;
}
