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

// Function: entry_001f6228
// Address: 0x1f6228 - 0x1f62a0
void entry_001f6228_0x1f6228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6228_0x1f6228");
#endif

    ctx->pc = 0x1f6228u;

    // 0x1f6228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f622c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6230: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6234: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6238: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f623c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f623cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6240: 0x0  nop
    ctx->pc = 0x1f6240u;
    // NOP
    // 0x1f6244: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6244u;
    {
        const bool branch_taken_0x1f6244 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6244) {
            ctx->pc = 0x1F62A0u;
            return;
        }
    }
    ctx->pc = 0x1F624Cu;
    // 0x1f624c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6250: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6254: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6258: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f625c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f625cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6260: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6264: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x1f6268: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f626c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6270: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1f6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6274: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6278: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1f6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f627c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f627cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6280: 0x0  nop
    ctx->pc = 0x1f6280u;
    // NOP
    // 0x1f6284: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6284u;
    {
        const bool branch_taken_0x1f6284 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6284) {
            ctx->pc = 0x1F62A0u;
            return;
        }
    }
    ctx->pc = 0x1F628Cu;
    // 0x1f628c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f628cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6294: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1f6294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1f6298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f629c: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x1f629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x1f62a0u;
}
