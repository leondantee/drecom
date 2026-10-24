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

// Function: entry_00274788
// Address: 0x274788 - 0x274830
void entry_00274788_0x274788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274788_0x274788");
#endif

    switch (ctx->pc) {
        case 0x2747acu: goto label_2747ac;
        default: break;
    }

    ctx->pc = 0x274788u;

    // 0x274788: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x274788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27478c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27478cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274790: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x274790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x274794: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x274794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x274798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27479c: 0x0  nop
    ctx->pc = 0x27479cu;
    // NOP
    // 0x2747a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2747a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2747a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2747A4u;
    SET_GPR_U32(ctx, 31, 0x2747ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2747A4u, 0x2747ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2747ACu;
label_2747ac:
    // 0x2747ac: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x2747acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x2747b0: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x2747b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2747b4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2747b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2747b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2747b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2747bc: 0xe4600c34  swc1        $f0, 0xC34($v1)
    ctx->pc = 0x2747bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 3124), bits); }
    // 0x2747c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2747c4: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2747c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2747c8: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2747c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2747cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2747d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2747d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2747d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2747d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2747d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2747d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2747dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2747e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2747e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2747e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2747e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2747e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2747e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2747ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2747ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2747f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2747f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2747f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2747f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2747f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2747f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2747fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2747fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x274800: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x274800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x274804: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x274804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274808: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27480c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x274810: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274810u;
    {
        const bool branch_taken_0x274810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x274810) {
            ctx->pc = 0x274830u;
            return;
        }
    }
    ctx->pc = 0x274818u;
    // 0x274818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x274818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x27481c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27481cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274820: 0x0  nop
    ctx->pc = 0x274820u;
    // NOP
    // 0x274824: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x274824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x274828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x274828u;
    {
        const bool branch_taken_0x274828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274828) {
            ctx->pc = 0x274840u;
            return;
        }
    }
    ctx->pc = 0x274830u;
}
