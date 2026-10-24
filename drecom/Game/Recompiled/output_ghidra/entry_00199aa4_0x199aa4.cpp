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

// Function: entry_00199aa4
// Address: 0x199aa4 - 0x199b18
void entry_00199aa4_0x199aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199aa4_0x199aa4");
#endif

    switch (ctx->pc) {
        case 0x199ad4u: goto label_199ad4;
        case 0x199ae8u: goto label_199ae8;
        default: break;
    }

    ctx->pc = 0x199aa4u;

    // 0x199aa4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199aa8: 0x904209de  lbu         $v0, 0x9DE($v0)
    ctx->pc = 0x199aa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2526)));
    // 0x199aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x199aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x199ab0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x199ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x199ab4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x199AB4u;
    {
        const bool branch_taken_0x199ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ab4) {
            ctx->pc = 0x199B18u;
            return;
        }
    }
    ctx->pc = 0x199ABCu;
    // 0x199abc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ac0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199ac4: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x199ac8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x199ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x199acc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x199ACCu;
    SET_GPR_U32(ctx, 31, 0x199AD4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x199ACCu, 0x199AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AD4u;
label_199ad4:
    // 0x199ad4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x199ad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x199ad8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199adc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x199ae0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x199AE0u;
    SET_GPR_U32(ctx, 31, 0x199AE8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x199AE0u, 0x199AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AE8u;
label_199ae8:
    // 0x199ae8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199aec: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x199aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199af0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199af8: 0x0  nop
    ctx->pc = 0x199af8u;
    // NOP
    // 0x199afc: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x199AFCu;
    {
        const bool branch_taken_0x199afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199afc) {
            ctx->pc = 0x199B3Cu;
            return;
        }
    }
    ctx->pc = 0x199B04u;
    // 0x199b04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x199b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199b08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199b0c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x199b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x199b10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x199B10u;
    {
        const bool branch_taken_0x199b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b10) {
            ctx->pc = 0x199B3Cu;
            return;
        }
    }
    ctx->pc = 0x199B18u;
}
