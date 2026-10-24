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

// Function: entry_00135580
// Address: 0x135580 - 0x1355d0
void entry_00135580_0x135580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00135580_0x135580");
#endif

    switch (ctx->pc) {
        case 0x135598u: goto label_135598;
        case 0x1355bcu: goto label_1355bc;
        default: break;
    }

    ctx->pc = 0x135580u;

    // 0x135580: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x135580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135584: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x135584u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x135588: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13558c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x13558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135590: 0xc040d0e  jal         func_103438
    ctx->pc = 0x135590u;
    SET_GPR_U32(ctx, 31, 0x135598u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x135598u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135598u) { return; }
    ctx->pc = 0x135598u;
label_135598:
    // 0x135598: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13559c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x13559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1355a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1355a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1355a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1355a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1355a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1355ac: 0x0  nop
    ctx->pc = 0x1355acu;
    // NOP
    // 0x1355b0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1355b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1355b4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1355B4u;
    SET_GPR_U32(ctx, 31, 0x1355BCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1355B4u, 0x1355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1355BCu;
label_1355bc:
    // 0x1355bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1355bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1355c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1355c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1355c4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1355c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1355c8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1355C8u;
    SET_GPR_U32(ctx, 31, 0x1355D0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1355D0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1355D0u) { return; }
    ctx->pc = 0x1355D0u;
}
