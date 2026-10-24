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

// Function: entry_002ea6c4
// Address: 0x2ea6c4 - 0x2ea7a0
void entry_002ea6c4_0x2ea6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea6c4_0x2ea6c4");
#endif

    switch (ctx->pc) {
        case 0x2ea770u: goto label_2ea770;
        default: break;
    }

    ctx->pc = 0x2ea6c4u;

    // 0x2ea6c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea6c8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea6cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ea6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea6d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea6d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea6dc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ea6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ea6e0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea6e4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea6e8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea6e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea6ec: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ea6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ea6f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ea6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ea6f4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2ea6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2ea6f8: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ea6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ea6fc: 0x83f021  addu        $fp, $a0, $v1
    ctx->pc = 0x2ea6fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ea700: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea704: 0xac3e7508  sw          $fp, 0x7508($at)
    ctx->pc = 0x2ea704u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 30)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ea708: 0x33c300ff  andi        $v1, $fp, 0xFF
    ctx->pc = 0x2ea708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x2ea70c: 0x30740003  andi        $s4, $v1, 0x3
    ctx->pc = 0x2ea70cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2ea710: 0x26930001  addiu       $s3, $s4, 0x1
    ctx->pc = 0x2ea710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ea714: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea718: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ea718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea71c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ea720: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x2ea720u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea724: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ea724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ea728: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ea728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ea72c: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2ea72cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ea730: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea734: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ea738: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2ea738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea73c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ea73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ea740: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea744: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ea744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ea748: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ea748u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ea74c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ea74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ea750: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ea750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ea754: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ea754u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ea758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea75c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ea760: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EA760u;
    {
        const bool branch_taken_0x2ea760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea760) {
            ctx->pc = 0x2EA7A0u;
            return;
        }
    }
    ctx->pc = 0x2EA768u;
    // 0x2ea768: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EA768u;
    SET_GPR_U32(ctx, 31, 0x2EA770u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EA768u, 0x2EA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA770u;
label_2ea770:
    // 0x2ea770: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2ea770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2ea774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ea774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ea778: 0x0  nop
    ctx->pc = 0x2ea778u;
    // NOP
    // 0x2ea77c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ea77cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ea780: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x2ea780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
    // 0x2ea784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea788: 0x0  nop
    ctx->pc = 0x2ea788u;
    // NOP
    // 0x2ea78c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ea78cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ea790: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ea790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ea794: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2ea794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea798: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EA798u;
    {
        const bool branch_taken_0x2ea798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea798) {
            ctx->pc = 0x2EA7D8u;
            return;
        }
    }
    ctx->pc = 0x2EA7A0u;
}
