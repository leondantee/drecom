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

// Function: caseD_5
// Address: 0x1b503c - 0x1b5078
void caseD_5_0x1b503c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x1b503c");
#endif

    switch (ctx->pc) {
        case 0x1b506cu: goto label_1b506c;
        default: break;
    }

    ctx->pc = 0x1b503cu;

    // 0x1b503c: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B503Cu;
    {
        const bool branch_taken_0x1b503c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b503c) {
            ctx->pc = 0x1B5078u;
            return;
        }
    }
    ctx->pc = 0x1B5044u;
    // 0x1b5044: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b5044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b5048: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1b5048u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b504c: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x1b504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5050: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1b5050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1b5054: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b5054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1b5058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b505c: 0x0  nop
    ctx->pc = 0x1b505cu;
    // NOP
    // 0x1b5060: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b5060u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b5064: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B5064u;
    SET_GPR_U32(ctx, 31, 0x1B506Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B5064u, 0x1B506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B506Cu;
label_1b506c:
    // 0x1b506c: 0xe6001290  swc1        $f0, 0x1290($s0)
    ctx->pc = 0x1b506cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4752), bits); }
    // 0x1b5070: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5070u;
    {
        const bool branch_taken_0x1b5070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5070) {
            ctx->pc = 0x1B5088u;
            return;
        }
    }
    ctx->pc = 0x1B5078u;
}
