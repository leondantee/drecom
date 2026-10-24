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

// Function: entry_001f522c
// Address: 0x1f522c - 0x1f52a0
void entry_001f522c_0x1f522c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f522c_0x1f522c");
#endif

    ctx->pc = 0x1f522cu;

    // 0x1f522c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5230: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1f5230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5234: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5238: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f523c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x1f523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5240: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1f5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5244: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1f5244u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f5248: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1f5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1f524c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5250: 0x0  nop
    ctx->pc = 0x1f5250u;
    // NOP
    // 0x1f5254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f5254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f5258: 0x0  nop
    ctx->pc = 0x1f5258u;
    // NOP
    // 0x1f525c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F525Cu;
    {
        const bool branch_taken_0x1f525c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f525c) {
            ctx->pc = 0x1F52A0u;
            return;
        }
    }
    ctx->pc = 0x1F5264u;
    // 0x1f5264: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5268: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x1f5268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x1f526c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F526Cu;
    {
        const bool branch_taken_0x1f526c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f526c) {
            ctx->pc = 0x1F52A0u;
            return;
        }
    }
    ctx->pc = 0x1F5274u;
    // 0x1f5274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f5274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5278: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f527c: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1f527cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f5280: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5284: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f5284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5288: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f528c: 0x24067800  addiu       $a2, $zero, 0x7800
    ctx->pc = 0x1f528cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30720));
    // 0x1f5290: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5294: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5298: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5298u;
    SET_GPR_U32(ctx, 31, 0x1F52A0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5298u, 0x1F52A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F52A0u;
}
