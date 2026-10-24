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

// Function: entry_00244258
// Address: 0x244258 - 0x2442b0
void entry_00244258_0x244258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244258_0x244258");
#endif

    ctx->pc = 0x244258u;

    // 0x244258: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x244258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24425c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x24425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244260: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x244260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244264: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x244264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x244268: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x244268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24426c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24426cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244270: 0x0  nop
    ctx->pc = 0x244270u;
    // NOP
    // 0x244274: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x244274u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x244278: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x244278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x24427c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x24427cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244280: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x244284: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x244284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244288: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24428c: 0x0  nop
    ctx->pc = 0x24428cu;
    // NOP
    // 0x244290: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244294: 0x0  nop
    ctx->pc = 0x244294u;
    // NOP
    // 0x244298: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244298) {
            ctx->pc = 0x2442B0u;
            return;
        }
    }
    ctx->pc = 0x2442A0u;
    // 0x2442a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2442a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2442a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2442a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2442a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2442ac: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2442acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x2442b0u;
}
