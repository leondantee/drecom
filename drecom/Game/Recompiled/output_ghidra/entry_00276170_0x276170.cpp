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

// Function: entry_00276170
// Address: 0x276170 - 0x276218
void entry_00276170_0x276170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00276170_0x276170");
#endif

    switch (ctx->pc) {
        case 0x276194u: goto label_276194;
        default: break;
    }

    ctx->pc = 0x276170u;

    // 0x276170: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x276170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x276174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x276178: 0x3c033a03  lui         $v1, 0x3A03
    ctx->pc = 0x276178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14851 << 16));
    // 0x27617c: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x27617cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x276180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x276180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276184: 0x0  nop
    ctx->pc = 0x276184u;
    // NOP
    // 0x276188: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x276188u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27618c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27618Cu;
    SET_GPR_U32(ctx, 31, 0x276194u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27618Cu, 0x276194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276194u;
label_276194:
    // 0x276194: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x276194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x276198: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27619c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2761a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2761a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2761a4: 0xe4400c30  swc1        $f0, 0xC30($v0)
    ctx->pc = 0x2761a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3120), bits); }
    // 0x2761a8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761ac: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2761acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2761b0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2761b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2761b4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2761b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2761b8: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2761b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2761bc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2761bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2761c0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2761c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2761c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2761c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2761cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2761ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2761d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2761d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2761d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2761d8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2761d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2761dc: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2761dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2761e0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2761e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2761e4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2761e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2761e8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2761e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2761ec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2761ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2761f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2761f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2761f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2761f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2761f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2761F8u;
    {
        const bool branch_taken_0x2761f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2761f8) {
            ctx->pc = 0x276218u;
            return;
        }
    }
    ctx->pc = 0x276200u;
    // 0x276200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x276200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x276204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x276204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x276208: 0x0  nop
    ctx->pc = 0x276208u;
    // NOP
    // 0x27620c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x27620cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x276210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276210u;
    {
        const bool branch_taken_0x276210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276210) {
            ctx->pc = 0x276228u;
            return;
        }
    }
    ctx->pc = 0x276218u;
}
