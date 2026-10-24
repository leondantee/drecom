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

// Function: entry_001f3a84
// Address: 0x1f3a84 - 0x1f3b78
void entry_001f3a84_0x1f3a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3a84_0x1f3a84");
#endif

    switch (ctx->pc) {
        case 0x1f3b48u: goto label_1f3b48;
        default: break;
    }

    ctx->pc = 0x1f3a84u;

    // 0x1f3a84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3a88: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a8c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1f3a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f3a90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3a94: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f3a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3a98: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1f3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f3a9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3aa0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f3aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3aa4: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1f3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1f3aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3aac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ab0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ab4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1f3ab8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f3ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3abc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ac0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ac4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f3ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f3ac8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1f3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1f3acc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ad0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ad4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3ad8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f3adc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f3ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3ae4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3ae8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3aec: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1f3aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1f3af0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1f3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1f3af4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3afc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b00: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b04: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1f3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1f3b08: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1f3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1f3b0c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f3b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1f3b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3b14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b18: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b1c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1f3b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1f3b20: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f3b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f3b24: 0x8c221a58  lw          $v0, 0x1A58($at)
    ctx->pc = 0x1f3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f3b28: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1f3b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1f3b2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3B2Cu;
    {
        const bool branch_taken_0x1f3b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b2c) {
            ctx->pc = 0x1F3B78u;
            return;
        }
    }
    ctx->pc = 0x1F3B34u;
    // 0x1f3b34: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x1f3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1f3b38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b3c: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1f3b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b40: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1F3B40u;
    SET_GPR_U32(ctx, 31, 0x1F3B48u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1F3B40u, 0x1F3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B48u;
label_1f3b48:
    // 0x1f3b48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f3b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f3b4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3b50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F3B50u;
    {
        const bool branch_taken_0x1f3b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3b50) {
            ctx->pc = 0x1F3B78u;
            return;
        }
    }
    ctx->pc = 0x1F3B58u;
    // 0x1f3b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b60: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f3b60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f3b64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1f3b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f3b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f3b6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3b70: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f3b74: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1f3b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x1f3b78u;
}
