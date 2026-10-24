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

// Function: entry_00324858
// Address: 0x324858 - 0x3248a0
void entry_00324858_0x324858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324858_0x324858");
#endif

    switch (ctx->pc) {
        case 0x324898u: goto label_324898;
        default: break;
    }

    ctx->pc = 0x324858u;

    // 0x324858: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x324858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x32485c: 0x2442a150  addiu       $v0, $v0, -0x5EB0
    ctx->pc = 0x32485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943056));
    // 0x324860: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x324860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x324864: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x324864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x324868: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x324868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32486c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x32486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324870: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x324870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324874: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x324874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x324878: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x324878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32487c: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x32487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x324880: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x324880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x324884: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x324884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x324888: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x324888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32488c: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x32488cu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x324890: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x324890u;
    SET_GPR_U32(ctx, 31, 0x324898u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x324890u, 0x324898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324898u;
label_324898:
    // 0x324898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x324898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32489c: 0x0  nop
    ctx->pc = 0x32489cu;
    // NOP
    ctx->pc = 0x3248a0u;
}
