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

// Function: entry_0022d454
// Address: 0x22d454 - 0x22d4ac
void entry_0022d454_0x22d454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d454_0x22d454");
#endif

    ctx->pc = 0x22d454u;

    // 0x22d454: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d458: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22d458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d45c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x22d45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d460: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x22d464: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22d468: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22d468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d46c: 0x0  nop
    ctx->pc = 0x22d46cu;
    // NOP
    // 0x22d470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22d470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22d474: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x22d474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22d478: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d47c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d480: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x22d480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d488: 0x0  nop
    ctx->pc = 0x22d488u;
    // NOP
    // 0x22d48c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22d48cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22d490: 0x0  nop
    ctx->pc = 0x22d490u;
    // NOP
    // 0x22d494: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x22D494u;
    {
        const bool branch_taken_0x22d494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22d494) {
            ctx->pc = 0x22D4ACu;
            return;
        }
    }
    ctx->pc = 0x22D49Cu;
    // 0x22d49c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d4a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d4a4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22d4a8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22d4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x22d4acu;
}
