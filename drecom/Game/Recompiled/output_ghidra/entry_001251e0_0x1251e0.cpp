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

// Function: entry_001251e0
// Address: 0x1251e0 - 0x125238
void entry_001251e0_0x1251e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001251e0_0x1251e0");
#endif

    switch (ctx->pc) {
        case 0x125200u: goto label_125200;
        default: break;
    }

    ctx->pc = 0x1251e0u;

    // 0x1251e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1251e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1251e8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1251e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1251ec: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1251ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1251f0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1251f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1251f4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1251f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1251f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1251F8u;
    SET_GPR_U32(ctx, 31, 0x125200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1251F8u, 0x125200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125200u;
label_125200:
    // 0x125200: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x125200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x125204: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x125204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x125208: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x125208u;
    {
        const bool branch_taken_0x125208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125208) {
            ctx->pc = 0x125238u;
            return;
        }
    }
    ctx->pc = 0x125210u;
    // 0x125210: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x125210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125214: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x125214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125218: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12521c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x12521cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x125220: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x125220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125224: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x125224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125228: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x125228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12522c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x12522cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x125230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x125230u;
    {
        const bool branch_taken_0x125230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125230) {
            ctx->pc = 0x125258u;
            return;
        }
    }
    ctx->pc = 0x125238u;
}
