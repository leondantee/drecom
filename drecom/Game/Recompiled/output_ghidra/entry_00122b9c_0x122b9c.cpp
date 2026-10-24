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

// Function: entry_00122b9c
// Address: 0x122b9c - 0x122c00
void entry_00122b9c_0x122b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122b9c_0x122b9c");
#endif

    switch (ctx->pc) {
        case 0x122bc0u: goto label_122bc0;
        default: break;
    }

    ctx->pc = 0x122b9cu;

    // 0x122b9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122ba0: 0xc48111f8  lwc1        $f1, 0x11F8($a0)
    ctx->pc = 0x122ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122ba4: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x122ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x122ba8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x122ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x122bac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x122bacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122bb0: 0x0  nop
    ctx->pc = 0x122bb0u;
    // NOP
    // 0x122bb4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122bb4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122bb8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122BB8u;
    SET_GPR_U32(ctx, 31, 0x122BC0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122BB8u, 0x122BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122BC0u;
label_122bc0:
    // 0x122bc0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122bc4: 0xe46011f8  swc1        $f0, 0x11F8($v1)
    ctx->pc = 0x122bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4600), bits); }
    // 0x122bc8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x122bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122bcc: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122bd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x122bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x122bd4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122bd8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122bdc: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x122bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x122be0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122be4: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x122be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122be8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122bec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x122becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122bf0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122bf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x122bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x122bf8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x122BF8u;
    {
        const bool branch_taken_0x122bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122bf8) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122C00u;
}
