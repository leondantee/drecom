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

// Function: entry_00274650
// Address: 0x274650 - 0x2746f8
void entry_00274650_0x274650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274650_0x274650");
#endif

    switch (ctx->pc) {
        case 0x274674u: goto label_274674;
        default: break;
    }

    ctx->pc = 0x274650u;

    // 0x274650: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x274650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274654: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x274654u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x274658: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x274658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x27465c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x27465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x274660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274664: 0x0  nop
    ctx->pc = 0x274664u;
    // NOP
    // 0x274668: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x274668u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27466c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x27466Cu;
    SET_GPR_U32(ctx, 31, 0x274674u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x27466Cu, 0x274674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274674u;
label_274674:
    // 0x274674: 0x111240  sll         $v0, $s1, 9
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x274678: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x274678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27467c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x27467cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x274680: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x274680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274684: 0xe4800c30  swc1        $f0, 0xC30($a0)
    ctx->pc = 0x274684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3120), bits); }
    // 0x274688: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x274688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27468c: 0x8c267508  lw          $a2, 0x7508($at)
    ctx->pc = 0x27468cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x387508u));
    // 0x274690: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x274690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x274694: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x274694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x274698: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x274698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27469c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27469cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2746a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2746a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2746a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2746a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2746a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2746a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2746ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2746acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2746b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2746b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2746b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2746b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2746b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2746b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2746bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2746c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2746c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2746c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2746c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2746c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2746cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2746ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2746d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2746d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2746d4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2746d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2746d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2746D8u;
    {
        const bool branch_taken_0x2746d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746d8) {
            ctx->pc = 0x2746F8u;
            return;
        }
    }
    ctx->pc = 0x2746E0u;
    // 0x2746e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2746e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2746e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2746e8: 0x0  nop
    ctx->pc = 0x2746e8u;
    // NOP
    // 0x2746ec: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2746ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2746f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2746F0u;
    {
        const bool branch_taken_0x2746f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746f0) {
            ctx->pc = 0x274708u;
            return;
        }
    }
    ctx->pc = 0x2746F8u;
}
