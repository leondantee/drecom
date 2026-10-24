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

// Function: entry_0018e5e8
// Address: 0x18e5e8 - 0x18e630
void entry_0018e5e8_0x18e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5e8_0x18e5e8");
#endif

    switch (ctx->pc) {
        case 0x18e60cu: goto label_18e60c;
        default: break;
    }

    ctx->pc = 0x18e5e8u;

label_18e5e8:
    // 0x18e5e8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x18e5e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_18e5ec:
    // 0x18e5ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18e5f0:
    // 0x18e5f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x18e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18e5f4:
    // 0x18e5f4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x18e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_18e5f8:
    // 0x18e5f8: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x18e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
label_18e5fc:
    // 0x18e5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e600:
    // 0x18e600: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18e600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e604:
    // 0x18e604: 0x40f809  jalr        $v0
label_18e608:
    if (ctx->pc == 0x18E608u) {
        ctx->pc = 0x18E60Cu;
        goto label_18e60c;
    }
    ctx->pc = 0x18E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E60Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E604u, 0x18E60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E60Cu;
label_18e60c:
    // 0x18e60c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x18e60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_18e610:
    // 0x18e610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18e614:
    // 0x18e614: 0xae2300d4  sw          $v1, 0xD4($s1)
    ctx->pc = 0x18e614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
label_18e618:
    // 0x18e618: 0xc62100d8  lwc1        $f1, 0xD8($s1)
    ctx->pc = 0x18e618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18e61c:
    // 0x18e61c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x18e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_18e620:
    // 0x18e620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18e620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e624:
    // 0x18e624: 0x0  nop
    ctx->pc = 0x18e624u;
    // NOP
label_18e628:
    // 0x18e628: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18e628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18e62c:
    // 0x18e62c: 0xe62000d8  swc1        $f0, 0xD8($s1)
    ctx->pc = 0x18e62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 216), bits); }
    ctx->pc = 0x18e630u;
}
