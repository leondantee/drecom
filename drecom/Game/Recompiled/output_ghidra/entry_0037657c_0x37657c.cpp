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

// Function: entry_0037657c
// Address: 0x37657c - 0x376650
void entry_0037657c_0x37657c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037657c_0x37657c");
#endif

    switch (ctx->pc) {
        case 0x3765a8u: goto label_3765a8;
        case 0x3765b0u: goto label_3765b0;
        case 0x376620u: goto label_376620;
        default: break;
    }

    ctx->pc = 0x37657cu;

    // 0x37657c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37657cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376580: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376584: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376584u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376588: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37658c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x37658cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376590: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376594: 0x24065a08  addiu       $a2, $zero, 0x5A08
    ctx->pc = 0x376594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23048));
    // 0x376598: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37659c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37659cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3765a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3765A0u;
    SET_GPR_U32(ctx, 31, 0x3765A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3765A0u, 0x3765A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765A8u;
label_3765a8:
    // 0x3765a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3765A8u;
    SET_GPR_U32(ctx, 31, 0x3765B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3765A8u, 0x3765B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3765B0u;
label_3765b0:
    // 0x3765b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3765b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3765b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3765b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3765b8: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x3765b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x3765bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3765bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3765c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3765c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3765c4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3765c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3765cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765d4: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3765d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3765d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3765dc: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x3765dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3765e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765e4: 0x0  nop
    ctx->pc = 0x3765e4u;
    // NOP
    // 0x3765e8: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x3765e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x3765ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3765ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3765f0: 0x0  nop
    ctx->pc = 0x3765f0u;
    // NOP
    // 0x3765f4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3765f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3765f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3765f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3765fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3765fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376600: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x376600u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x376604: 0x3c023fbd  lui         $v0, 0x3FBD
    ctx->pc = 0x376604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16317 << 16));
    // 0x376608: 0x3442e44e  ori         $v0, $v0, 0xE44E
    ctx->pc = 0x376608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58446);
    // 0x37660c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37660cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x376610: 0x0  nop
    ctx->pc = 0x376610u;
    // NOP
    // 0x376614: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x376618: 0xc067694  jal         func_19DA50
    ctx->pc = 0x376618u;
    SET_GPR_U32(ctx, 31, 0x376620u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x376618u, 0x376620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376620u;
label_376620:
    // 0x376620: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x376620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x376624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x376624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x376628: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x376628u;
    {
        const bool branch_taken_0x376628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376628) {
            ctx->pc = 0x376650u;
            return;
        }
    }
    ctx->pc = 0x376630u;
    // 0x376630: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x376630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x376634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x376634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x376638: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x376638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37663c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37663cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x376640: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x376640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x376644: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x376644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x376648: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37664c: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x37664cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x376650u;
}
