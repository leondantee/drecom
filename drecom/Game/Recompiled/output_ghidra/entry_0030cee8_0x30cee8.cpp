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

// Function: entry_0030cee8
// Address: 0x30cee8 - 0x30cfb0
void entry_0030cee8_0x30cee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030cee8_0x30cee8");
#endif

    switch (ctx->pc) {
        case 0x30cf18u: goto label_30cf18;
        case 0x30cf78u: goto label_30cf78;
        default: break;
    }

    ctx->pc = 0x30cee8u;

    // 0x30cee8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30ceec: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cef0: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x30cef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cef4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cef8: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30cef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30cefc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cf04: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30cf08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x30cf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cf0c: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x30cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x30cf10: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CF10u;
    SET_GPR_U32(ctx, 31, 0x30CF18u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CF10u, 0x30CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF18u;
label_30cf18:
    // 0x30cf18: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x30CF18u;
    {
        const bool branch_taken_0x30cf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cf18) {
            ctx->pc = 0x30CFB0u;
            return;
        }
    }
    ctx->pc = 0x30CF20u;
    // 0x30cf20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf24: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x30cf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30cf28: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x30cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x30cf2c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x30cf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x30cf30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30cf30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cf34: 0x0  nop
    ctx->pc = 0x30cf34u;
    // NOP
    // 0x30cf38: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x30cf38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cf3c: 0x0  nop
    ctx->pc = 0x30cf3cu;
    // NOP
    // 0x30cf40: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x30CF40u;
    {
        const bool branch_taken_0x30cf40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30cf40) {
            ctx->pc = 0x30CFB0u;
            return;
        }
    }
    ctx->pc = 0x30CF48u;
    // 0x30cf48: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x30cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x30cf4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30cf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30cf50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30cf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30cf54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf58: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30cf5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x30cf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf60: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x30cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x30cf64: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x30cf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30cf68: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30cf6c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30cf70: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30CF70u;
    SET_GPR_U32(ctx, 31, 0x30CF78u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30CF70u, 0x30CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CF78u;
label_30cf78:
    // 0x30cf78: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30CF78u;
    {
        const bool branch_taken_0x30cf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cf78) {
            ctx->pc = 0x30CFB0u;
            return;
        }
    }
    ctx->pc = 0x30CF80u;
    // 0x30cf80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30cf84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf88: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cf8c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x30cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30cf90: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf94: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x30cf94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30cf98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cf9c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30cf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfa0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfa4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x30cfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30cfa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30cfac: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30cfb0u;
}
