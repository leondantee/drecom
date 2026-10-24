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

// Function: entry_002a1b48
// Address: 0x2a1b48 - 0x2a1bb0
void entry_002a1b48_0x2a1b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1b48_0x2a1b48");
#endif

    switch (ctx->pc) {
        case 0x2a1b8cu: goto label_2a1b8c;
        case 0x2a1ba8u: goto label_2a1ba8;
        default: break;
    }

    ctx->pc = 0x2a1b48u;

    // 0x2a1b48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b4c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2a1b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2a1b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2a1b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2a1b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2a1b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2a1b58: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x2a1b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a1b5c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A1B5Cu;
    {
        const bool branch_taken_0x2a1b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a1b5c) {
            ctx->pc = 0x2A1BB0u;
            return;
        }
    }
    ctx->pc = 0x2A1B64u;
    // 0x2a1b64: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2a1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2a1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b6c: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x2a1b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
    // 0x2a1b70: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a1b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a1b74: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a1b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a1b78: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a1b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a1b7c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a1b80: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x2a1b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2a1b84: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A1B84u;
    SET_GPR_U32(ctx, 31, 0x2A1B8Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A1B84u, 0x2A1B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1B8Cu;
label_2a1b8c:
    // 0x2a1b8c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a1b90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1b94: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x2a1b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a1b98: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2a1b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a1b9c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a1b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a1ba0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A1BA0u;
    SET_GPR_U32(ctx, 31, 0x2A1BA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A1BA0u, 0x2A1BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1BA8u;
label_2a1ba8:
    // 0x2a1ba8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1bac: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a1bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    ctx->pc = 0x2a1bb0u;
}
