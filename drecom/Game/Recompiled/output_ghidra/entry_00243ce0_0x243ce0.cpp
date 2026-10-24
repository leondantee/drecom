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

// Function: entry_00243ce0
// Address: 0x243ce0 - 0x243d60
void entry_00243ce0_0x243ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243ce0_0x243ce0");
#endif

    switch (ctx->pc) {
        case 0x243d3cu: goto label_243d3c;
        default: break;
    }

    ctx->pc = 0x243ce0u;

    // 0x243ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243ce4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x243ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243ce8: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x243ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x243cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x243cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243cf0: 0x0  nop
    ctx->pc = 0x243cf0u;
    // NOP
    // 0x243cf4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243cf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243cf8: 0x0  nop
    ctx->pc = 0x243cf8u;
    // NOP
    // 0x243cfc: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x243CFCu;
    {
        const bool branch_taken_0x243cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243cfc) {
            ctx->pc = 0x243EE0u;
            return;
        }
    }
    ctx->pc = 0x243D04u;
    // 0x243d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x243d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x243d08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d0c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x243d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x243d10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x243d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x243d14: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d18: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x243d18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x243d1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d20: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x243d20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x243d24: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d28: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x243d28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x243d2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x243d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d30: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x243d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x243d34: 0xc067694  jal         func_19DA50
    ctx->pc = 0x243D34u;
    SET_GPR_U32(ctx, 31, 0x243D3Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x243D34u, 0x243D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243D3Cu;
label_243d3c:
    // 0x243d3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x243d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x243d40: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x243d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x243d44: 0x2463008c  addiu       $v1, $v1, 0x8C
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x243d48: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x243d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x243d4c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x243d4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x243d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x243d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x243d54: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x243d54u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x243d58: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x243D58u;
    {
        const bool branch_taken_0x243d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d58) {
            ctx->pc = 0x243EE0u;
            return;
        }
    }
    ctx->pc = 0x243D60u;
}
