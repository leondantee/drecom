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

// Function: entry_001b6614
// Address: 0x1b6614 - 0x1b6684
void entry_001b6614_0x1b6614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6614_0x1b6614");
#endif

    switch (ctx->pc) {
        case 0x1b6638u: goto label_1b6638;
        case 0x1b6650u: goto label_1b6650;
        default: break;
    }

    ctx->pc = 0x1b6614u;

    // 0x1b6614: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6618: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b6618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b661c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1b661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1b6620: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b6620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b6624: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b6624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1b6628: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b662c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b6630: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B6630u;
    SET_GPR_U32(ctx, 31, 0x1B6638u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B6630u, 0x1B6638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6638u;
label_1b6638:
    // 0x1b6638: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b663c: 0x8fb10068  lw          $s1, 0x68($sp)
    ctx->pc = 0x1b663cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6640: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b6644: 0xc62d1380  lwc1        $f13, 0x1380($s1)
    ctx->pc = 0x1b6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b6648: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B6648u;
    SET_GPR_U32(ctx, 31, 0x1B6650u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B6648u, 0x1B6650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6650u;
label_1b6650:
    // 0x1b6650: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b6654: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6658: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b665c: 0x0  nop
    ctx->pc = 0x1b665cu;
    // NOP
    // 0x1b6660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b6660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6664: 0x0  nop
    ctx->pc = 0x1b6664u;
    // NOP
    // 0x1b6668: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6668u;
    {
        const bool branch_taken_0x1b6668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6668) {
            ctx->pc = 0x1B6684u;
            return;
        }
    }
    ctx->pc = 0x1B6670u;
    // 0x1b6670: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b6670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b6674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b6674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6678: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b667c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b667cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b6680: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b6680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b6684u;
}
