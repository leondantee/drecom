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

// Function: caseD_4
// Address: 0x1b4fe8 - 0x1b5024
void caseD_4_0x1b4fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1b4fe8");
#endif

    switch (ctx->pc) {
        case 0x1b5018u: goto label_1b5018;
        default: break;
    }

    ctx->pc = 0x1b4fe8u;

    // 0x1b4fe8: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B4FE8u;
    {
        const bool branch_taken_0x1b4fe8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4fe8) {
            ctx->pc = 0x1B5024u;
            return;
        }
    }
    ctx->pc = 0x1B4FF0u;
    // 0x1b4ff0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b4ff4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4ff8: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4ffc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b5000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b5004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5008: 0x0  nop
    ctx->pc = 0x1b5008u;
    // NOP
    // 0x1b500c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b500cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b5010: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B5010u;
    SET_GPR_U32(ctx, 31, 0x1B5018u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B5010u, 0x1B5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5018u;
label_1b5018:
    // 0x1b5018: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1b501c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B501Cu;
    {
        const bool branch_taken_0x1b501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b501c) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B5024u;
}
