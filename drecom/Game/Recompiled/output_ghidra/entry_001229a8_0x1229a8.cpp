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

// Function: entry_001229a8
// Address: 0x1229a8 - 0x122a98
void entry_001229a8_0x1229a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001229a8_0x1229a8");
#endif

    switch (ctx->pc) {
        case 0x122a48u: goto label_122a48;
        default: break;
    }

    ctx->pc = 0x1229a8u;

    // 0x1229a8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1229a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1229ac: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1229acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1229b0: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1229b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1229b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1229b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1229b8: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x1229B8u;
    {
        const bool branch_taken_0x1229b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1229b8) {
            ctx->pc = 0x122C00u;
            return;
        }
    }
    ctx->pc = 0x1229C0u;
    // 0x1229c0: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1229c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1229c4: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1229c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1229c8: 0x34850fdb  ori         $a1, $a0, 0xFDB
    ctx->pc = 0x1229c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1229cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1229ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1229d0: 0x0  nop
    ctx->pc = 0x1229d0u;
    // NOP
    // 0x1229d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1229d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1229d8: 0x0  nop
    ctx->pc = 0x1229d8u;
    // NOP
    // 0x1229dc: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x1229DCu;
    {
        const bool branch_taken_0x1229dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1229dc) {
            ctx->pc = 0x122AD0u;
            return;
        }
    }
    ctx->pc = 0x1229E4u;
    // 0x1229e4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1229e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1229e8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1229ec: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1229ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1229f0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1229f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1229f4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1229F4u;
    {
        const bool branch_taken_0x1229f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1229f4) {
            ctx->pc = 0x122A98u;
            return;
        }
    }
    ctx->pc = 0x1229FCu;
    // 0x1229fc: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x1229fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a00: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x122a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x122a04: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x122a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x122a08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x122a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x122a0c: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x122a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x122a10: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a14: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x122a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x122a18: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x122a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x122a1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x122a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x122a20: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x122a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x122a24: 0x8fb40078  lw          $s4, 0x78($sp)
    ctx->pc = 0x122a24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a28: 0xc68111f8  lwc1        $f1, 0x11F8($s4)
    ctx->pc = 0x122a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x122a2c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x122a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x122a30: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x122a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x122a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x122a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122a38: 0x0  nop
    ctx->pc = 0x122a38u;
    // NOP
    // 0x122a3c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x122a3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122a40: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122A40u;
    SET_GPR_U32(ctx, 31, 0x122A48u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122A40u, 0x122A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122A48u;
label_122a48:
    // 0x122a48: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x122a4c: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a50: 0x90c509df  lbu         $a1, 0x9DF($a2)
    ctx->pc = 0x122a50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2527)));
    // 0x122a54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x122a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x122a58: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x122a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x122a5c: 0x148000b4  bnez        $a0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x122A5Cu;
    {
        const bool branch_taken_0x122a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x122a5c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122A64u;
    // 0x122a64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x122a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122a68: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a6c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x122a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x122a70: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a74: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122a74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a78: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a7c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x122a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a80: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a84: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x122a84u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122a88: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122a8c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x122a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x122a90: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x122A90u;
    {
        const bool branch_taken_0x122a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122a90) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122A98u;
}
