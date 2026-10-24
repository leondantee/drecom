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
// Address: 0x13a618 - 0x13a688
void caseD_2_0x13a618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x13a618");
#endif

    ctx->pc = 0x13a618u;

    // 0x13a618: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a61c: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a620: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a624: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x13a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a628: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13a628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13a62c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x13a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13a630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a634: 0xc4611b50  lwc1        $f1, 0x1B50($v1)
    ctx->pc = 0x13a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a638: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x13a63c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a63cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a640: 0x0  nop
    ctx->pc = 0x13a640u;
    // NOP
    // 0x13a644: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x13a644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x13a648: 0xe4601b50  swc1        $f0, 0x1B50($v1)
    ctx->pc = 0x13a648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6992), bits); }
    // 0x13a64c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a650: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x13a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a654: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x13a654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x13a658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a65c: 0x0  nop
    ctx->pc = 0x13a65cu;
    // NOP
    // 0x13a660: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13a660u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a664: 0x0  nop
    ctx->pc = 0x13a664u;
    // NOP
    // 0x13a668: 0x4501003c  bc1t        . + 4 + (0x3C << 2)
    ctx->pc = 0x13A668u;
    {
        const bool branch_taken_0x13a668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a668) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A670u;
    // 0x13a670: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a674: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x13a674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13a678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13a67c: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x13a67cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a680: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x13A680u;
    {
        const bool branch_taken_0x13a680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a680) {
            ctx->pc = 0x13A75Cu;
            return;
        }
    }
    ctx->pc = 0x13A688u;
}
