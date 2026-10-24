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

// Function: entry_0028c12c
// Address: 0x28c12c - 0x28c198
void entry_0028c12c_0x28c12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c12c_0x28c12c");
#endif

    switch (ctx->pc) {
        case 0x28c14cu: goto label_28c14c;
        default: break;
    }

    ctx->pc = 0x28c12cu;

    // 0x28c12c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28c12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28c130: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28c130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28c134: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c138: 0x0  nop
    ctx->pc = 0x28c138u;
    // NOP
    // 0x28c13c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28c13cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28c140: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x28c140u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28c144: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28C144u;
    SET_GPR_U32(ctx, 31, 0x28C14Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28C144u, 0x28C14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C14Cu;
label_28c14c:
    // 0x28c14c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x28c14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x28c150: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x28c150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x28c154: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x28c154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x28c158: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x28c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x28c15c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x28c15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x28c160: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x28c160u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c168: 0x0  nop
    ctx->pc = 0x28c168u;
    // NOP
    // 0x28c16c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x28c16cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x28c170: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28c174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28c174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28c178: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x28c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28c17c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C17Cu;
    {
        const bool branch_taken_0x28c17c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28c17c) {
            ctx->pc = 0x28C198u;
            return;
        }
    }
    ctx->pc = 0x28C184u;
    // 0x28c184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c188: 0x0  nop
    ctx->pc = 0x28c188u;
    // NOP
    // 0x28c18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28c18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28c190: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C190u;
    {
        const bool branch_taken_0x28c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c190) {
            ctx->pc = 0x28C1B4u;
            return;
        }
    }
    ctx->pc = 0x28C198u;
}
