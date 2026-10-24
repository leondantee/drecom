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

// Function: entry_00140250
// Address: 0x140250 - 0x1402a8
void entry_00140250_0x140250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140250_0x140250");
#endif

    switch (ctx->pc) {
        case 0x140278u: goto label_140278;
        default: break;
    }

    ctx->pc = 0x140250u;

label_140250:
    // 0x140250: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x140250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_140254:
    // 0x140254: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x140254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_140258:
    // 0x140258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x140258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14025c:
    // 0x14025c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14025cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140260:
    // 0x140260: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_140264:
    // 0x140264: 0x24425160  addiu       $v0, $v0, 0x5160
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20832));
label_140268:
    // 0x140268: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14026c:
    // 0x14026c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140270:
    // 0x140270: 0x40f809  jalr        $v0
label_140274:
    if (ctx->pc == 0x140274u) {
        ctx->pc = 0x140278u;
        goto label_140278;
    }
    ctx->pc = 0x140270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140278u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140270u, 0x140278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140278u;
label_140278:
    // 0x140278: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14027c:
    // 0x14027c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14027cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6728)));
label_140280:
    // 0x140280: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_140284:
    // 0x140284: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x140284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_140288:
    // 0x140288: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_14028c:
    if (ctx->pc == 0x14028Cu) {
        ctx->pc = 0x140290u;
        goto label_140290;
    }
    ctx->pc = 0x140288u;
    {
        const bool branch_taken_0x140288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140288) {
            ctx->pc = 0x1402A8u;
            return;
        }
    }
    ctx->pc = 0x140290u;
label_140290:
    // 0x140290: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_140294:
    // 0x140294: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x140294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_140298:
    // 0x140298: 0xc44001bc  lwc1        $f0, 0x1BC($v0)
    ctx->pc = 0x140298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14029c:
    // 0x14029c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14029cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_1402a0:
    // 0x1402a0: 0xe4209228  swc1        $f0, -0x6DD8($at)
    ctx->pc = 0x1402a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294939176), bits); }
label_1402a4:
    // 0x1402a4: 0x0  nop
    ctx->pc = 0x1402a4u;
    // NOP
    ctx->pc = 0x1402a8u;
}
