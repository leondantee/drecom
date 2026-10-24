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

// Function: entry_001f06f0
// Address: 0x1f06f0 - 0x1f0740
void entry_001f06f0_0x1f06f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f06f0_0x1f06f0");
#endif

    switch (ctx->pc) {
        case 0x1f0734u: goto label_1f0734;
        default: break;
    }

    ctx->pc = 0x1f06f0u;

    // 0x1f06f0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f06f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f06f8: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1f06fc: 0x30701000  andi        $s0, $v1, 0x1000
    ctx->pc = 0x1f06fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1f0700: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F0700u;
    {
        const bool branch_taken_0x1f0700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0700) {
            ctx->pc = 0x1F0740u;
            return;
        }
    }
    ctx->pc = 0x1F0708u;
    // 0x1f0708: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1f0708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f070c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x1f070cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0710: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1f0710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f0714: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1f0714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f0718: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1f0718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1f071c: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1f071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0720: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1f0720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1f0724: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1f0724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1f0728: 0xc44d003c  lwc1        $f13, 0x3C($v0)
    ctx->pc = 0x1f0728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1f072c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1F072Cu;
    SET_GPR_U32(ctx, 31, 0x1F0734u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1F072Cu, 0x1F0734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0734u;
label_1f0734:
    // 0x1f0734: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1f0734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1f0738: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0738u;
    {
        const bool branch_taken_0x1f0738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0738) {
            ctx->pc = 0x1F0784u;
            return;
        }
    }
    ctx->pc = 0x1F0740u;
}
