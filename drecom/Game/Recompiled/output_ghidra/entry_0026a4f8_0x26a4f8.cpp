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

// Function: entry_0026a4f8
// Address: 0x26a4f8 - 0x26a558
void entry_0026a4f8_0x26a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026a4f8_0x26a4f8");
#endif

    switch (ctx->pc) {
        case 0x26a510u: goto label_26a510;
        default: break;
    }

    ctx->pc = 0x26a4f8u;

    // 0x26a4f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a4fc: 0x902200b8  lbu         $v0, 0xB8($at)
    ctx->pc = 0x26a4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B8u));
    // 0x26a500: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a504: 0x2444ff80  addiu       $a0, $v0, -0x80
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a508: 0xc045676  jal         func_1159D8
    ctx->pc = 0x26A508u;
    SET_GPR_U32(ctx, 31, 0x26A510u);
    ctx->pc = 0x1159D8u;
    {
        ctx->pc = 0x26A510u;
        ps2_stubs::abs(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26A510u) { return; }
    ctx->pc = 0x26A510u;
label_26a510:
    // 0x26a510: 0x28410021  slti        $at, $v0, 0x21
    ctx->pc = 0x26a510u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x26a514: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x26A514u;
    {
        const bool branch_taken_0x26a514 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a514) {
            ctx->pc = 0x26A558u;
            return;
        }
    }
    ctx->pc = 0x26A51Cu;
    // 0x26a51c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x26a51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x26a520: 0x902200b8  lbu         $v0, 0xB8($at)
    ctx->pc = 0x26a520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D00B8u));
    // 0x26a524: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26a524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26a528: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x26a528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x26a52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a530: 0x0  nop
    ctx->pc = 0x26a530u;
    // NOP
    // 0x26a534: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x26a534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x26a538: 0x3c02391d  lui         $v0, 0x391D
    ctx->pc = 0x26a538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14621 << 16));
    // 0x26a53c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x26a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18770);
    // 0x26a540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26a540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26a544: 0x0  nop
    ctx->pc = 0x26a544u;
    // NOP
    // 0x26a548: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x26a548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26a54c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x26a54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26a550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26a550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26a554: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x26a554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->pc = 0x26a558u;
}
