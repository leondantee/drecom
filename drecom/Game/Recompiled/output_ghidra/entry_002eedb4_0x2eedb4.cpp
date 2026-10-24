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

// Function: entry_002eedb4
// Address: 0x2eedb4 - 0x2eee90
void entry_002eedb4_0x2eedb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eedb4_0x2eedb4");
#endif

    switch (ctx->pc) {
        case 0x2eee60u: goto label_2eee60;
        default: break;
    }

    ctx->pc = 0x2eedb4u;

    // 0x2eedb4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedb8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eedb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eedbc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eedbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eedc0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eedc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eedc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eedc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eedcc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eedccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eedd0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedd4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eedd8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eedd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eeddc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eeddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eede0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eede0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eede4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eede4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eede8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eede8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eedec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eedecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eedf0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eedf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eedf4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eedf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eedf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eedf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eedfc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2eedfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2eee00: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2eee00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2eee04: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee08: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eee08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eee0c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eee0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eee10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eee10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eee14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eee18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eee1c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2eee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2eee20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee24: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2eee24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2eee28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2eee28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2eee2c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2eee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2eee30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eee34: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2eee34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2eee38: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2eee38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2eee3c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2eee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2eee40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eee40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eee44: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2eee44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2eee48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2eee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2eee4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2eee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2eee50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEE50u;
    {
        const bool branch_taken_0x2eee50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee50) {
            ctx->pc = 0x2EEE90u;
            return;
        }
    }
    ctx->pc = 0x2EEE58u;
    // 0x2eee58: 0xc067648  jal         func_19D920
    ctx->pc = 0x2EEE58u;
    SET_GPR_U32(ctx, 31, 0x2EEE60u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2EEE58u, 0x2EEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EEE60u;
label_2eee60:
    // 0x2eee60: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2eee64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eee68: 0x0  nop
    ctx->pc = 0x2eee68u;
    // NOP
    // 0x2eee6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2eee6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2eee70: 0x3c024282  lui         $v0, 0x4282
    ctx->pc = 0x2eee70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17026 << 16));
    // 0x2eee74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2eee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eee78: 0x0  nop
    ctx->pc = 0x2eee78u;
    // NOP
    // 0x2eee7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2eee7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2eee80: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2eee80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2eee84: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2eee84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2eee88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EEE88u;
    {
        const bool branch_taken_0x2eee88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eee88) {
            ctx->pc = 0x2EEEC8u;
            return;
        }
    }
    ctx->pc = 0x2EEE90u;
}
