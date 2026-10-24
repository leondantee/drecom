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

// Function: entry_001f6004
// Address: 0x1f6004 - 0x1f6060
void entry_001f6004_0x1f6004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6004_0x1f6004");
#endif

    ctx->pc = 0x1f6004u;

    // 0x1f6004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6008: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1f6008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f600c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x1f600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x1f6010: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x1f6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x1f6014: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f6014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6018: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x1f6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f601c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f601cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f6020: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x1f6020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x1f6024: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6028: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f602c: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x1f602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6030: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f6030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f6034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6038: 0x0  nop
    ctx->pc = 0x1f6038u;
    // NOP
    // 0x1f603c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f603cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6040: 0x0  nop
    ctx->pc = 0x1f6040u;
    // NOP
    // 0x1f6044: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6044u;
    {
        const bool branch_taken_0x1f6044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6044) {
            ctx->pc = 0x1F6060u;
            return;
        }
    }
    ctx->pc = 0x1F604Cu;
    // 0x1f604c: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1f604cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1f6050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f6050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6058: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f605c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x1f605cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    ctx->pc = 0x1f6060u;
}
