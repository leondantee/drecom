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

// Function: entry_002db0c8
// Address: 0x2db0c8 - 0x2db140
void entry_002db0c8_0x2db0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002db0c8_0x2db0c8");
#endif

    switch (ctx->pc) {
        case 0x2db0f8u: goto label_2db0f8;
        default: break;
    }

    ctx->pc = 0x2db0c8u;

    // 0x2db0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db0cc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2db0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db0d0: 0x3c03443b  lui         $v1, 0x443B
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17467 << 16));
    // 0x2db0d4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2db0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2db0d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db0dc: 0x0  nop
    ctx->pc = 0x2db0dcu;
    // NOP
    // 0x2db0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2db0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db0e4: 0x0  nop
    ctx->pc = 0x2db0e4u;
    // NOP
    // 0x2db0e8: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB0E8u;
    {
        const bool branch_taken_0x2db0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db0e8) {
            ctx->pc = 0x2DB178u;
            return;
        }
    }
    ctx->pc = 0x2DB0F0u;
    // 0x2db0f0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2DB0F0u;
    SET_GPR_U32(ctx, 31, 0x2DB0F8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2DB0F0u, 0x2DB0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB0F8u;
label_2db0f8:
    // 0x2db0f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2db0fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2db0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2db100: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB100u;
    {
        const bool branch_taken_0x2db100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db100) {
            ctx->pc = 0x2DB140u;
            return;
        }
    }
    ctx->pc = 0x2DB108u;
    // 0x2db108: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2db108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2db10c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db110: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2db110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db114: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2db118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db11c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2db11cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2db120: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db124: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2db124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db128: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db12c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2db12cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2db130: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2db130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2db134: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2db134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2db138: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2DB138u;
    {
        const bool branch_taken_0x2db138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db138) {
            ctx->pc = 0x2DB170u;
            return;
        }
    }
    ctx->pc = 0x2DB140u;
}
