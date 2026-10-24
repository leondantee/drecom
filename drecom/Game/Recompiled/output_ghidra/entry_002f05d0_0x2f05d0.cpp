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

// Function: entry_002f05d0
// Address: 0x2f05d0 - 0x2f0618
void entry_002f05d0_0x2f05d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f05d0_0x2f05d0");
#endif

    switch (ctx->pc) {
        case 0x2f0614u: goto label_2f0614;
        default: break;
    }

    ctx->pc = 0x2f05d0u;

    // 0x2f05d0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2f05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2f05d4: 0x24428d90  addiu       $v0, $v0, -0x7270
    ctx->pc = 0x2f05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938000));
    // 0x2f05d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f05dc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2f05dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f05e0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f05e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f05e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f05e8: 0x2444dbc0  addiu       $a0, $v0, -0x2440
    ctx->pc = 0x2f05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x2f05ec: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f05ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f05f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2f05f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f05f4: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2f05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f05f8: 0xc7ad0078  lwc1        $f13, 0x78($sp)
    ctx->pc = 0x2f05f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f05fc: 0xc7ae0080  lwc1        $f14, 0x80($sp)
    ctx->pc = 0x2f05fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2f0600: 0xc7af0088  lwc1        $f15, 0x88($sp)
    ctx->pc = 0x2f0600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2f0604: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2f0604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f0608: 0x8fa90098  lw          $t1, 0x98($sp)
    ctx->pc = 0x2f0608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f060c: 0xc0862f8  jal         func_218BE0
    ctx->pc = 0x2F060Cu;
    SET_GPR_U32(ctx, 31, 0x2F0614u);
    ctx->pc = 0x218BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218BE0u, 0x2F060Cu, 0x2F0614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0614u;
label_2f0614:
    // 0x2f0614: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f0614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2f0618u;
}
