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

// Function: entry_0022703c
// Address: 0x22703c - 0x227094
void entry_0022703c_0x22703c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022703c_0x22703c");
#endif

    ctx->pc = 0x22703cu;

    // 0x22703c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x22703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227040: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227044: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x227044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227048: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22704c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22704cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x227050: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x227050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227054: 0x0  nop
    ctx->pc = 0x227054u;
    // NOP
    // 0x227058: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x227058u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22705c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22705cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x227060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x227064: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x227064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227068: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x227068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22706c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22706cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227070: 0x0  nop
    ctx->pc = 0x227070u;
    // NOP
    // 0x227074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x227074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227078: 0x0  nop
    ctx->pc = 0x227078u;
    // NOP
    // 0x22707c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22707Cu;
    {
        const bool branch_taken_0x22707c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22707c) {
            ctx->pc = 0x227094u;
            return;
        }
    }
    ctx->pc = 0x227084u;
    // 0x227084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227088: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x227088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22708c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x227090: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x227090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x227094u;
}
