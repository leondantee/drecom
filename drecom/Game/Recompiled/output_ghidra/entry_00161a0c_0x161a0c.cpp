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

// Function: entry_00161a0c
// Address: 0x161a0c - 0x161a40
void entry_00161a0c_0x161a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161a0c_0x161a0c");
#endif

    switch (ctx->pc) {
        case 0x161a2cu: goto label_161a2c;
        default: break;
    }

    ctx->pc = 0x161a0cu;

    // 0x161a0c: 0xc6011380  lwc1        $f1, 0x1380($s0)
    ctx->pc = 0x161a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161a10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x161a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x161a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x161a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x161a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x161a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x161a1c: 0x0  nop
    ctx->pc = 0x161a1cu;
    // NOP
    // 0x161a20: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x161a20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x161a24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x161A24u;
    SET_GPR_U32(ctx, 31, 0x161A2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x161A24u, 0x161A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161A2Cu;
label_161a2c:
    // 0x161a2c: 0xe60013b8  swc1        $f0, 0x13B8($s0)
    ctx->pc = 0x161a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5048), bits); }
    // 0x161a30: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x161a34: 0xa20313b4  sb          $v1, 0x13B4($s0)
    ctx->pc = 0x161a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5044), (uint8_t)GPR_U32(ctx, 3));
    // 0x161a38: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x161A38u;
    {
        const bool branch_taken_0x161a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161a38) {
            ctx->pc = 0x161AA0u;
            return;
        }
    }
    ctx->pc = 0x161A40u;
}
