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

// Function: entry_00136854
// Address: 0x136854 - 0x1368dc
void entry_00136854_0x136854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136854_0x136854");
#endif

    switch (ctx->pc) {
        case 0x136868u: goto label_136868;
        case 0x136878u: goto label_136878;
        default: break;
    }

    ctx->pc = 0x136854u;

    // 0x136854: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136858: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13685c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x13685cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x136860: 0xc040c9e  jal         func_103278
    ctx->pc = 0x136860u;
    SET_GPR_U32(ctx, 31, 0x136868u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x136868u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x136868u) { return; }
    ctx->pc = 0x136868u;
label_136868:
    // 0x136868: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x136868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13686c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x13686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136870: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x136870u;
    SET_GPR_U32(ctx, 31, 0x136878u);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x136870u, 0x136878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136878u;
label_136878:
    // 0x136878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13687c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x13687cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x136880: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x136880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x136884: 0x3064f000  andi        $a0, $v1, 0xF000
    ctx->pc = 0x136884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x136888: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x136888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13688c: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x13688Cu;
    {
        const bool branch_taken_0x13688c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13688c) {
            ctx->pc = 0x1368DCu;
            return;
        }
    }
    ctx->pc = 0x136894u;
    // 0x136894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x136894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x136898: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x136898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13689c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x13689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1368a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1368a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368a4: 0x0  nop
    ctx->pc = 0x1368a4u;
    // NOP
    // 0x1368a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1368a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1368ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1368acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1368b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1368b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1368b4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1368b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1368b8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1368bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1368bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1368c0: 0x0  nop
    ctx->pc = 0x1368c0u;
    // NOP
    // 0x1368c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1368c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1368c8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1368c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1368cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1368ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1368d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1368d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1368d4: 0xc0c7a0c  jal         func_31E830
    ctx->pc = 0x1368D4u;
    SET_GPR_U32(ctx, 31, 0x1368DCu);
    ctx->pc = 0x31E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E830u, 0x1368D4u, 0x1368DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368DCu;
}
