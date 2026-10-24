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

// Function: entry_001ffbb8
// Address: 0x1ffbb8 - 0x1ffc20
void entry_001ffbb8_0x1ffbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffbb8_0x1ffbb8");
#endif

    ctx->pc = 0x1ffbb8u;

    // 0x1ffbb8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbbc: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ffbbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ffbc0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1ffbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1ffbc4: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x1ffbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x1ffbc8: 0x14640015  bne         $v1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FFBC8u;
    {
        const bool branch_taken_0x1ffbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ffbc8) {
            ctx->pc = 0x1FFC20u;
            return;
        }
    }
    ctx->pc = 0x1FFBD0u;
    // 0x1ffbd0: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbd4: 0x3c043f75  lui         $a0, 0x3F75
    ctx->pc = 0x1ffbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16245 << 16));
    // 0x1ffbd8: 0x3483c28f  ori         $v1, $a0, 0xC28F
    ctx->pc = 0x1ffbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49807);
    // 0x1ffbdc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ffbdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ffbe0: 0xc4a002dc  lwc1        $f0, 0x2DC($a1)
    ctx->pc = 0x1ffbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ffbe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ffbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ffbe8: 0xe4a002dc  swc1        $f0, 0x2DC($a1)
    ctx->pc = 0x1ffbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 732), bits); }
    // 0x1ffbec: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ffbecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffbf0: 0x8ca30364  lw          $v1, 0x364($a1)
    ctx->pc = 0x1ffbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 868)));
    // 0x1ffbf4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ffbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ffbf8: 0xaca30364  sw          $v1, 0x364($a1)
    ctx->pc = 0x1ffbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 868), GPR_U32(ctx, 3));
    // 0x1ffbfc: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ffbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc00: 0x8c640364  lw          $a0, 0x364($v1)
    ctx->pc = 0x1ffc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ffc04: 0x148000de  bnez        $a0, . + 4 + (0xDE << 2)
    ctx->pc = 0x1FFC04u;
    {
        const bool branch_taken_0x1ffc04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc04) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FFC0Cu;
    // 0x1ffc0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ffc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ffc10: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ffc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ffc14: 0xac830358  sw          $v1, 0x358($a0)
    ctx->pc = 0x1ffc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 856), GPR_U32(ctx, 3));
    // 0x1ffc18: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x1FFC18u;
    {
        const bool branch_taken_0x1ffc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffc18) {
            ctx->pc = 0x1FFFA0u;
            return;
        }
    }
    ctx->pc = 0x1FFC20u;
}
