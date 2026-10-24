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

// Function: entry_0023a608
// Address: 0x23a608 - 0x23a660
void entry_0023a608_0x23a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023a608_0x23a608");
#endif

    ctx->pc = 0x23a608u;

    // 0x23a608: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a60c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a610: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a614: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x23a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x23a618: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x23a618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x23a61c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23a61cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a620: 0x0  nop
    ctx->pc = 0x23a620u;
    // NOP
    // 0x23a624: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23a624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23a628: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x23a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x23a62c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a630: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a634: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x23a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a63c: 0x0  nop
    ctx->pc = 0x23a63cu;
    // NOP
    // 0x23a640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23a640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a644: 0x0  nop
    ctx->pc = 0x23a644u;
    // NOP
    // 0x23a648: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23A648u;
    {
        const bool branch_taken_0x23a648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23a648) {
            ctx->pc = 0x23A660u;
            return;
        }
    }
    ctx->pc = 0x23A650u;
    // 0x23a650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23a650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23a654: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x23a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x23a658: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23a65c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x23a65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    ctx->pc = 0x23a660u;
}
