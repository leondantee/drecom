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

// Function: entry_0026a558
// Address: 0x26a558 - 0x26a5b8
void entry_0026a558_0x26a558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a558_0x26a558");
#endif

    switch (ctx->pc) {
        case 0x26a570u: goto label_26a570;
        default: break;
    }

    ctx->pc = 0x26a558u;

    // 0x26a558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a55c: 0x902200b9  lbu         $v0, 0xB9($at)
    ctx->pc = 0x26a55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B9u));
    // 0x26a560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a564: 0x2444ff80  addiu       $a0, $v0, -0x80
    ctx->pc = 0x26a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a568: 0xc045676  jal         func_1159D8
    ctx->pc = 0x26A568u;
    SET_GPR_U32(ctx, 31, 0x26A570u);
    ctx->pc = 0x1159D8u;
    {
        ctx->pc = 0x26A570u;
        ps2_stubs::abs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A570u) { return; }
    ctx->pc = 0x26A570u;
label_26a570:
    // 0x26a570: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x26a570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x26a574: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26A574u;
    {
        const bool branch_taken_0x26a574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a574) {
            ctx->pc = 0x26A5B8u;
            return;
        }
    }
    ctx->pc = 0x26A57Cu;
    // 0x26a57c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a580: 0x902200b9  lbu         $v0, 0xB9($at)
    ctx->pc = 0x26a580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B9u));
    // 0x26a584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a588: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x26a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a590: 0x0  nop
    ctx->pc = 0x26a590u;
    // NOP
    // 0x26a594: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26a594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a598: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x26a598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x26a59c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x26a59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x26a5a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a5a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a5a4: 0x0  nop
    ctx->pc = 0x26a5a4u;
    // NOP
    // 0x26a5a8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26a5a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a5ac: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x26a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a5b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a5b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a5b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x26a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->pc = 0x26a5b8u;
}
