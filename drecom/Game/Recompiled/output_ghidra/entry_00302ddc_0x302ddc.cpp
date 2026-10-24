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

// Function: entry_00302ddc
// Address: 0x302ddc - 0x302f04
void entry_00302ddc_0x302ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302ddc_0x302ddc");
#endif

    switch (ctx->pc) {
        case 0x302dfcu: goto label_302dfc;
        case 0x302e08u: goto label_302e08;
        case 0x302e18u: goto label_302e18;
        case 0x302e24u: goto label_302e24;
        case 0x302eccu: goto label_302ecc;
        default: break;
    }

    ctx->pc = 0x302ddcu;

    // 0x302ddc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302de0: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x302de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x302de4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x302de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x302de8: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x302de8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x302dec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302df4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x302DF4u;
    SET_GPR_U32(ctx, 31, 0x302DFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x302DF4u, 0x302DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302DFCu;
label_302dfc:
    // 0x302dfc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e00: 0xc05cd10  jal         func_173440
    ctx->pc = 0x302E00u;
    SET_GPR_U32(ctx, 31, 0x302E08u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x302E00u, 0x302E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E08u;
label_302e08:
    // 0x302e08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e0c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x302e0cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x302e10: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x302E10u;
    SET_GPR_U32(ctx, 31, 0x302E18u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x302E10u, 0x302E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E18u;
label_302e18:
    // 0x302e18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e1c: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x302E1Cu;
    SET_GPR_U32(ctx, 31, 0x302E24u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x302E1Cu, 0x302E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302E24u;
label_302e24:
    // 0x302e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e28: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x302e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x302e2c: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x302E2Cu;
    {
        const bool branch_taken_0x302e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x302e2c) {
            ctx->pc = 0x303048u;
            return;
        }
    }
    ctx->pc = 0x302E34u;
    // 0x302e34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e38: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e3c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302e44: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e48: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302e48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302e4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e50: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302e54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e58: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302e58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302e5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e60: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x302e64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e68: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x302e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x302e6c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x302e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x302e70: 0x14600075  bnez        $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x302E70u;
    {
        const bool branch_taken_0x302e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x302e70) {
            ctx->pc = 0x303048u;
            return;
        }
    }
    ctx->pc = 0x302E78u;
    // 0x302e78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302e7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x302e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302e80: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x302e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x302e84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x302e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x302e88: 0x0  nop
    ctx->pc = 0x302e88u;
    // NOP
    // 0x302e8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x302e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x302e90: 0x0  nop
    ctx->pc = 0x302e90u;
    // NOP
    // 0x302e94: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x302E94u;
    {
        const bool branch_taken_0x302e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x302e94) {
            ctx->pc = 0x302F04u;
            return;
        }
    }
    ctx->pc = 0x302E9Cu;
    // 0x302e9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ea0: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x302ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x302ea4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ea8: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x302ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x302eac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x302eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x302eb0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302eb4: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x302eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x302eb8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302ebc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x302ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x302ec0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x302ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x302ec4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x302EC4u;
    SET_GPR_U32(ctx, 31, 0x302ECCu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x302EC4u, 0x302ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302ECCu;
label_302ecc:
    // 0x302ecc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x302ECCu;
    {
        const bool branch_taken_0x302ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302ecc) {
            ctx->pc = 0x302F04u;
            return;
        }
    }
    ctx->pc = 0x302ED4u;
    // 0x302ed4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x302ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302edc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x302edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x302ee0: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x302ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x302ee4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ee8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x302ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x302eec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ef0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x302ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x302ef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302ef8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x302ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x302efc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302f00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x302f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x302f04u;
}
