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

// Function: entry_001ec980
// Address: 0x1ec980 - 0x1eca14
void entry_001ec980_0x1ec980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec980_0x1ec980");
#endif

    switch (ctx->pc) {
        case 0x1ec9e0u: goto label_1ec9e0;
        default: break;
    }

    ctx->pc = 0x1ec980u;

    // 0x1ec980: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec984: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x1ec984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec988: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x1ec988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x1ec98c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec990: 0x0  nop
    ctx->pc = 0x1ec990u;
    // NOP
    // 0x1ec994: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec998: 0x0  nop
    ctx->pc = 0x1ec998u;
    // NOP
    // 0x1ec99c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x1EC99Cu;
    {
        const bool branch_taken_0x1ec99c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec99c) {
            ctx->pc = 0x1ECB28u;
            return;
        }
    }
    ctx->pc = 0x1EC9A4u;
    // 0x1ec9a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec9a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1ec9acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ec9b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ec9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9b8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x1ec9b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec9bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ec9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec9c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9c4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1ec9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ec9c8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9cc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1ec9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ec9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1ec9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9d4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1ec9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1ec9d8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EC9D8u;
    SET_GPR_U32(ctx, 31, 0x1EC9E0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EC9D8u, 0x1EC9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC9E0u;
label_1ec9e0:
    // 0x1ec9e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ec9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec9e4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x1ec9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x1ec9e8: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ec9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ec9ec: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ec9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ec9f0: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ec9f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ec9f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ec9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ec9f8: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x1ec9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x1ec9fc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ec9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eca00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1eca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1eca04: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eca08: 0xa4640094  sh          $a0, 0x94($v1)
    ctx->pc = 0x1eca08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eca0c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1ECA0Cu;
    {
        const bool branch_taken_0x1eca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eca0c) {
            ctx->pc = 0x1ECB28u;
            return;
        }
    }
    ctx->pc = 0x1ECA14u;
}
