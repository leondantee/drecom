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

// Function: caseD_2
// Address: 0x2da600 - 0x2da664
void caseD_2_0x2da600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2da600");
#endif

    ctx->pc = 0x2da600u;

    // 0x2da600: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da604: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2da604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2da608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2da60c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2da610: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da614: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2da618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2da618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da61c: 0x0  nop
    ctx->pc = 0x2da61cu;
    // NOP
    // 0x2da620: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2da620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2da624: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2da624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2da628: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x2da628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da62c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x2da62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da630: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2da630u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2da634: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2da634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da638: 0x0  nop
    ctx->pc = 0x2da638u;
    // NOP
    // 0x2da63c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2DA63Cu;
    {
        const bool branch_taken_0x2da63c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da63c) {
            ctx->pc = 0x2DA6E8u;
            return;
        }
    }
    ctx->pc = 0x2DA644u;
    // 0x2da644: 0xa20000d9  sb          $zero, 0xD9($s0)
    ctx->pc = 0x2da644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x2da648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da64c: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x2da64cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
    // 0x2da650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da654: 0x0  nop
    ctx->pc = 0x2da654u;
    // NOP
    // 0x2da658: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x2da658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x2da65c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2DA65Cu;
    {
        const bool branch_taken_0x2da65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da65c) {
            ctx->pc = 0x2DA6E8u;
            return;
        }
    }
    ctx->pc = 0x2DA664u;
}
