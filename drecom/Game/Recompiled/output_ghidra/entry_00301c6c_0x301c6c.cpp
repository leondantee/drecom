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

// Function: entry_00301c6c
// Address: 0x301c6c - 0x301cf8
void entry_00301c6c_0x301c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00301c6c_0x301c6c");
#endif

    switch (ctx->pc) {
        case 0x301cc0u: goto label_301cc0;
        default: break;
    }

    ctx->pc = 0x301c6cu;

    // 0x301c6c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c70: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x301c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301c74: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x301c78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x301c78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301c7c: 0x0  nop
    ctx->pc = 0x301c7cu;
    // NOP
    // 0x301c80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x301c80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x301c84: 0x0  nop
    ctx->pc = 0x301c84u;
    // NOP
    // 0x301c88: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x301C88u;
    {
        const bool branch_taken_0x301c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x301c88) {
            ctx->pc = 0x301CF8u;
            return;
        }
    }
    ctx->pc = 0x301C90u;
    // 0x301c90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x301c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c94: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x301c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x301c98: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301c9c: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x301c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x301ca0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x301ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x301ca4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x301ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x301ca8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x301ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x301cac: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x301cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x301cb0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x301cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x301cb4: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x301cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x301cb8: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x301CB8u;
    SET_GPR_U32(ctx, 31, 0x301CC0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x301CB8u, 0x301CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CC0u;
label_301cc0:
    // 0x301cc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x301CC0u;
    {
        const bool branch_taken_0x301cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x301cc0) {
            ctx->pc = 0x301CF8u;
            return;
        }
    }
    ctx->pc = 0x301CC8u;
    // 0x301cc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x301cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x301ccc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cd0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x301cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x301cd4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x301cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x301cd8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cdc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x301cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x301ce0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301ce4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x301ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x301ce8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cec: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x301cecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x301cf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x301cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x301cf4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x301cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x301cf8u;
}
