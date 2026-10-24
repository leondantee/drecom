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

// Function: entry_0021daa8
// Address: 0x21daa8 - 0x21db28
void entry_0021daa8_0x21daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021daa8_0x21daa8");
#endif

    switch (ctx->pc) {
        case 0x21dae8u: goto label_21dae8;
        default: break;
    }

    ctx->pc = 0x21daa8u;

    // 0x21daa8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21daac: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x21daacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x21dab0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x21dab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21dab4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21dab8: 0x1483001b  bne         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21DAB8u;
    {
        const bool branch_taken_0x21dab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21dab8) {
            ctx->pc = 0x21DB28u;
            return;
        }
    }
    ctx->pc = 0x21DAC0u;
    // 0x21dac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dac4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x21dac4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21dac8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21dac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21dacc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x21DACCu;
    {
        const bool branch_taken_0x21dacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dacc) {
            ctx->pc = 0x21DB28u;
            return;
        }
    }
    ctx->pc = 0x21DAD4u;
    // 0x21dad4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dad8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21dadc: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x21dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x21dae0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x21DAE0u;
    SET_GPR_U32(ctx, 31, 0x21DAE8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x21DAE8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21DAE8u) { return; }
    ctx->pc = 0x21DAE8u;
label_21dae8:
    // 0x21dae8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x21dae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21daec: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x21daecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x21daf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21daf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21daf4: 0x0  nop
    ctx->pc = 0x21daf4u;
    // NOP
    // 0x21daf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21daf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21dafc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x21dafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x21db00: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21db04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db08: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21db0c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x21db10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x21db14: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db18: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21db18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21db1c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x21db1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21db20: 0xc086158  jal         func_218560
    ctx->pc = 0x21DB20u;
    SET_GPR_U32(ctx, 31, 0x21DB28u);
    ctx->pc = 0x218560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218560u, 0x21DB20u, 0x21DB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB28u;
}
