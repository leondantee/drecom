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

// Function: entry_0034fb94
// Address: 0x34fb94 - 0x34fc7c
void entry_0034fb94_0x34fb94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034fb94_0x34fb94");
#endif

    switch (ctx->pc) {
        case 0x34fbc0u: goto label_34fbc0;
        default: break;
    }

    ctx->pc = 0x34fb94u;

    // 0x34fb94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fb98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fb9c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34fb9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fba0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fba4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fba8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34fbac: 0x24060821  addiu       $a2, $zero, 0x821
    ctx->pc = 0x34fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
    // 0x34fbb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34fbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34fbb4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34fbb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34fbb8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34FBB8u;
    SET_GPR_U32(ctx, 31, 0x34FBC0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34FBB8u, 0x34FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FBC0u;
label_34fbc0:
    // 0x34fbc0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fbc4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34fbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34fbc8: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x34fbc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x34fbcc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x34fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x34fbd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x34fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34fbd4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34fbd8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x34fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x34fbdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fbe0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fbe4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x34fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34fbe8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x34fbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x34fbec: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x34fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x34fbf0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fbf4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fbf8: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x34fbf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x34fbfc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34fbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34fc00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x34fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34fc04: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x34FC04u;
    {
        const bool branch_taken_0x34fc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34fc04) {
            ctx->pc = 0x34FC7Cu;
            return;
        }
    }
    ctx->pc = 0x34FC0Cu;
    // 0x34fc0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc10: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fc14: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x34fc14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x34fc18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34fc1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc20: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fc24: 0xa0430029  sb          $v1, 0x29($v0)
    ctx->pc = 0x34fc24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x34fc28: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x34fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x34fc2c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x34fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x34fc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fc34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc38: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34fc3c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x34fc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x34fc40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fc44: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x34fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x34fc48: 0x24500190  addiu       $s0, $v0, 0x190
    ctx->pc = 0x34fc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x34fc4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34fc50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fc50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fc54: 0x0  nop
    ctx->pc = 0x34fc54u;
    // NOP
    // 0x34fc58: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x34fc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x34fc5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34fc60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fc60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fc64: 0x0  nop
    ctx->pc = 0x34fc64u;
    // NOP
    // 0x34fc68: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x34fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x34fc6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x34fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34fc70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fc74: 0x0  nop
    ctx->pc = 0x34fc74u;
    // NOP
    // 0x34fc78: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x34fc78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    ctx->pc = 0x34fc7cu;
}
