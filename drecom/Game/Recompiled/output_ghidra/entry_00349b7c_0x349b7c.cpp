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

// Function: entry_00349b7c
// Address: 0x349b7c - 0x349bf4
void entry_00349b7c_0x349b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00349b7c_0x349b7c");
#endif

    ctx->pc = 0x349b7cu;

    // 0x349b7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b80: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349b84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x349b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349b88: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x349B88u;
    {
        const bool branch_taken_0x349b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349b88) {
            ctx->pc = 0x349BF4u;
            return;
        }
    }
    ctx->pc = 0x349B90u;
    // 0x349b90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b94: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349b98: 0xc4410088  lwc1        $f1, 0x88($v0)
    ctx->pc = 0x349b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349b9c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x349b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x349ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349ba4: 0x0  nop
    ctx->pc = 0x349ba4u;
    // NOP
    // 0x349ba8: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x349ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349bac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349bb0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349bb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x349bb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349bb8: 0x0  nop
    ctx->pc = 0x349bb8u;
    // NOP
    // 0x349bbc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x349BBCu;
    {
        const bool branch_taken_0x349bbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349bbc) {
            ctx->pc = 0x349BF4u;
            return;
        }
    }
    ctx->pc = 0x349BC4u;
    // 0x349bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349bc8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349bcc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x349bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x349bd0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x349bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x349bd4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349bd8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x349bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x349bdc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349be0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x349be0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x349be4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349be8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x349be8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x349bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349bf0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x349bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x349bf4u;
}
