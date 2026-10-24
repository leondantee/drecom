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

// Function: entry_002f01dc
// Address: 0x2f01dc - 0x2f0224
void entry_002f01dc_0x2f01dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f01dc_0x2f01dc");
#endif

    switch (ctx->pc) {
        case 0x2f0200u: goto label_2f0200;
        default: break;
    }

    ctx->pc = 0x2f01dcu;

label_2f01dc:
    // 0x2f01dc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f01dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_2f01e0:
    // 0x2f01e0: 0x8e020350  lw          $v0, 0x350($s0)
    ctx->pc = 0x2f01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
label_2f01e4:
    // 0x2f01e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2f01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2f01e8:
    // 0x2f01e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x2f01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_2f01ec:
    // 0x2f01ec: 0x24426e10  addiu       $v0, $v0, 0x6E10
    ctx->pc = 0x2f01ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28176));
label_2f01f0:
    // 0x2f01f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2f01f4:
    // 0x2f01f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2f01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2f01f8:
    // 0x2f01f8: 0x40f809  jalr        $v0
label_2f01fc:
    if (ctx->pc == 0x2F01FCu) {
        ctx->pc = 0x2F0200u;
        goto label_2f0200;
    }
    ctx->pc = 0x2F01F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F0200u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F01F8u, 0x2F0200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0200u;
label_2f0200:
    // 0x2f0200: 0x8e030ab8  lw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2744)));
label_2f0204:
    // 0x2f0204: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f0204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2f0208:
    // 0x2f0208: 0xae030ab8  sw          $v1, 0xAB8($s0)
    ctx->pc = 0x2f0208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 3));
label_2f020c:
    // 0x2f020c: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2f020cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
label_2f0210:
    // 0x2f0210: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2f0210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_2f0214:
    // 0x2f0214: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f0214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f0218:
    // 0x2f0218: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f021c:
    // 0x2f021c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f021cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2f0220:
    // 0x2f0220: 0xe6000ac8  swc1        $f0, 0xAC8($s0)
    ctx->pc = 0x2f0220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2760), bits); }
    ctx->pc = 0x2f0224u;
}
