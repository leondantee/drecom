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

// Function: entry_00239cd4
// Address: 0x239cd4 - 0x239d5c
void entry_00239cd4_0x239cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239cd4_0x239cd4");
#endif

    switch (ctx->pc) {
        case 0x239d40u: goto label_239d40;
        default: break;
    }

    ctx->pc = 0x239cd4u;

    // 0x239cd4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x239cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239cd8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x239cd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x239cdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x239cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x239ce0: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x239ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x239ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239ce8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x239ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239cec: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x239cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x239cf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239cf4: 0x0  nop
    ctx->pc = 0x239cf4u;
    // NOP
    // 0x239cf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x239cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239cfc: 0x0  nop
    ctx->pc = 0x239cfcu;
    // NOP
    // 0x239d00: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x239D00u;
    {
        const bool branch_taken_0x239d00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x239d00) {
            ctx->pc = 0x239D5Cu;
            return;
        }
    }
    ctx->pc = 0x239D08u;
    // 0x239d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x239d10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x239d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239d18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d1c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x239d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x239d20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d24: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x239d24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x239d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d2c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x239d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239d30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x239d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x239d38: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239D38u;
    SET_GPR_U32(ctx, 31, 0x239D40u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239D38u, 0x239D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239D40u;
label_239d40:
    // 0x239d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239d44: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x239d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x239d48: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x239d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x239d4c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x239d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x239d50: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x239d50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x239d54: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239d58: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x239d58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x239d5cu;
}
