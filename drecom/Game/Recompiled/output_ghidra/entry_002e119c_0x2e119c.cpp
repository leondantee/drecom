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

// Function: entry_002e119c
// Address: 0x2e119c - 0x2e1214
void entry_002e119c_0x2e119c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e119c_0x2e119c");
#endif

    switch (ctx->pc) {
        case 0x2e11b4u: goto label_2e11b4;
        case 0x2e11dcu: goto label_2e11dc;
        case 0x2e11e4u: goto label_2e11e4;
        default: break;
    }

    ctx->pc = 0x2e119cu;

    // 0x2e119c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x2e119cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e11a0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2e11a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2e11a4: 0x10600154  beqz        $v1, . + 4 + (0x154 << 2)
    ctx->pc = 0x2E11A4u;
    {
        const bool branch_taken_0x2e11a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11a4) {
            ctx->pc = 0x2E16F8u;
            return;
        }
    }
    ctx->pc = 0x2E11ACu;
    // 0x2e11ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E11ACu;
    SET_GPR_U32(ctx, 31, 0x2E11B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E11ACu, 0x2E11B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11B4u;
label_2e11b4:
    // 0x2e11b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11b8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2e11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e11bc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2e11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2e11c0: 0x24428b40  addiu       $v0, $v0, -0x74C0
    ctx->pc = 0x2e11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x2e11c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e11c8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2e11c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e11cc: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e11ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2e11d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2e11d4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2E11D4u;
    SET_GPR_U32(ctx, 31, 0x2E11DCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2E11D4u, 0x2E11DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11DCu;
label_2e11dc:
    // 0x2e11dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2E11DCu;
    SET_GPR_U32(ctx, 31, 0x2E11E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2E11DCu, 0x2E11E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E11E4u;
label_2e11e4:
    // 0x2e11e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e11e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e11e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e11ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E11ECu;
    {
        const bool branch_taken_0x2e11ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e11ec) {
            ctx->pc = 0x2E1214u;
            return;
        }
    }
    ctx->pc = 0x2E11F4u;
    // 0x2e11f4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2e11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e11f8: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e11fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e11fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1200: 0x0  nop
    ctx->pc = 0x2e1200u;
    // NOP
    // 0x2e1204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1208: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2e1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e120c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E120Cu;
    {
        const bool branch_taken_0x2e120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e120c) {
            ctx->pc = 0x2E122Cu;
            return;
        }
    }
    ctx->pc = 0x2E1214u;
}
