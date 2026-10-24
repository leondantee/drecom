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

// Function: entry_00348698
// Address: 0x348698 - 0x348700
void entry_00348698_0x348698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348698_0x348698");
#endif

    switch (ctx->pc) {
        case 0x3486dcu: goto label_3486dc;
        case 0x3486f8u: goto label_3486f8;
        default: break;
    }

    ctx->pc = 0x348698u;

    // 0x348698: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x348698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x34869c: 0x908309db  lbu         $v1, 0x9DB($a0)
    ctx->pc = 0x34869cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2523)));
    // 0x3486a0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3486a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3486a4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3486a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3486a8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3486A8u;
    {
        const bool branch_taken_0x3486a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3486a8) {
            ctx->pc = 0x348700u;
            return;
        }
    }
    ctx->pc = 0x3486B0u;
    // 0x3486b0: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x3486b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x3486b4: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x3486b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x3486b8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3486b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3486bc: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3486bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486c0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486c4: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x3486c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x3486c8: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x3486c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3486cc: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x3486ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x3486d0: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x3486d4: 0xc05c848  jal         func_172120
    ctx->pc = 0x3486D4u;
    SET_GPR_U32(ctx, 31, 0x3486DCu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x3486D4u, 0x3486DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486DCu;
label_3486dc:
    // 0x3486dc: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x3486dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x3486e0: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486e4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x3486e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3486e8: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x3486e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3486ec: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3486ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3486f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3486F0u;
    SET_GPR_U32(ctx, 31, 0x3486F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3486F0u, 0x3486F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3486F8u;
label_3486f8:
    // 0x3486f8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x3486f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3486fc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x3486fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x348700u;
}
