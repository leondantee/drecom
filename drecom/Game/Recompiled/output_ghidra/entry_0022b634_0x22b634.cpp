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

// Function: entry_0022b634
// Address: 0x22b634 - 0x22b678
void entry_0022b634_0x22b634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b634_0x22b634");
#endif

    ctx->pc = 0x22b634u;

    // 0x22b634: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b638: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x22b638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22b63c: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x22b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b640: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x22b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b644: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22b644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22b648: 0x0  nop
    ctx->pc = 0x22b648u;
    // NOP
    // 0x22b64c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x22B64Cu;
    {
        const bool branch_taken_0x22b64c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22b64c) {
            ctx->pc = 0x22B678u;
            return;
        }
    }
    ctx->pc = 0x22B654u;
    // 0x22b654: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b658: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b65c: 0xc46100a0  lwc1        $f1, 0xA0($v1)
    ctx->pc = 0x22b65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b660: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x22b660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x22b664: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x22b664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x22b668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b66c: 0x0  nop
    ctx->pc = 0x22b66cu;
    // NOP
    // 0x22b670: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x22b670u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x22b674: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x22b674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    ctx->pc = 0x22b678u;
}
