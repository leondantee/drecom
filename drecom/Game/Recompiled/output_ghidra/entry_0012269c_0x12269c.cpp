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

// Function: entry_0012269c
// Address: 0x12269c - 0x122768
void entry_0012269c_0x12269c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012269c_0x12269c");
#endif

    switch (ctx->pc) {
        case 0x122718u: goto label_122718;
        default: break;
    }

    ctx->pc = 0x12269cu;

    // 0x12269c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x12269cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1226a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1226a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1226a4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1226a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1226a8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1226a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1226ac: 0x1480002e  bnez        $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1226ACu;
    {
        const bool branch_taken_0x1226ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1226ac) {
            ctx->pc = 0x122768u;
            return;
        }
    }
    ctx->pc = 0x1226B4u;
    // 0x1226b4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1226b8: 0x946211f4  lhu         $v0, 0x11F4($v1)
    ctx->pc = 0x1226b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4596)));
    // 0x1226bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1226bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1226c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1226c4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1226C4u;
    {
        const bool branch_taken_0x1226c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1226c4) {
            ctx->pc = 0x122768u;
            return;
        }
    }
    ctx->pc = 0x1226CCu;
    // 0x1226cc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1226ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1226d0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1226d4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1226d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1226d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1226d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1226dc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1226dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1226e0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1226e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1226e8: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x1226e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x1226ec: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x1226ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1226f0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1226f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1226f4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1226f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1226f8: 0xc46111f8  lwc1        $f1, 0x11F8($v1)
    ctx->pc = 0x1226f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1226fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x122700: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x122700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x122704: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x122704u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122708: 0x0  nop
    ctx->pc = 0x122708u;
    // NOP
    // 0x12270c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x12270cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x122710: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x122710u;
    SET_GPR_U32(ctx, 31, 0x122718u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x122710u, 0x122718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122718u;
label_122718:
    // 0x122718: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x122718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x12271c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x12271cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122720: 0x908509df  lbu         $a1, 0x9DF($a0)
    ctx->pc = 0x122720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x122724: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x122724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x122728: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x122728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x12272c: 0x14a00180  bnez        $a1, . + 4 + (0x180 << 2)
    ctx->pc = 0x12272Cu;
    {
        const bool branch_taken_0x12272c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12272c) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122734u;
    // 0x122734: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x122734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x122738: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x122738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12273c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x12273cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x122740: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122744: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x122744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x122748: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x122748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12274c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12274cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x122750: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x122750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x122754: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x122754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x122758: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x122758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x12275c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12275cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x122760: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x122760u;
    {
        const bool branch_taken_0x122760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x122760) {
            ctx->pc = 0x122D30u;
            return;
        }
    }
    ctx->pc = 0x122768u;
}
