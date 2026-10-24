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

// Function: entry_00229a50
// Address: 0x229a50 - 0x229b04
void entry_00229a50_0x229a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00229a50_0x229a50");
#endif

    switch (ctx->pc) {
        case 0x229a58u: goto label_229a58;
        default: break;
    }

    ctx->pc = 0x229a50u;

    // 0x229a50: 0xc067694  jal         func_19DA50
    ctx->pc = 0x229A50u;
    SET_GPR_U32(ctx, 31, 0x229A58u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x229A50u, 0x229A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229A58u;
label_229a58:
    // 0x229a58: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x229a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x229a5c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x229a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x229a60: 0x24650003  addiu       $a1, $v1, 0x3
    ctx->pc = 0x229a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x229a64: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x229a64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x229a68: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x229a68u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x229a6c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a70: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229a74: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x229a74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x229a78: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a7c: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x229a7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x229a80: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x229a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x229a84: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x229a84u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x229a88: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x229a88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x229a8c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x229A8Cu;
    {
        const bool branch_taken_0x229a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a8c) {
            ctx->pc = 0x229B04u;
            return;
        }
    }
    ctx->pc = 0x229A94u;
    // 0x229a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229a98: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x229a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229a9c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x229a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229aa0: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x229aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x229aa4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229aa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229aa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229aac: 0x0  nop
    ctx->pc = 0x229aacu;
    // NOP
    // 0x229ab0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x229ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x229ab4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x229ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x229ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229abc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229ac0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x229ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x229ac4: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x229ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x229ac8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x229ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x229acc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229ad0: 0x0  nop
    ctx->pc = 0x229ad0u;
    // NOP
    // 0x229ad4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x229ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x229ad8: 0x0  nop
    ctx->pc = 0x229ad8u;
    // NOP
    // 0x229adc: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x229ADCu;
    {
        const bool branch_taken_0x229adc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229adc) {
            ctx->pc = 0x229B6Cu;
            return;
        }
    }
    ctx->pc = 0x229AE4u;
    // 0x229ae4: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x229ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x229ae8: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x229ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x229aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x229aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x229af0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x229af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x229af4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x229af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x229af8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x229af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x229afc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x229AFCu;
    {
        const bool branch_taken_0x229afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229afc) {
            ctx->pc = 0x229B6Cu;
            return;
        }
    }
    ctx->pc = 0x229B04u;
}
