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

// Function: entry_0035f01c
// Address: 0x35f01c - 0x35f094
void entry_0035f01c_0x35f01c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f01c_0x35f01c");
#endif

    ctx->pc = 0x35f01cu;

    // 0x35f01c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f020: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x35f020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f024: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x35f024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x35f028: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35f028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35f02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f030: 0x0  nop
    ctx->pc = 0x35f030u;
    // NOP
    // 0x35f034: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f034u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f038: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x35f038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x35f03c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f040: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x35f040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f044: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x35f044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x35f048: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35f048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35f04c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35f04cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f050: 0x0  nop
    ctx->pc = 0x35f050u;
    // NOP
    // 0x35f054: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x35f054u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x35f058: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x35f058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x35f05c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f060: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x35f060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35f064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35f064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35f068: 0x0  nop
    ctx->pc = 0x35f068u;
    // NOP
    // 0x35f06c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35f06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35f070: 0x0  nop
    ctx->pc = 0x35f070u;
    // NOP
    // 0x35f074: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x35F074u;
    {
        const bool branch_taken_0x35f074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35f074) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35F07Cu;
    // 0x35f07c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f080: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35f080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35f084: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35f088: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35f088u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f08c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x35F08Cu;
    {
        const bool branch_taken_0x35f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f08c) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35F094u;
}
