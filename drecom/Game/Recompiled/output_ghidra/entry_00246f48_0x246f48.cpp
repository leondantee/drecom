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

// Function: entry_00246f48
// Address: 0x246f48 - 0x246fc0
void entry_00246f48_0x246f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00246f48_0x246f48");
#endif

    switch (ctx->pc) {
        case 0x246f68u: goto label_246f68;
        case 0x246fa4u: goto label_246fa4;
        default: break;
    }

    ctx->pc = 0x246f48u;

    // 0x246f48: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f4c: 0x94630a00  lhu         $v1, 0xA00($v1)
    ctx->pc = 0x246f4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2560)));
    // 0x246f50: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x246f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x246f54: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x246f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x246f58: 0x14830104  bne         $a0, $v1, . + 4 + (0x104 << 2)
    ctx->pc = 0x246F58u;
    {
        const bool branch_taken_0x246f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x246f58) {
            ctx->pc = 0x24736Cu;
            return;
        }
    }
    ctx->pc = 0x246F60u;
    // 0x246f60: 0xc067694  jal         func_19DA50
    ctx->pc = 0x246F60u;
    SET_GPR_U32(ctx, 31, 0x246F68u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x246F60u, 0x246F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246F68u;
label_246f68:
    // 0x246f68: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x246f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x246f6c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x246f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x246f70: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x246F70u;
    {
        const bool branch_taken_0x246f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f70) {
            ctx->pc = 0x24736Cu;
            return;
        }
    }
    ctx->pc = 0x246F78u;
    // 0x246f78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x246f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x246f7c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f80: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x246f80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x246f84: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x246f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f88: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246f8c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x246f90: 0x24062d1c  addiu       $a2, $zero, 0x2D1C
    ctx->pc = 0x246f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11548));
    // 0x246f94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x246f98: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x246f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x246f9c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x246F9Cu;
    SET_GPR_U32(ctx, 31, 0x246FA4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x246F9Cu, 0x246FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246FA4u;
label_246fa4:
    // 0x246fa4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x246fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x246fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x246fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246fac: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x246facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x246fb0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x246fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x246fb4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x246fb8: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x246FB8u;
    {
        const bool branch_taken_0x246fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246fb8) {
            ctx->pc = 0x24736Cu;
            return;
        }
    }
    ctx->pc = 0x246FC0u;
}
