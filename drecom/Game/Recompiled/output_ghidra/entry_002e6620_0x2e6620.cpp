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

// Function: entry_002e6620
// Address: 0x2e6620 - 0x2e66a4
void entry_002e6620_0x2e6620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e6620_0x2e6620");
#endif

    switch (ctx->pc) {
        case 0x2e662cu: goto label_2e662c;
        default: break;
    }

    ctx->pc = 0x2e6620u;

    // 0x2e6620: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e6620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6624: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2E6624u;
    SET_GPR_U32(ctx, 31, 0x2E662Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2E6624u, 0x2E662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E662Cu;
label_2e662c:
    // 0x2e662c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e662cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6630: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2e6630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2e6634: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2e6634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2e6638: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e6638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e663c: 0xc4801290  lwc1        $f0, 0x1290($a0)
    ctx->pc = 0x2e663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6640: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e6640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6644: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x2e6644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x2e6648: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e664c: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6654: 0x0  nop
    ctx->pc = 0x2e6654u;
    // NOP
    // 0x2e6658: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e6658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e665c: 0x0  nop
    ctx->pc = 0x2e665cu;
    // NOP
    // 0x2e6660: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x2E6660u;
    {
        const bool branch_taken_0x2e6660 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6660) {
            ctx->pc = 0x2E66A4u;
            return;
        }
    }
    ctx->pc = 0x2E6668u;
    // 0x2e6668: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e666c: 0xc4611290  lwc1        $f1, 0x1290($v1)
    ctx->pc = 0x2e666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e6670: 0x3c033bc9  lui         $v1, 0x3BC9
    ctx->pc = 0x2e6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15305 << 16));
    // 0x2e6674: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2e6674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2e6678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e6678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e667c: 0x0  nop
    ctx->pc = 0x2e667cu;
    // NOP
    // 0x2e6680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e6680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e6684: 0x0  nop
    ctx->pc = 0x2e6684u;
    // NOP
    // 0x2e6688: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2E6688u;
    {
        const bool branch_taken_0x2e6688 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e6688) {
            ctx->pc = 0x2E66D8u;
            return;
        }
    }
    ctx->pc = 0x2E6690u;
    // 0x2e6690: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e6690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e6694: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e6694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e6698: 0xe4601290  swc1        $f0, 0x1290($v1)
    ctx->pc = 0x2e6698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4752), bits); }
    // 0x2e669c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E669Cu;
    {
        const bool branch_taken_0x2e669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e669c) {
            ctx->pc = 0x2E66D8u;
            return;
        }
    }
    ctx->pc = 0x2E66A4u;
}
