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

// Function: entry_00355434
// Address: 0x355434 - 0x3554b4
void entry_00355434_0x355434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00355434_0x355434");
#endif

    ctx->pc = 0x355434u;

    // 0x355434: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355438: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35543c: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x35543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355440: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355444: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355448: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x355448u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35544c: 0x0  nop
    ctx->pc = 0x35544cu;
    // NOP
    // 0x355450: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x355450u;
    {
        const bool branch_taken_0x355450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355450) {
            ctx->pc = 0x3554BCu;
            return;
        }
    }
    ctx->pc = 0x355458u;
    // 0x355458: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35545c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35545cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x355460: 0xc4610094  lwc1        $f1, 0x94($v1)
    ctx->pc = 0x355460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355464: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355468: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35546c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35546cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x355470: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x355474: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355478: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x355478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x35547c: 0xc46100ac  lwc1        $f1, 0xAC($v1)
    ctx->pc = 0x35547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x355484: 0xc46001a0  lwc1        $f0, 0x1A0($v1)
    ctx->pc = 0x355484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355488: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x355488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35548c: 0x0  nop
    ctx->pc = 0x35548cu;
    // NOP
    // 0x355490: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x355490u;
    {
        const bool branch_taken_0x355490 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355490) {
            ctx->pc = 0x3554BCu;
            return;
        }
    }
    ctx->pc = 0x355498u;
    // 0x355498: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x355498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35549c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3554a0: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x3554a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3554a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3554a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3554a8: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x3554a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x3554ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3554ACu;
    {
        const bool branch_taken_0x3554ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554ac) {
            ctx->pc = 0x3554BCu;
            return;
        }
    }
    ctx->pc = 0x3554B4u;
}
