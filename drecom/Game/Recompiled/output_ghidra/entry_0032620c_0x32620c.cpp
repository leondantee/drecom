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

// Function: entry_0032620c
// Address: 0x32620c - 0x326284
void entry_0032620c_0x32620c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032620c_0x32620c");
#endif

    switch (ctx->pc) {
        case 0x32625cu: goto label_32625c;
        default: break;
    }

    ctx->pc = 0x32620cu;

    // 0x32620c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x32620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326210: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x326210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326214: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326218: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x326218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32621c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32621cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x326220: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x326220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
    // 0x326224: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x326224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326228: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32622c: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x32622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x326230: 0xc46000fc  lwc1        $f0, 0xFC($v1)
    ctx->pc = 0x326230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x326234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x326238: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x326238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x32623c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32623cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326240: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x326240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326244: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x326244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326248: 0x24840090  addiu       $a0, $a0, 0x90
    ctx->pc = 0x326248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x32624c: 0x24650090  addiu       $a1, $v1, 0x90
    ctx->pc = 0x32624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x326250: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x326250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x326254: 0xc040c86  jal         func_103218
    ctx->pc = 0x326254u;
    SET_GPR_U32(ctx, 31, 0x32625Cu);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x32625Cu;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32625Cu) { return; }
    ctx->pc = 0x32625Cu;
label_32625c:
    // 0x32625c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x32625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326260: 0x90830211  lbu         $v1, 0x211($a0)
    ctx->pc = 0x326260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 529)));
    // 0x326264: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x326264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x326268: 0xa0830211  sb          $v1, 0x211($a0)
    ctx->pc = 0x326268u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 529), (uint8_t)GPR_U32(ctx, 3));
    // 0x32626c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x32626cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x326278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x32627c: 0x3e00008  jr          $ra
    ctx->pc = 0x32627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326284u;
}
