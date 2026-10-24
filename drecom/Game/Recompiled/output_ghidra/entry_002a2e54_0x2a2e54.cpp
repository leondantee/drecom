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

// Function: entry_002a2e54
// Address: 0x2a2e54 - 0x2a2f3c
void entry_002a2e54_0x2a2e54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a2e54_0x2a2e54");
#endif

    switch (ctx->pc) {
        case 0x2a2e60u: goto label_2a2e60;
        case 0x2a2e70u: goto label_2a2e70;
        case 0x2a2e7cu: goto label_2a2e7c;
        case 0x2a2e88u: goto label_2a2e88;
        case 0x2a2f14u: goto label_2a2f14;
        case 0x2a2f2cu: goto label_2a2f2c;
        default: break;
    }

    ctx->pc = 0x2a2e54u;

    // 0x2a2e54: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e58: 0xc0b3778  jal         func_2CDDE0
    ctx->pc = 0x2A2E58u;
    SET_GPR_U32(ctx, 31, 0x2A2E60u);
    ctx->pc = 0x2CDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDDE0u, 0x2A2E58u, 0x2A2E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E60u;
label_2a2e60:
    // 0x2a2e60: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e64: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a2e64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a2e68: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A2E68u;
    SET_GPR_U32(ctx, 31, 0x2A2E70u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A2E68u, 0x2A2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E70u;
label_2a2e70:
    // 0x2a2e70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e74: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A2E74u;
    SET_GPR_U32(ctx, 31, 0x2A2E7Cu);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A2E74u, 0x2A2E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E7Cu;
label_2a2e7c:
    // 0x2a2e7c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e80: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A2E80u;
    SET_GPR_U32(ctx, 31, 0x2A2E88u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A2E80u, 0x2A2E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E88u;
label_2a2e88:
    // 0x2a2e88: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x2a2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2e8c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x2a2e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x2a2e90: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2a2e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2a2e94: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2a2e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2a2e98: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2A2E98u;
    {
        const bool branch_taken_0x2a2e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2e98) {
            ctx->pc = 0x2A2F3Cu;
            return;
        }
    }
    ctx->pc = 0x2A2EA0u;
    // 0x2a2ea0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2ea4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2a2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a2ea8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2a2ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2a2eac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2a2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x2a2eb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2eb4: 0x0  nop
    ctx->pc = 0x2a2eb4u;
    // NOP
    // 0x2a2eb8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2a2eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a2ebc: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x2a2ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x2a2ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ec4: 0x0  nop
    ctx->pc = 0x2a2ec4u;
    // NOP
    // 0x2a2ec8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2a2ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2a2ecc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a2eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ed0: 0x0  nop
    ctx->pc = 0x2a2ed0u;
    // NOP
    // 0x2a2ed4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2a2ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a2ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a2edc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ee0: 0x0  nop
    ctx->pc = 0x2a2ee0u;
    // NOP
    // 0x2a2ee4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2a2ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2a2ee8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a2eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a2eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a2ef0: 0x0  nop
    ctx->pc = 0x2a2ef0u;
    // NOP
    // 0x2a2ef4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2a2ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a2ef8: 0xa7a00054  sh          $zero, 0x54($sp)
    ctx->pc = 0x2a2ef8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a2efc: 0xa3a00056  sb          $zero, 0x56($sp)
    ctx->pc = 0x2a2efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 86), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f00: 0xa3a00057  sb          $zero, 0x57($sp)
    ctx->pc = 0x2a2f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 87), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a2f04: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2a2f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2a2f08: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2a2f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a2f0c: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x2A2F0Cu;
    SET_GPR_U32(ctx, 31, 0x2A2F14u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x2A2F0Cu, 0x2A2F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F14u;
label_2a2f14:
    // 0x2a2f14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A2F14u;
    {
        const bool branch_taken_0x2a2f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2f14) {
            ctx->pc = 0x2A2F3Cu;
            return;
        }
    }
    ctx->pc = 0x2A2F1Cu;
    // 0x2a2f1c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x2a2f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x2a2f20: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2a2f24: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A2F24u;
    SET_GPR_U32(ctx, 31, 0x2A2F2Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A2F24u, 0x2A2F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F2Cu;
label_2a2f2c:
    // 0x2a2f2c: 0x3c0402fa  lui         $a0, 0x2FA
    ctx->pc = 0x2a2f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)762 << 16));
    // 0x2a2f30: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x2a2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x2a2f34: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x2A2F34u;
    SET_GPR_U32(ctx, 31, 0x2A2F3Cu);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x2A2F34u, 0x2A2F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F3Cu;
}
