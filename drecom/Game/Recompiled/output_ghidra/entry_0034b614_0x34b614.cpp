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

// Function: entry_0034b614
// Address: 0x34b614 - 0x34b690
void entry_0034b614_0x34b614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034b614_0x34b614");
#endif

    ctx->pc = 0x34b614u;

    // 0x34b614: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b618: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x34b618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b61c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x34b61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b620: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b624: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34b628: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34b628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34b62c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x34b630: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b634: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x34b634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x34b638: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x34b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b63c: 0x3c023cd6  lui         $v0, 0x3CD6
    ctx->pc = 0x34b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15574 << 16));
    // 0x34b640: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x34b640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x34b644: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b648: 0x0  nop
    ctx->pc = 0x34b648u;
    // NOP
    // 0x34b64c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x34b64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x34b650: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x34b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x34b654: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b658: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x34b658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34b65c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34b660: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34b660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34b664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b668: 0x0  nop
    ctx->pc = 0x34b668u;
    // NOP
    // 0x34b66c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34b66cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34b670: 0x0  nop
    ctx->pc = 0x34b670u;
    // NOP
    // 0x34b674: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x34B674u;
    {
        const bool branch_taken_0x34b674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34b674) {
            ctx->pc = 0x34B690u;
            return;
        }
    }
    ctx->pc = 0x34B67Cu;
    // 0x34b67c: 0x3c02bfc9  lui         $v0, 0xBFC9
    ctx->pc = 0x34b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49097 << 16));
    // 0x34b680: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x34b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x34b684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34b684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34b688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34b68c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x34b68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    ctx->pc = 0x34b690u;
}
