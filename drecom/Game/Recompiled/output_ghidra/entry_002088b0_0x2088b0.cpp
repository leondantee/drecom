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

// Function: entry_002088b0
// Address: 0x2088b0 - 0x208924
void entry_002088b0_0x2088b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002088b0_0x2088b0");
#endif

    switch (ctx->pc) {
        case 0x2088e8u: goto label_2088e8;
        default: break;
    }

    ctx->pc = 0x2088b0u;

    // 0x2088b0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2088b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2088b8: 0x3c03460c  lui         $v1, 0x460C
    ctx->pc = 0x2088b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17932 << 16));
    // 0x2088bc: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x2088bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
    // 0x2088c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2088c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2088c4: 0x0  nop
    ctx->pc = 0x2088c4u;
    // NOP
    // 0x2088c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2088c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2088cc: 0x0  nop
    ctx->pc = 0x2088ccu;
    // NOP
    // 0x2088d0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2088D0u;
    {
        const bool branch_taken_0x2088d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2088d0) {
            ctx->pc = 0x208924u;
            return;
        }
    }
    ctx->pc = 0x2088D8u;
    // 0x2088d8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2088dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088e0: 0xc05d25c  jal         func_174970
    ctx->pc = 0x2088E0u;
    SET_GPR_U32(ctx, 31, 0x2088E8u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x2088E0u, 0x2088E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2088E8u;
label_2088e8:
    // 0x2088e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2088e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088ec: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2088ECu;
    {
        const bool branch_taken_0x2088ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2088ec) {
            ctx->pc = 0x208924u;
            return;
        }
    }
    ctx->pc = 0x2088F4u;
    // 0x2088f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2088f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2088f8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2088f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2088fc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2088fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x208900: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x208900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x208904: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208908: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x208908u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20890c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208910: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x208910u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x208914: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x208914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208918: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x208918u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20891c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x20891cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208920: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x208920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x208924u;
}
