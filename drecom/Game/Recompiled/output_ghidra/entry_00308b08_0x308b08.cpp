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

// Function: entry_00308b08
// Address: 0x308b08 - 0x308ba0
void entry_00308b08_0x308b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308b08_0x308b08");
#endif

    switch (ctx->pc) {
        case 0x308b28u: goto label_308b28;
        case 0x308b34u: goto label_308b34;
        default: break;
    }

    ctx->pc = 0x308b08u;

    // 0x308b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b0c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x308b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x308b14: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x308b14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    // 0x308b18: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b1c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x308b1cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x308b20: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x308B20u;
    SET_GPR_U32(ctx, 31, 0x308B28u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x308B20u, 0x308B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B28u;
label_308b28:
    // 0x308b28: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x308b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b2c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x308B2Cu;
    SET_GPR_U32(ctx, 31, 0x308B34u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x308B2Cu, 0x308B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B34u;
label_308b34:
    // 0x308b34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b38: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308b40: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x308b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
    // 0x308b44: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x308B44u;
    {
        const bool branch_taken_0x308b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b44) {
            ctx->pc = 0x308BBCu;
            return;
        }
    }
    ctx->pc = 0x308B4Cu;
    // 0x308b4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b50: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x308b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308b54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b58: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x308b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308b5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x308b5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x308b60: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x308b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x308b64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b68: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x308b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x308b6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x308b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x308b70: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x308b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x308b74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308B74u;
    {
        const bool branch_taken_0x308b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b74) {
            ctx->pc = 0x308BA0u;
            return;
        }
    }
    ctx->pc = 0x308B7Cu;
    // 0x308b7c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308b80: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308b84: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308b8c: 0x0  nop
    ctx->pc = 0x308b8cu;
    // NOP
    // 0x308b90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x308b90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x308b94: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    // 0x308b98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x308B98u;
    {
        const bool branch_taken_0x308b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b98) {
            ctx->pc = 0x308BBCu;
            return;
        }
    }
    ctx->pc = 0x308BA0u;
}
