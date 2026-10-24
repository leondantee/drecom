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

// Function: entry_00302c3c
// Address: 0x302c3c - 0x302ca4
void entry_00302c3c_0x302c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00302c3c_0x302c3c");
#endif

    switch (ctx->pc) {
        case 0x302c80u: goto label_302c80;
        case 0x302c94u: goto label_302c94;
        default: break;
    }

    ctx->pc = 0x302c3cu;

    // 0x302c3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c40: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x302c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x302c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x302c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x302c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x302c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x302c4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x302C4Cu;
    {
        const bool branch_taken_0x302c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c4c) {
            ctx->pc = 0x302CA4u;
            return;
        }
    }
    ctx->pc = 0x302C54u;
    // 0x302c54: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x302c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x302c58: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x302c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x302c5c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x302c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x302c60: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x302c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x302c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c68: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c6c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x302c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x302c70: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x302c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x302c74: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x302c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x302c78: 0xc05c848  jal         func_172120
    ctx->pc = 0x302C78u;
    SET_GPR_U32(ctx, 31, 0x302C80u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x302C78u, 0x302C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C80u;
label_302c80:
    // 0x302c80: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c84: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x302c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x302c88: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x302c88u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x302c8c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x302C8Cu;
    SET_GPR_U32(ctx, 31, 0x302C94u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x302C8Cu, 0x302C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302C94u;
label_302c94:
    // 0x302c94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x302c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x302c98: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x302c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x302c9c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x302C9Cu;
    {
        const bool branch_taken_0x302c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x302c9c) {
            ctx->pc = 0x302CECu;
            return;
        }
    }
    ctx->pc = 0x302CA4u;
}
