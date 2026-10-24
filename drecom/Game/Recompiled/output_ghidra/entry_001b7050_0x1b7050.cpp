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

// Function: entry_001b7050
// Address: 0x1b7050 - 0x1b70b4
void entry_001b7050_0x1b7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7050_0x1b7050");
#endif

    switch (ctx->pc) {
        case 0x1b7084u: goto label_1b7084;
        case 0x1b70acu: goto label_1b70ac;
        default: break;
    }

    ctx->pc = 0x1b7050u;

    // 0x1b7050: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7054: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1b7054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1b7058: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B7058u;
    {
        const bool branch_taken_0x1b7058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7058) {
            ctx->pc = 0x1B70B4u;
            return;
        }
    }
    ctx->pc = 0x1B7060u;
    // 0x1b7060: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7064: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1b7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7068: 0x3c023ffb  lui         $v0, 0x3FFB
    ctx->pc = 0x1b7068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16379 << 16));
    // 0x1b706c: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x1b706cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
    // 0x1b7070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7074: 0x0  nop
    ctx->pc = 0x1b7074u;
    // NOP
    // 0x1b7078: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b7078u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b707c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B707Cu;
    SET_GPR_U32(ctx, 31, 0x1B7084u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B707Cu, 0x1B7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7084u;
label_1b7084:
    // 0x1b7084: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7088: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b7088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1b708c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b708cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7090: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7094: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b7094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b7098: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b7098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1b709c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1b709cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b70a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b70a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b70a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B70A4u;
    SET_GPR_U32(ctx, 31, 0x1B70ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B70A4u, 0x1B70ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70ACu;
label_1b70ac:
    // 0x1b70ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1B70ACu;
    {
        const bool branch_taken_0x1b70ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b70ac) {
            ctx->pc = 0x1B7100u;
            return;
        }
    }
    ctx->pc = 0x1B70B4u;
}
