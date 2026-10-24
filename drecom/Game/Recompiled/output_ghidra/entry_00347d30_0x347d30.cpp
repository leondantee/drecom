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

// Function: entry_00347d30
// Address: 0x347d30 - 0x347d98
void entry_00347d30_0x347d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00347d30_0x347d30");
#endif

    switch (ctx->pc) {
        case 0x347d74u: goto label_347d74;
        case 0x347d90u: goto label_347d90;
        default: break;
    }

    ctx->pc = 0x347d30u;

    // 0x347d30: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d34: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x347d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x347d38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x347d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x347d3c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x347d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x347d40: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x347D40u;
    {
        const bool branch_taken_0x347d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347d40) {
            ctx->pc = 0x347D98u;
            return;
        }
    }
    ctx->pc = 0x347D48u;
    // 0x347d48: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x347d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d4c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x347d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d50: 0x3c033dd6  lui         $v1, 0x3DD6
    ctx->pc = 0x347d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15830 << 16));
    // 0x347d54: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x347d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x347d58: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x347d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x347d5c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x347d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x347d60: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x347d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x347d64: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x347d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x347d68: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x347d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x347d6c: 0xc05c848  jal         func_172120
    ctx->pc = 0x347D6Cu;
    SET_GPR_U32(ctx, 31, 0x347D74u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x347D6Cu, 0x347D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D74u;
label_347d74:
    // 0x347d74: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x347d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x347d78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d7c: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x347d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347d80: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x347d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x347d84: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x347d84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x347d88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x347D88u;
    SET_GPR_U32(ctx, 31, 0x347D90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x347D88u, 0x347D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347D90u;
label_347d90:
    // 0x347d90: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x347d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x347d94: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x347d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->pc = 0x347d98u;
}
