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

// Function: entry_00370100
// Address: 0x370100 - 0x370160
void entry_00370100_0x370100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00370100_0x370100");
#endif

    switch (ctx->pc) {
        case 0x37013cu: goto label_37013c;
        case 0x370158u: goto label_370158;
        default: break;
    }

    ctx->pc = 0x370100u;

    // 0x370100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370104: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x370104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x370108: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x370108u;
    {
        const bool branch_taken_0x370108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x370108) {
            ctx->pc = 0x370160u;
            return;
        }
    }
    ctx->pc = 0x370110u;
    // 0x370110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x370110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370114: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x370114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370118: 0x3c023c64  lui         $v0, 0x3C64
    ctx->pc = 0x370118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15460 << 16));
    // 0x37011c: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x37011cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x370120: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x370120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370124: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x370124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x370128: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x370128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x37012c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37012cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x370130: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x370130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x370134: 0xc05c848  jal         func_172120
    ctx->pc = 0x370134u;
    SET_GPR_U32(ctx, 31, 0x37013Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x370134u, 0x37013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37013Cu;
label_37013c:
    // 0x37013c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x37013cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x370140: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x370144: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x370144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370148: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x370148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37014c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x37014cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x370150: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x370150u;
    SET_GPR_U32(ctx, 31, 0x370158u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x370150u, 0x370158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370158u;
label_370158:
    // 0x370158: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x370158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37015c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x37015cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x370160u;
}
