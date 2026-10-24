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

// Function: entry_0029ebc0
// Address: 0x29ebc0 - 0x29ec08
void entry_0029ebc0_0x29ebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ebc0_0x29ebc0");
#endif

    switch (ctx->pc) {
        case 0x29ebd0u: goto label_29ebd0;
        default: break;
    }

    ctx->pc = 0x29ebc0u;

    // 0x29ebc0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebc4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x29ebc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x29ebc8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29EBC8u;
    SET_GPR_U32(ctx, 31, 0x29EBD0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29EBC8u, 0x29EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EBD0u;
label_29ebd0:
    // 0x29ebd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29ebd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29ebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29ebd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29EBD8u;
    {
        const bool branch_taken_0x29ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ebd8) {
            ctx->pc = 0x29EC08u;
            return;
        }
    }
    ctx->pc = 0x29EBE0u;
    // 0x29ebe0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ebe4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x29ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x29ebe8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x29ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x29ebec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29ebecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29ebf0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x29ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29ebf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29ebf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29ebf8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x29ebf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x29ebfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29ebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29ec00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x29ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29ec04: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x29ec04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x29ec08u;
}
