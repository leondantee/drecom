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

// Function: entry_002eca94
// Address: 0x2eca94 - 0x2ecb70
void entry_002eca94_0x2eca94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002eca94_0x2eca94");
#endif

    switch (ctx->pc) {
        case 0x2ecb40u: goto label_2ecb40;
        default: break;
    }

    ctx->pc = 0x2eca94u;

    // 0x2eca94: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2eca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2eca98: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2eca9c: 0x3086ffff  andi        $a2, $a0, 0xFFFF
    ctx->pc = 0x2eca9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ecaa0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2ecaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2ecaa4: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2ecaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecaa8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2ecaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecaac: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2ecab0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecab4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2ecab4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecab8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2ecab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ecabc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ecabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ecac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ecac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ecac4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2ecac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2ecac8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2ecac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2ecacc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2ecaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecad0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecad4: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2ecad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ecad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ecad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ecadc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2ecadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2ecae0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x2ecae0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ecae4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecae8: 0x8c247508  lw          $a0, 0x7508($at)
    ctx->pc = 0x2ecae8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecaec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2ecaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2ecaf0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2ecaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ecaf4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2ecaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ecaf8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ecaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecafc: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x2ecafcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2ecb00: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecb00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecb04: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2ecb04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2ecb08: 0x307effff  andi        $fp, $v1, 0xFFFF
    ctx->pc = 0x2ecb08u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ecb0c: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x2ecb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x2ecb10: 0x7ea021  addu        $s4, $v1, $fp
    ctx->pc = 0x2ecb10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2ecb14: 0x3283ff00  andi        $v1, $s4, 0xFF00
    ctx->pc = 0x2ecb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65280);
    // 0x2ecb18: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2ecb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2ecb1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2ecb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ecb20: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2ecb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2ecb24: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2ecb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2ecb28: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x2ecb28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ecb2c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2ecb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2ecb30: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2ECB30u;
    {
        const bool branch_taken_0x2ecb30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb30) {
            ctx->pc = 0x2ECB70u;
            return;
        }
    }
    ctx->pc = 0x2ECB38u;
    // 0x2ecb38: 0xc067648  jal         func_19D920
    ctx->pc = 0x2ECB38u;
    SET_GPR_U32(ctx, 31, 0x2ECB40u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2ECB38u, 0x2ECB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECB40u;
label_2ecb40:
    // 0x2ecb40: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2ecb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2ecb44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ecb44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ecb48: 0x0  nop
    ctx->pc = 0x2ecb48u;
    // NOP
    // 0x2ecb4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ecb4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ecb50: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x2ecb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x2ecb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ecb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ecb58: 0x0  nop
    ctx->pc = 0x2ecb58u;
    // NOP
    // 0x2ecb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ecb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ecb60: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x2ecb60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ecb64: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x2ecb64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ecb68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2ECB68u;
    {
        const bool branch_taken_0x2ecb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ecb68) {
            ctx->pc = 0x2ECBA8u;
            return;
        }
    }
    ctx->pc = 0x2ECB70u;
}
