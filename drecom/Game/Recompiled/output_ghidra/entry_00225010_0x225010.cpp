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

// Function: entry_00225010
// Address: 0x225010 - 0x2250d8
void entry_00225010_0x225010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225010_0x225010");
#endif

    switch (ctx->pc) {
        case 0x225074u: goto label_225074;
        default: break;
    }

    ctx->pc = 0x225010u;

    // 0x225010: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225014: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225018: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x22501c: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x22501Cu;
    {
        const bool branch_taken_0x22501c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22501c) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x225024u;
    // 0x225024: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225028: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x225028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22502c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x22502cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x225030: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x225030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x225034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x225034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225038: 0x0  nop
    ctx->pc = 0x225038u;
    // NOP
    // 0x22503c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22503cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225040: 0x0  nop
    ctx->pc = 0x225040u;
    // NOP
    // 0x225044: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x225044u;
    {
        const bool branch_taken_0x225044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x225044) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x22504Cu;
    // 0x22504c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225050: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225054: 0x3c023f86  lui         $v0, 0x3F86
    ctx->pc = 0x225054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16262 << 16));
    // 0x225058: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x225058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x22505c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x22505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x225060: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x225060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x225064: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x225064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x225068: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x225068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x22506c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x22506Cu;
    SET_GPR_U32(ctx, 31, 0x225074u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x22506Cu, 0x225074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225074u;
label_225074:
    // 0x225074: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x225074u;
    {
        const bool branch_taken_0x225074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225074) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x22507Cu;
    // 0x22507c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225080: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225084: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x225088: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x225088u;
    {
        const bool branch_taken_0x225088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225088) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x225090u;
    // 0x225090: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x225090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225094: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x225094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x225098: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x225098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22509c: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x22509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2250a0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2250A0u;
    {
        const bool branch_taken_0x2250a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2250a0) {
            ctx->pc = 0x2250D8u;
            return;
        }
    }
    ctx->pc = 0x2250A8u;
    // 0x2250a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2250a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2250ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2250b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2250b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2250b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2250b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250bc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2250bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2250c0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2250c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2250c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2250ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2250d0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2250d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2250d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2250d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2250d8u;
}
